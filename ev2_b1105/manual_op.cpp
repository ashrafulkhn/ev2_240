#include "manual_op.h"
#include "ui_manual_op.h"
#include "dialog.h"

manual_op::manual_op(QMqttClient *m_client, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manual_op),
    m_client_w2(m_client)

{
    ui->setupUi(this);

    //Set index to the home page on starting
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);

    ui->horizontalSlider->setStyleSheet(

        "QSlider::handle {"
//        "    background-color: #3498db;"
//        "    border: 1px solid #2980b9;"
        "    width: 40px;"
        "    height: 40px;"
        "}"
        "QSlider::handle:horizontal {"
//        "    width: 30px;"
//        "    height: 40px;"
        "    border-radius: 5px;" // Add border radius to create a circular handle
        "    background-color: #3498db;"
        "    border: 1px solid #2980b9;"
        "}"
        "QSlider::groove:horizontal {"
        "    background-color: #ccc;"
        "    border: 1px solid #999;"
        "    border-radius: 10px;"
        "}"
        );

    ui->horizontalSlider_2->setStyleSheet(

        "QSlider::handle {"
        //        "    background-color: #3498db;"
        //        "    border: 1px solid #2980b9;"
        "    width: 40px;"
        "    height: 40px;"
        "}"
        "QSlider::handle:horizontal {"
        //        "    width: 30px;"
        //        "    height: 40px;"
        "    border-radius: 5px;" // Add border radius to create a circular handle
        "    background-color: #3498db;"
        "    border: 1px solid #2980b9;"
        "}"
        "QSlider::groove:horizontal {"
        "    background-color: #ccc;"
        "    border: 1px solid #999;"
        "    border-radius: 10px;"
        "}"
        );
    ui->horizontalSlider_3->setStyleSheet(

        "QSlider::handle {"
        //        "    background-color: #3498db;"
        //        "    border: 1px solid #2980b9;"
        "    width: 40px;"
        "    height: 40px;"
        "}"
        "QSlider::handle:horizontal {"
        //        "    width: 30px;"
        //        "    height: 40px;"
        "    border-radius: 5px;" // Add border radius to create a circular handle
        "    background-color: #3498db;"
        "    border: 1px solid #2980b9;"
        "}"
        "QSlider::groove:horizontal {"
        "    background-color: #ccc;"
        "    border: 1px solid #999;"
        "    border-radius: 10px;"
        "}"
        );

    ui->horizontalSlider_4->setStyleSheet(

        "QSlider::handle {"
        //        "    background-color: #3498db;"
        //        "    border: 1px solid #2980b9;"
        "    width: 40px;"
        "    height: 40px;"
        "}"
        "QSlider::handle:horizontal {"
        //        "    width: 30px;"
        //        "    height: 40px;"
        "    border-radius: 5px;" // Add border radius to create a circular handle
        "    background-color: #3498db;"
        "    border: 1px solid #2980b9;"
        "}"
        "QSlider::groove:horizontal {"
        "    background-color: #ccc;"
        "    border: 1px solid #999;"
        "    border-radius: 10px;"
        "}"
        );

    QString a = "Hello";
    m_client_w2->subscribe(a);
    topic_subscription();
    connect(m_client_w2, &QMqttClient::connected, this, &manual_op::topic_subscription);
    connect(m_client_w2, &QMqttClient::messageReceived, this, &manual_op::process_message);

}

manual_op::~manual_op()
{
    delete ui;
    delete m_client_w2;
}


void manual_op::topic_subscription(){
    if (m_client_w2->state() == QMqttClient::Connected){

        auto subscription = m_client_w2->subscribe(voltage_value_topic_1, 0);
        m_client_w2->subscribe(current_value_topic_1, 0);
        m_client_w2->subscribe(voltage_value_topic_2, 0);
        m_client_w2->subscribe(current_value_topic_2, 0);

            if (!subscription) {
                qDebug() << "Window 2 sub (false) State: " << m_client_w2->state();
                return;
            }
            else {
                    qDebug() << "Window 2 sub (true) State: " << m_client_w2->state();
                }
            qDebug() << "Window 2 sub (if connected) State: " << m_client_w2->state();
    }
}

void manual_op::process_message(const QByteArray &message, const QMqttTopicName &topic){
    if (topic == voltage_value_topic_1){
        ui->label_13->setText(message + "V");
    }
    if (topic == current_value_topic_1){
        ui->label_12->setText(message + "A");
    }
    if (topic == voltage_value_topic_2){
        ui->label_17->setText(message + "V");
    }
    if (topic == current_value_topic_2){
        ui->label_15->setText(message + "A");
    }

    qDebug() << "Recieved Message :: " << message << " on Topic : " << topic ;

}


void manual_op::on_start_man_1_clicked()
{
//    QString voltage = ui->lineEdit_2->text();
//    QString current = ui->lineEdit->text();
    int voltage = ui->horizontalSlider->value();
    qDebug() << "INFO: Set Volate = " << voltage;
    int current = ui->horizontalSlider_2->value();
    qDebug() << "INFO: Set Current = " << current;


    if (m_client_w2->publish(man_command_topic_1, (start_messsgae_1 + ":" + QString::number(voltage) + ":" + QString::number(current)).toUtf8()) == -1){
        qDebug() << man_command_topic_1 << ":" + start_messsgae_1 + " : INFO: Failed";
    }
    else{
        qDebug() << man_command_topic_1 + ":" + start_messsgae_1 + ":" + QString::number(voltage) + ":" + QString::number(current) << " : INFO: Success";
    }
}


void manual_op::on_stop_man_1_clicked()
{
    if (m_client_w2->publish(man_command_topic_1, (stop_message_1 + ":" + ":").toUtf8()) == -1){
        qDebug() << man_command_topic_1 << ":" + stop_message_1 + " : INFO: Failed" ;
    }
    else{
        qDebug() << man_command_topic_1 << stop_message_1 + " : INFO: Success";
    }
}


void manual_op::on_start_man_2_clicked()
{
//    QString voltage = ui->lineEdit_4->text();
//    QString current = ui->lineEdit_3->text();
    int voltage = ui->horizontalSlider_3->value();
    qDebug() << "INFO: Set Volate = " << voltage;
    int current = ui->horizontalSlider_4->value();
    qDebug() << "INFO: Set Current = " << current;


    if (m_client_w2->publish(man_command_topic_2, (start_messsgae_2 + ":" + QString::number(voltage) + ":" + QString::number(current)).toUtf8()) == -1){
        qDebug() << man_command_topic_2 << ":" + start_messsgae_2 + " : INFO: Failed";
    }
    else{
        qDebug() << man_command_topic_2 + ":" + start_messsgae_2 + ":" + QString::number(voltage) + ":" + QString::number(current) << " : INFO: Success";
    }
}

void manual_op::on_stop_man_2_clicked()
{
    if (m_client_w2->publish(man_command_topic_2, (stop_message_2+":"+":").toUtf8()) == -1){
        qDebug() << man_command_topic_2 << ":" + stop_message_2 + " : INFO: Failed" ;
    }
    else{
        qDebug() << man_command_topic_2 << stop_message_2 + " : INFO: Success";
    }
}

void manual_op::on_buttonExitManMode_clicked()
{
    m_client_w2->publish(man_command_topic_1, (stop_message_1 + ":" + ":").toUtf8());
    m_client_w2->publish(man_command_topic_2, (stop_message_2 + ":" + ":").toUtf8());
    close();
}


void manual_op::on_horizontalSlider_valueChanged(int value)
{
//    QString value = value.toStdString();
    ui->label_20->setText(QString::number(value));
}

void manual_op::on_horizontalSlider_2_valueChanged(int value)
{
    ui->label_21->setText(QString::number(value));
}


void manual_op::on_horizontalSlider_4_valueChanged(int value)
{
    ui->label_23->setText(QString::number(value));
}


void manual_op::on_horizontalSlider_3_valueChanged(int value)
{
    ui->label_24->setText(QString::number(value));
}

