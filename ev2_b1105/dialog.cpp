#include "dialog.h"
#include "ui_dialog.h"
#include <QPixmap>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QtMqtt/QMqttClient>
#include <thread>
#include <chrono>
#include <QThread>
#include <QLineEdit>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QSettings>

Dialog::Dialog(QWidget *parent) : QDialog(parent) , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //:::::::::::::::::::    Set Home Page and Image  :::::::::::::::::::::::::::
    //Set index to the home page on starting
    ui->stackedWidget_1->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);

    ui->pushButton->hide();

    //Set car image on the home page
    //    viewCarImage();

    //:::::::::::::::::::    MQTT Section   :::::::::::::::::::::::::::::::::::

    // Create QSettings object to read the configuration file
    QSettings settings("/opt/ev2/bin/config.ini", QSettings::IniFormat);
//    QSettings settings("config.ini", QSettings::IniFormat);
    // Read the server IP address and port number
    QString serverIp = settings.value("server_config/SERVER_IP").toString();
    int serverPort = settings.value("server_config/SERVER_PORT").toInt();
//    QString mqttUsername = settings.value("server_config/USER_NAME");
//    QString mqttPass = settings.value("server_config/USER_PASS");

    // Print the values
    qDebug() << "Server IP:" << serverIp;
    qDebug() << "Server Port:" << serverPort;

    m_client = new QMqttClient(this);
//    m_client->setUsername("UFC");
//    m_client->setPassword("ufc123");
//    m_client->setClientId("UFC_123");

//    float v1;
//    float c1;
//    float v2;
//    float c2;

//    m_client->setHostname(serverIp);
//    m_client->setPort(serverPort);
    m_client->setHostname("localhost");
//        m_client->setHostname(getLocalIpAddress());
    m_client->setPort(1883);


    qDebug() << "INFO: Status:" << m_client->state();
    connect_to_broker();
    m_client->requestPing();

    connect(m_client, &QMqttClient::stateChanged, this, &Dialog::updateLogStateChange);
    connect(m_client, &QMqttClient::stateChanged, this, &Dialog::mqttStateChanged);
//    connect(m_client, &QMqttClient::disconnected, this, &Dialog::brokerDisconnected);
    connect(m_client, &QMqttClient::connected, this, &Dialog::topic_subscription);
    connect(m_client, &QMqttClient::messageReceived, this, &Dialog::process_message);

    //:::::::::::::::::::    MQTT Section   :::::::::::::::::::::::::::::::::::

    qDebug() << "INFO: Status:" << m_client->state();

    // Connect signals to slots for custom events
//    QObject::connect(this, &Dialog::rfid_read_action, this, &Dialog::rfid_read_react);
//    QObject::connect(this, &Dialog::idAuthorisation, this, &Dialog::);

    connect(this, &Dialog::auth_status, this, &Dialog::rfid_read_react);
    connect(this, &Dialog::connect_charger_message, this, &Dialog::rfid_read_react);
    connect(this, &Dialog::charger_connected_message, this, &Dialog::rfid_read_react);
    connect(this, &Dialog::page4_action, this, &Dialog::page4_reaction);
    connect(this, &Dialog::page5_action, this, &Dialog::page5_reaction);

    connect(m_client, &QMqttClient::pingResponseReceived, this, [this]() {
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String("INFO: PingResponse")
                    + QLatin1Char('\n');
        qDebug() << "INFO: Ping Response: " << content;

    });
}

Dialog::~Dialog()
{
    delete ui;
    delete m_client;
    qDebug() << "Ojects detelted from Memory.";
 }

#if 0
void Dialog::setClientPort(int iPort)
{
    m_client->setPort(iPort);
}
#endif

void Dialog::connect_to_broker(){
    qDebug() << "INFO: Status :" << m_client->state();
    if (m_client->state() == QMqttClient::Disconnected) {
        qDebug() << "INFO: Connecting to broker..." ;
        m_client->connectToHost();
        qDebug() << "INFO: Status :" << m_client->state();
    }
    else if(m_client->state() == QMqttClient::Connecting){
        qDebug() << "INFO: Connecting to broker..." ;
        m_client->connectToHost();
        qDebug() << "INFO: Status :" << m_client->state();
    }
}

void Dialog::brokerDisconnected()
{
    qDebug() << "INFO: Broker got disconnected." << m_client->state();
    //    ui->buttonConnect->setText(tr("Connect"));
    ui->stackedWidget_1->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
}

void Dialog::updateLogStateChange(){
    qDebug() << "updateLogStateChange" << m_client->state();
    if(m_client->state()==2){
        ui->stackedWidget_1->setCurrentIndex(1);
        ui->stackedWidget_2->setCurrentIndex(4);
    }
    if(m_client->state()==0){
        ui->stackedWidget_1->setCurrentIndex(0);
        ui->stackedWidget_2->setCurrentIndex(0);
    }
    if(m_client->state()==1){
        ui->stackedWidget_1->setCurrentIndex(0);
        ui->stackedWidget_2->setCurrentIndex(0);
    }
}

void Dialog::mqttStateChanged(QMqttClient::ClientState state)
{
    if (state == QMqttClient::Connected)
    {
        qDebug() << "Connected to MQTT broker.";
        // Subscribe to topics or perform other tasks here
    }
    else if (state == QMqttClient::Disconnected)
    {
        qDebug() << "Disconnected from MQTT broker. Reconnecting...";
        // Try reconnecting after a short delay
        QTimer::singleShot(2000, this, &Dialog::connect_to_broker);
    }
}

void Dialog::topic_subscription(){
    if (m_client->state() == QMqttClient::Connected){
        auto subscription = m_client->subscribe(auth_stat);
        m_client->subscribe(connect_string);
        m_client->subscribe(charger_connected);
        m_client->subscribe(charge_stopped);
        m_client->subscribe(soc_1);
        m_client->subscribe(voltage_1);
        m_client->subscribe(current_1);
        m_client->subscribe(full_soc_1);
        m_client->subscribe(energy_1);
//        QString voltage_1_g1 = "vsecc/connector/1/pe/measured_voltage";
        if (!subscription) {
                ui->stackedWidget_1->setCurrentIndex(0);
                ui->stackedWidget_2->setCurrentIndex(0);
                return;
            }
            else {
                    qDebug() << "INFO: State: " << m_client->state();
                }


        m_client->subscribe(i111);
        m_client->subscribe(voltage_1);
//        m_client->subscribe(voltage_1_g1);
        m_client->subscribe(current_1);
        m_client->subscribe(i141);
        m_client->subscribe(i151);
        m_client->subscribe(i161);
        m_client->subscribe(i171);
        m_client->subscribe(i181);
        m_client->subscribe(i191);
        m_client->subscribe(i1101);
        m_client->subscribe(i1111);
        m_client->subscribe(soc_1);
        m_client->subscribe(full_soc_1);
        m_client->subscribe(i1141);
        m_client->subscribe(i1151);
        m_client->subscribe(i116);
        m_client->subscribe(i117);
        m_client->subscribe(i118);
        m_client->subscribe(energy_1);
        m_client->subscribe(i1201);
        m_client->subscribe(i1211);
        m_client->subscribe(i1221);
        m_client->subscribe(i211);
        m_client->subscribe(i221);
        m_client->subscribe(i231);
        m_client->subscribe(i241);
        m_client->subscribe(i251);
        m_client->subscribe(i261);
        m_client->subscribe(i271);
        m_client->subscribe(i281);
        m_client->subscribe(i291);
        m_client->subscribe(i2101);

        //Gun 2 Topics
        m_client->subscribe(i112);
        m_client->subscribe(voltage_2);
        m_client->subscribe(current_2);
        m_client->subscribe(i142);
        m_client->subscribe(i152);
        m_client->subscribe(i162);
        m_client->subscribe(i172);
        m_client->subscribe(i182);
        m_client->subscribe(i192);
        m_client->subscribe(i1102);
        m_client->subscribe(i1112);
        m_client->subscribe(soc_2);
        m_client->subscribe(full_soc_2);
        m_client->subscribe(i1142);
        m_client->subscribe(i1152);
        m_client->subscribe(i116);
        m_client->subscribe(i117);
        m_client->subscribe(i118);
        m_client->subscribe(energy_2);
        m_client->subscribe(i1202);
        m_client->subscribe(i1212);
        m_client->subscribe(i1222);
        m_client->subscribe(i212);
        m_client->subscribe(i222);
        m_client->subscribe(i232);
        m_client->subscribe(i242);
        m_client->subscribe(i252);
        m_client->subscribe(i262);
        m_client->subscribe(i272);
        m_client->subscribe(i282);
        m_client->subscribe(i292);
        m_client->subscribe(i2102);
    }
    else {
        ui->stackedWidget_1->setCurrentIndex(0);
        ui->stackedWidget_2->setCurrentIndex(0);
    }
    qDebug() << "INFO: All topics subscribed!!";
}

//bool isConnected;
//float v1;
//float c1;
//float v2;
//float c2;

void Dialog::process_message(const QByteArray &message, const QMqttTopicName &topic){
    QString topicName = topic.name();
    QString payload = QString::fromUtf8(message);


    qDebug() << "MESSGAE: Tpoic : " << topicName << " Payload : " << payload;

    if (topic == i1111){
        if (payload == STATE_A){
//            ui->dial->setValue(default_dial_val1);
            ui->voltage_g1_2->setText(default_v1);
            ui->current_g1_2->setText(default_c1);
//            ui->dial_2->setValue(default_dial_2_val1);
            ui->time_t_f_soc_val_g1_4->setText(default_f_soc_1);
//            ui->energy_g1_val->setText(default_ec1);
            ui->progressBar->setValue(default_SOC1);
            ui->label_25->setText("0 KW");
            ui->energy_g1_val->setText("0 KWh");
        }
    }
    if (topic == i1112){
        if (payload == STATE_A){
//            ui->dial_3->setValue(default_dial_val2);
            ui->voltage_g2->setText(default_v2);
            ui->current_g2->setText(default_c2);
//            ui->dial_4->setValue(default_dial_2_val2);
            ui->time_t_f_soc_val_g2_6->setText(default_f_soc_2);
            ui->energy_g2_val->setText(default_ec2);
            ui->progressBar_2->setValue(default_SOC2);
            ui->label_28->setText("0 KW");
            ui->energy_g2_val->setText("0 KWh");
        }
    }


    if (topic == i151){
        ui->label_20->setText(payload);
    }
    if (topic == i152){
        ui->label_21->setText(payload);
    }

    //Charging Standard
    if (topic == i1151){
        ui->label_22->setText(payload);
    }
    if (topic == i1152){
        ui->label_27->setText(payload);
    }
    //    CP_state
    if (topic == i1111){
        ui->label_23->setText(payload);
    }

    if (topic == i1112){
        ui->label_26->setText(payload);
    }

    //Charging Session State
    if(topic == i1141){
        ui->label_24->setText(payload);
    }
    if(topic == i1142){
        ui->label_30->setText(payload);
    }
    // OCPP_Connection Status
    if (topic == i1162){
        ui->label_31->setText(payload);
    }


    if (topic == soc_1){
//        ui->soc_val_g1->setText(payload + " %");
//        ui->label_19->setText(payload.toInt());
        ui->progressBar->setValue(payload.toInt());

    }
    else if (topic == voltage_1){
//        ui->voltage_val_g1->setText(payload + " V");
//        ui->dial->setValue(payload.toFloat());

        ui->voltage_g1_2->setText((payload.left(payload.length() - 4)) + " V");
        v1 = payload.toFloat();
    }
    else if (topic == current_1){
//        ui->current_val_g1->setText(payload + " A");
        ui->current_g1_2->setText((payload.left(payload.length() - 4)) + " A");
//        ui->dial_2->setValue(payload.toFloat());
        c1 = payload.toFloat();
        float power1 = v1 * c1;
        ui->label_25->setText(QString::number(power1/1000) + "KW");
    }
    else if (topic == full_soc_1){
        ui->time_t_f_soc_val_g1_4->setText(payload + " Sec");
    }
    else if (topic == energy_1){
        ui->energy_g1_val->setText(payload + " kWh");
    }

    else if (topic == soc_2){
//        ui->soc_val_g1_3->setText(payload + " %");
//        ui->progressBar_2->setText(payload + " %");
        ui->progressBar_2->setValue(payload.toInt());
    }
    else if (topic == voltage_2){
        ui->voltage_g2->setText((payload.left(payload.length() - 4)) + " V");
//        ui->dial_3->setValue(payload.toFloat());
        v2 = payload.toFloat();
    }
    else if (topic == current_2){
        ui->current_g2->setText((payload.left(payload.length() - 4)) + " A");
//        ui->dial_4->setValue(payload.toFloat());
        c2 = payload.toFloat();
        float power2 = v2 * c2;
        ui->label_28->setText(QString::number(power2/1000) + " KW");
    }
    else if (topic == full_soc_2){
        ui->time_t_f_soc_val_g2_6->setText(payload + " Sec");
    }
    else if (topic == energy_2){
        ui->energy_g2_val->setText(payload + " kWh");
    }
}

void Dialog::rfid_read_react(QString payload, QString topic){
    ui->stackedWidget_1->setCurrentIndex(2);
    if (payload == pending){
        ui->auth_status->setText("Pending...");
    }
    else if (payload == deauth){
        ui->auth_status->setText("RFID Rejected...");
        ui->stackedWidget_1->setCurrentIndex(1);
        ui->auth_status->setText("Please wait...");
    }
    else if (payload == auth){
        ui->auth_status->setText("RFID Authorised.");
        ui->connect_stat->setText("Please Connect the Charger");
    }
    else{
        ui->auth_status->setText("Please Wait....");
    }

    if (topic == connect_string){
        ui->connect_stat->setText(getConnectString());
    }
}

void Dialog::page4_reaction(QString payload, QString topic)
{
    if (topic == charger_connected){
        if(payload == QString(STATE_B)){
            ui->stackedWidget_1->setCurrentIndex(3);
        }
        else if (payload == STATE_A) {
            ui->stackedWidget_1->setCurrentIndex(1);
        }

    }
}

void Dialog::page5_reaction()
{
    ui->stackedWidget_1->setCurrentIndex(4);
}



QString Dialog::getLocalIpAddress()
{
    QList<QHostAddress> ipAddressesList;

    // Get a list of network interfaces
    QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();

    // Iterate through the interfaces to find the one with the IPv4 address
    for (int i = 0; i < interfaces.count(); i++) {
        QNetworkInterface iface = interfaces.at(i);
        if (iface.flags().testFlag(QNetworkInterface::IsUp) && !iface.flags().testFlag(QNetworkInterface::IsLoopBack)) {
            QList<QNetworkAddressEntry> entries = iface.addressEntries();
            for (int j = 0; j < entries.count(); j++) {
                QNetworkAddressEntry entry = entries.at(j);
                if (entry.ip().protocol() == QAbstractSocket::IPv4Protocol) {
                    ipAddressesList.append(entry.ip());
                    QString IP = entry.ip().toString();
                    qDebug() << "IP Address : " << IP;
                }
            }
        }
    }

    // Return the first IPv4 address found
    if (!ipAddressesList.isEmpty())
        return ipAddressesList.first().toString();
    else
        return QString();
}

void Dialog::on_btn_manual_clicked()
{
    _manual_op = new manual_op(m_client);
    _manual_op->setModal(true);
    _manual_op->setWindowTitle("::: Manual Mode :::");
    _manual_op->showFullScreen();
//    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
//    _manual_op->showMaximized();
    _manual_op->exec();
}

void Dialog::setConnectString(QString iPayload)
{
    ConnectString = iPayload;
}

QString Dialog::getConnectString()
{
    return ConnectString;
}

std::string Dialog::getStopMessage() {
    return stopMessage;
}

//Manupulate the Car Image and display to the label only if the network is connected to Mqtt broker.
//void Dialog::viewCarImage(){
//    QPixmap ev_car(":/data/image/ev_car.png");
//    QPixmap ev_car_tranformed = ev_car.scaledToWidth(400, Qt::SmoothTransformation);
//    QImage ev_car_image = ev_car_tranformed.toImage();
//    QImage mirrored_ev_car_image = ev_car_image.mirrored(true, false);
////    QPixmap mirrored_ev_car = QPixmap::fromImage(mirrored_ev_car_image);
////    ui->label_4->setPixmap(ev_car_tranformed);
////    ui->label_7->setPixmap(mirrored_ev_car);
//}

void Dialog::on_pushButton_clicked()
{
    connect_to_broker();
}

