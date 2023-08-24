#include "myclass.h"

void MyClass::onMessageReceived(const QByteArray &message, const QMqttTopicName &topic)
{
    QString topicName = topic.name();
    QString payload = QString::fromUtf8(message);

    if (topicName == "topic1") {
        emit qrScanned();
    } else if (topicName == "topic2") {
        if (payload == "qr_authorised") {
            emit qrAuthorised();
        } else if (payload == "qr_rejected") {
            emit qrRejected();
        } else if (payload == "qr_invalid") {
            emit qrInvalid();
        }
    } else if (topicName == "topic3") {
        emit connectCharger();
    } else if (topicName == "topic4") {
        emit chargerConnected();
    } else if (topicName == "topic5") {
        emit disconnectCharger();
    } else if (topicName == "topic6") {
        emit chargerDisconnected();
    }
}

void MyClass::startCharging()
{
    // Call the start_charging() function
}

void MyClass::showSorryMessage()
{
    // Call the show_sorry_message() function
}

void MyClass::showDirection()
{
    // Call the show_direction() function
}
