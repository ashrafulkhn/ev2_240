#ifndef MANUAL_OP_H
#define MANUAL_OP_H

#include <QDialog>
#include <QtMqtt/QMqttClient>

namespace Ui {
class manual_op;
}

class manual_op : public QDialog
{
    Q_OBJECT

public:
    explicit manual_op(QMqttClient *m_client, QWidget *parent = nullptr);
    ~manual_op();

    //Publishing topics
    QString man_command_topic_1     =   "MAN_COMMAND_1";
    QString man_command_topic_2     =   "MAN_COMMAND_2";

    //Subscribe topics
    QString voltage_value_topic_1   =   "VOLTAGE_2ND_1";
    QString voltage_value_topic_2   =   "VOLTAGE_2ND_2";
    QString current_value_topic_1   =   "CURRENT_2ND_1";
    QString current_value_topic_2   =   "CURRENT_2ND_2";

    //Messages
    QString start_messsgae_1        =   "START1";
    QString start_messsgae_2        =   "START2";
    QString stop_message_1          =   "STOP1";
    QString stop_message_2          =   "STOP2";


public slots:
    void process_message(const QByteArray &message, const QMqttTopicName &topic);
    void topic_subscription();
private slots:
//    void on_pushButton_clicked(); //Exit Manual Mode button
    void on_start_man_1_clicked();
    void on_stop_man_1_clicked();
    void on_start_man_2_clicked();
    void on_stop_man_2_clicked();

    void on_buttonExitManMode_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

private:
    Ui::manual_op *ui;
    QMqttClient *m_client_w2;

signals:

};

#endif // MANUAL_OP_H
