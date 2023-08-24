#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMqttClient>
#include "manual_op.h"
#include "mqtt_topics.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void viewCarImage();

    QString getConnectString();
    void setConnectString(QString payload);

    //Gun 1
    //Subscribing topics
    //Type casting from const char* MACRO to QString
    QString i111         = I_1_11;
    QString voltage_1    = VOLTAGE_1;
    QString current_1    = CURRENT_1;
    QString i141         = I_1_41;
    QString i151         = I_1_51;
    QString i161         = I_1_61;
    QString i171         = I_1_71;
    QString i181         = I_1_81;
    QString i191         = I_1_91;
    QString i1101        = I_1_101;
    QString i1111        = I_1_111;
    QString soc_1        = I_1_121;
    QString full_soc_1   = FULL_SOC_1;
    QString i1141        = I_1_141;
    QString i1151        = I_1_151;
    QString i116         = I_1_16;
    QString i117         = I_1_17;
    QString i118         = I_1_18;
    QString energy_1     = ENERGY_1;
    QString i1201        = I_1_201;
    QString i1211        = I_1_211;
    QString i1221        = I_1_221;

    //Publishing topics
    QString i211     = I_2_11;
    QString i221     = I_2_21;
    QString i231     = I_2_31;
    QString i241     = I_2_41;
    QString i251     = I_2_51;
    QString i261     = I_2_61;
    QString i271     = I_2_71;
    QString i281     = I_2_81;
    QString i291     = I_2_91;
    QString i2101     = I_2_101;

    //Gun 2
    QString i112         = I_1_12;
    QString voltage_2    = VOLTAGE_2;
    QString current_2    = CURRENT_2;
    QString i142         = I_1_42;
    QString i152         = I_1_52;
    QString i162         = I_1_62;
    QString i172         = I_1_72;
    QString i182         = I_1_82;
    QString i192         = I_1_92;
    QString i1102        = I_1_102;
    QString i1112        = I_1_112;
    QString soc_2        = I_1_122;
    QString full_soc_2   = FULL_SOC_2;
    QString i1142        = I_1_142;
    QString i1152        = I_1_152;
    QString i1162         = I_1_16;
    QString i1172         = I_1_17;
    QString i1182         = I_1_18;
    QString energy_2     = ENERGY_2;
    QString i1202        = I_1_202;
    QString i1212        = I_1_212;
    QString i1222        = I_1_222;

    //Publishing topics
    QString i212     = I_2_12;
    QString i222     = I_2_22;
    QString i232     = I_2_32;
    QString i242     = I_2_42;
    QString i252     = I_2_52;
    QString i262     = I_2_62;
    QString i272     = I_2_72;
    QString i282     = I_2_82;
    QString i292     = I_2_92;
    QString i2102     = I_2_102;

    //Default Values Gun 1
    QString     default_v1              = "0 V";
    int         default_dial_val1       = 0;
    QString     default_c1              = "0 A";
    int         default_dial_2_val1     = 0;
    QString     default_f_soc_1         = "0 Sec";
//    QString     default_ec1             = "0 KWh";
    int         default_SOC1            = 0;

    //Default Values Gun 2
    QString     default_v2             = "0 V";
    int         default_dial_val2      = 0;
    QString     default_c2             = "0 A";
    int         default_dial_2_val2    = 0;
    QString     default_f_soc_2        = "0 Sec";
    QString     default_ec2            = "0 KWh";
    int         default_SOC2           = 0;

    //Getters
    std::string getHost();
    int getBrokerPort();

    //Setters
    void setHost(std::string iHost);
    void setBrokerPort(int ibrokerPort);
    void connect_to_broker();
    std::string getStopMessage();

    QString getLocalIpAddress();

    bool isConnected;
    float v1;
    float c1;
    float v2;
    float c2;
public slots:
//    void setClientPort(int p);
    void topic_subscription();
    void process_message(const QByteArray &message, const QMqttTopicName &topic);
    void rfid_read_react(QString payload, QString topic);
    void page4_reaction(QString payload, QString topic);
    void page5_reaction();
    void mqttStateChanged(QMqttClient::ClientState state);


signals:
    void auth_status(QString, QString);
    void connect_charger_message(QString, QString);
    void charger_connected_message(QString, QString);
    void page4_action(QString, QString);
    void page5_action();
    void qrAuthorised();
    void qrRejected();
    void qrInvalid();
    void connectCharger();
    void chargerConnected();
    void disconnectCharger();
    void chargerDisconnected();


private slots:
    void brokerDisconnected();
    void updateLogStateChange();
    void on_btn_manual_clicked();

    void on_pushButton_clicked();

private:
    QString auth_stat               =   AUTH_STATUS;
    QString connect_string          =   CONNECT_CHARGER;
    QString charger_connected       =   CHARGER_CONNECTED;
    QString charge_stopped          =   CHARGE_STOPPED;
    QString charger_disconnected    =   CHARGER_DISCONNECTED;

    QString state_a                 =   STATE_A;
    QString state_b                 =   STATE_B;

    QString auth                    = AUTH;
    QString deauth                  = DEAUTH;
    QString pending                 = PENDING;


    QString ConnectString;


    std::string stopMessage = "STOP_CHARGING";

    Ui::Dialog *ui;
    QMqttClient *m_client;
    manual_op *_manual_op;
};
#endif // DIALOG_H
