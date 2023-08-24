#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QMqttClient>
#include <QMqttSubscription>

class MyClass : public QObject
{
    Q_OBJECT

public:
    MyClass(QObject *parent = nullptr) : QObject(parent) {
        // Create an instance of QMqttClient class
        client = new QMqttClient(this);

        // Connect to the MQTT broker
        client->connectToHost();

        qDebug() << client->state();

        QString topic1 = "topic1";
        QString topic2 = "topic2";
        QString topic3 = "topic3";
        QString topic4 = "topic4";
        QString topic5 = "topic5";
        QString topic6 = "topic6";

        // Subscribe to the six topics
        sub1 = client->subscribe(topic1);
        sub2 = client->subscribe(topic2);
        sub3 = client->subscribe(topic3);
        sub4 = client->subscribe(topic4);
        sub5 = client->subscribe(topic5);
        sub6 = client->subscribe(topic6);

        // Connect the messageReceived signal to a slot that processes incoming messages
        connect(client, &QMqttClient::messageReceived, this, &MyClass::onMessageReceived);
    }
    ~MyClass();

signals:
    void qrScanned();
    void qrAuthorised();
    void qrRejected();
    void qrInvalid();
    void connectCharger();
    void chargerConnected();
    void disconnectCharger();
    void chargerDisconnected();

public slots:
    void startCharging();
    void showSorryMessage();
    void showDirection();

private:
    QMqttClient *client;
    QMqttSubscription *sub1, *sub2, *sub3, *sub4, *sub5, *sub6;

private slots:
    void onMessageReceived(const QByteArray &message, const QMqttTopicName &topic);

};

#endif // MYCLASS_H
