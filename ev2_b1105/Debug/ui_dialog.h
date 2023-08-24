/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QLabel *label_12;
    QWidget *page_8;
    QLabel *label_7;
    QLabel *label_11;
    QWidget *page_9;
    QLabel *auth_status_2;
    QLabel *connect_stat_2;
    QWidget *page;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *soc_g1_3;
    QLabel *soc_val_g1_3;
    QLabel *voltage_g1_3;
    QLabel *voltage_val_g1_3;
    QLabel *current_val_g1_3;
    QLabel *power_g1_3;
    QLabel *power_val_g1_3;
    QLabel *Time_t_F_soc_g1_3;
    QLabel *time_t_f_soc_val_g1_3;
    QLabel *energy_cons_g1_3;
    QLabel *energy_cons_val_g1_3;
    QLabel *current_g1_3;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *session_cost_g1_3;
    QLabel *session_cost_val_g1_3;
    QWidget *page_11;
    QLabel *label_13;
    QPushButton *btn_manual;
    QFrame *frame_2;
    QStackedWidget *stackedWidget_1;
    QWidget *page_3;
    QLabel *label_9;
    QWidget *page_1;
    QLabel *label_4;
    QLabel *label_10;
    QWidget *page_5;
    QLabel *auth_status;
    QLabel *connect_stat;
    QWidget *page_6;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *soc_g1;
    QLabel *soc_val_g1;
    QLabel *voltage_g1;
    QLabel *voltage_val_g1;
    QLabel *current_val_g1;
    QLabel *power_g1;
    QLabel *power_val_g1;
    QLabel *Time_t_F_soc_g1;
    QLabel *time_t_f_soc_val_g1;
    QLabel *energy_cons_g1;
    QLabel *energy_cons_val_g1;
    QLabel *current_g1;
    QWidget *page_2;
    QLabel *label_5;
    QFrame *frame_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1280, 800);
        Dialog->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 1261, 91));
        frame->setStyleSheet(QString::fromUtf8("background-color:  rgb(211, 215, 207)\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 1231, 51));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 110, 1251, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(46, 52, 54)"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(46, 52, 54)"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        stackedWidget_2 = new QStackedWidget(Dialog);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(640, 200, 611, 521));
        stackedWidget_2->setStyleSheet(QString::fromUtf8(""));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_12 = new QLabel(page_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(70, 200, 501, 61));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(78, 154, 6);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));
        stackedWidget_2->addWidget(page_4);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        label_7 = new QLabel(page_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 0, 601, 521));
        QFont font2;
        font2.setPointSize(40);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_7->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(page_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 420, 611, 53));
        QFont font3;
        font3.setPointSize(35);
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);
        stackedWidget_2->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        auth_status_2 = new QLabel(page_9);
        auth_status_2->setObjectName(QString::fromUtf8("auth_status_2"));
        auth_status_2->setGeometry(QRect(70, 40, 501, 81));
        auth_status_2->setFont(font3);
        auth_status_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        auth_status_2->setAlignment(Qt::AlignCenter);
        connect_stat_2 = new QLabel(page_9);
        connect_stat_2->setObjectName(QString::fromUtf8("connect_stat_2"));
        connect_stat_2->setGeometry(QRect(60, 260, 501, 81));
        QFont font4;
        font4.setPointSize(30);
        connect_stat_2->setFont(font4);
        connect_stat_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        connect_stat_2->setAlignment(Qt::AlignCenter);
        stackedWidget_2->addWidget(page_9);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        formLayoutWidget_3 = new QWidget(page);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(70, 40, 491, 231));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        soc_g1_3 = new QLabel(formLayoutWidget_3);
        soc_g1_3->setObjectName(QString::fromUtf8("soc_g1_3"));
        QFont font5;
        font5.setPointSize(20);
        soc_g1_3->setFont(font5);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, soc_g1_3);

        soc_val_g1_3 = new QLabel(formLayoutWidget_3);
        soc_val_g1_3->setObjectName(QString::fromUtf8("soc_val_g1_3"));
        soc_val_g1_3->setFont(font5);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, soc_val_g1_3);

        voltage_g1_3 = new QLabel(formLayoutWidget_3);
        voltage_g1_3->setObjectName(QString::fromUtf8("voltage_g1_3"));
        voltage_g1_3->setFont(font5);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, voltage_g1_3);

        voltage_val_g1_3 = new QLabel(formLayoutWidget_3);
        voltage_val_g1_3->setObjectName(QString::fromUtf8("voltage_val_g1_3"));
        voltage_val_g1_3->setFont(font5);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, voltage_val_g1_3);

        current_val_g1_3 = new QLabel(formLayoutWidget_3);
        current_val_g1_3->setObjectName(QString::fromUtf8("current_val_g1_3"));
        current_val_g1_3->setFont(font5);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, current_val_g1_3);

        power_g1_3 = new QLabel(formLayoutWidget_3);
        power_g1_3->setObjectName(QString::fromUtf8("power_g1_3"));
        power_g1_3->setFont(font5);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, power_g1_3);

        power_val_g1_3 = new QLabel(formLayoutWidget_3);
        power_val_g1_3->setObjectName(QString::fromUtf8("power_val_g1_3"));
        power_val_g1_3->setFont(font5);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, power_val_g1_3);

        Time_t_F_soc_g1_3 = new QLabel(formLayoutWidget_3);
        Time_t_F_soc_g1_3->setObjectName(QString::fromUtf8("Time_t_F_soc_g1_3"));
        Time_t_F_soc_g1_3->setFont(font5);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, Time_t_F_soc_g1_3);

        time_t_f_soc_val_g1_3 = new QLabel(formLayoutWidget_3);
        time_t_f_soc_val_g1_3->setObjectName(QString::fromUtf8("time_t_f_soc_val_g1_3"));
        time_t_f_soc_val_g1_3->setFont(font5);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, time_t_f_soc_val_g1_3);

        energy_cons_g1_3 = new QLabel(formLayoutWidget_3);
        energy_cons_g1_3->setObjectName(QString::fromUtf8("energy_cons_g1_3"));
        energy_cons_g1_3->setFont(font5);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, energy_cons_g1_3);

        energy_cons_val_g1_3 = new QLabel(formLayoutWidget_3);
        energy_cons_val_g1_3->setObjectName(QString::fromUtf8("energy_cons_val_g1_3"));
        energy_cons_val_g1_3->setFont(font5);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, energy_cons_val_g1_3);

        current_g1_3 = new QLabel(formLayoutWidget_3);
        current_g1_3->setObjectName(QString::fromUtf8("current_g1_3"));
        current_g1_3->setFont(font5);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, current_g1_3);

        horizontalLayoutWidget_6 = new QWidget(page);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(170, 410, 381, 80));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        session_cost_g1_3 = new QLabel(horizontalLayoutWidget_6);
        session_cost_g1_3->setObjectName(QString::fromUtf8("session_cost_g1_3"));
        session_cost_g1_3->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));

        horizontalLayout_6->addWidget(session_cost_g1_3);

        session_cost_val_g1_3 = new QLabel(horizontalLayoutWidget_6);
        session_cost_val_g1_3->setObjectName(QString::fromUtf8("session_cost_val_g1_3"));
        session_cost_val_g1_3->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));

        horizontalLayout_6->addWidget(session_cost_val_g1_3);

        stackedWidget_2->addWidget(page);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        label_13 = new QLabel(page_11);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 200, 501, 61));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));
        stackedWidget_2->addWidget(page_11);
        btn_manual = new QPushButton(Dialog);
        btn_manual->setObjectName(QString::fromUtf8("btn_manual"));
        btn_manual->setGeometry(QRect(1050, 740, 211, 51));
        QFont font6;
        font6.setPointSize(15);
        btn_manual->setFont(font6);
        frame_2 = new QFrame(Dialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 190, 601, 541));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stackedWidget_1 = new QStackedWidget(frame_2);
        stackedWidget_1->setObjectName(QString::fromUtf8("stackedWidget_1"));
        stackedWidget_1->setGeometry(QRect(10, 10, 581, 521));
        stackedWidget_1->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 200, 501, 61));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(78, 154, 6);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));
        stackedWidget_1->addWidget(page_3);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        label_4 = new QLabel(page_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 601, 521));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(46, 52, 54)"));
        label_4->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(page_1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(-10, 412, 591, 81));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);
        stackedWidget_1->addWidget(page_1);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        auth_status = new QLabel(page_5);
        auth_status->setObjectName(QString::fromUtf8("auth_status"));
        auth_status->setGeometry(QRect(50, 50, 501, 81));
        auth_status->setFont(font4);
        auth_status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        auth_status->setAlignment(Qt::AlignCenter);
        connect_stat = new QLabel(page_5);
        connect_stat->setObjectName(QString::fromUtf8("connect_stat"));
        connect_stat->setGeometry(QRect(50, 260, 501, 81));
        connect_stat->setFont(font4);
        connect_stat->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        connect_stat->setAlignment(Qt::AlignCenter);
        stackedWidget_1->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        formLayoutWidget = new QWidget(page_6);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 40, 421, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        soc_g1 = new QLabel(formLayoutWidget);
        soc_g1->setObjectName(QString::fromUtf8("soc_g1"));
        soc_g1->setFont(font5);
        soc_g1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, soc_g1);

        soc_val_g1 = new QLabel(formLayoutWidget);
        soc_val_g1->setObjectName(QString::fromUtf8("soc_val_g1"));
        soc_val_g1->setFont(font5);

        formLayout->setWidget(0, QFormLayout::FieldRole, soc_val_g1);

        voltage_g1 = new QLabel(formLayoutWidget);
        voltage_g1->setObjectName(QString::fromUtf8("voltage_g1"));
        voltage_g1->setFont(font5);

        formLayout->setWidget(1, QFormLayout::LabelRole, voltage_g1);

        voltage_val_g1 = new QLabel(formLayoutWidget);
        voltage_val_g1->setObjectName(QString::fromUtf8("voltage_val_g1"));
        voltage_val_g1->setFont(font5);

        formLayout->setWidget(1, QFormLayout::FieldRole, voltage_val_g1);

        current_val_g1 = new QLabel(formLayoutWidget);
        current_val_g1->setObjectName(QString::fromUtf8("current_val_g1"));
        current_val_g1->setFont(font5);

        formLayout->setWidget(2, QFormLayout::FieldRole, current_val_g1);

        power_g1 = new QLabel(formLayoutWidget);
        power_g1->setObjectName(QString::fromUtf8("power_g1"));
        power_g1->setFont(font5);

        formLayout->setWidget(3, QFormLayout::LabelRole, power_g1);

        power_val_g1 = new QLabel(formLayoutWidget);
        power_val_g1->setObjectName(QString::fromUtf8("power_val_g1"));
        power_val_g1->setFont(font5);

        formLayout->setWidget(3, QFormLayout::FieldRole, power_val_g1);

        Time_t_F_soc_g1 = new QLabel(formLayoutWidget);
        Time_t_F_soc_g1->setObjectName(QString::fromUtf8("Time_t_F_soc_g1"));
        Time_t_F_soc_g1->setFont(font5);

        formLayout->setWidget(4, QFormLayout::LabelRole, Time_t_F_soc_g1);

        time_t_f_soc_val_g1 = new QLabel(formLayoutWidget);
        time_t_f_soc_val_g1->setObjectName(QString::fromUtf8("time_t_f_soc_val_g1"));
        time_t_f_soc_val_g1->setFont(font5);

        formLayout->setWidget(4, QFormLayout::FieldRole, time_t_f_soc_val_g1);

        energy_cons_g1 = new QLabel(formLayoutWidget);
        energy_cons_g1->setObjectName(QString::fromUtf8("energy_cons_g1"));
        energy_cons_g1->setFont(font5);

        formLayout->setWidget(5, QFormLayout::LabelRole, energy_cons_g1);

        energy_cons_val_g1 = new QLabel(formLayoutWidget);
        energy_cons_val_g1->setObjectName(QString::fromUtf8("energy_cons_val_g1"));
        energy_cons_val_g1->setFont(font5);

        formLayout->setWidget(5, QFormLayout::FieldRole, energy_cons_val_g1);

        current_g1 = new QLabel(formLayoutWidget);
        current_g1->setObjectName(QString::fromUtf8("current_g1"));
        current_g1->setFont(font5);

        formLayout->setWidget(2, QFormLayout::LabelRole, current_g1);

        stackedWidget_1->addWidget(page_6);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 200, 501, 61));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(204, 0, 0);\n"
"font: 700 11pt \"Ubuntu Condensed\";\n"
"font-size: 40px;"));
        stackedWidget_1->addWidget(page_2);
        frame_3 = new QFrame(Dialog);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(630, 190, 631, 541));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->raise();
        frame_2->raise();
        frame->raise();
        horizontalLayoutWidget->raise();
        stackedWidget_2->raise();
        btn_manual->raise();

        retranslateUi(Dialog);

        stackedWidget_2->setCurrentIndex(1);
        stackedWidget_1->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Ultra Fast Chargers", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Gun 1", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Gun 2", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "No Network, Try Other Stations", nullptr));
        label_7->setText(QString());
        label_11->setText(QCoreApplication::translate("Dialog", "CCS2", nullptr));
        auth_status_2->setText(QCoreApplication::translate("Dialog", "Please Wait ...", nullptr));
        connect_stat_2->setText(QString());
        soc_g1_3->setText(QCoreApplication::translate("Dialog", "SOC                                          :", nullptr));
        soc_val_g1_3->setText(QCoreApplication::translate("Dialog", "    20%", nullptr));
        voltage_g1_3->setText(QCoreApplication::translate("Dialog", "Voltage                                   :", nullptr));
        voltage_val_g1_3->setText(QCoreApplication::translate("Dialog", "    340V", nullptr));
        current_val_g1_3->setText(QCoreApplication::translate("Dialog", "    80A", nullptr));
        power_g1_3->setText(QCoreApplication::translate("Dialog", "Power                                      :", nullptr));
        power_val_g1_3->setText(QCoreApplication::translate("Dialog", "    27.2kW", nullptr));
        Time_t_F_soc_g1_3->setText(QCoreApplication::translate("Dialog", "Time to Full SOC                  :", nullptr));
        time_t_f_soc_val_g1_3->setText(QCoreApplication::translate("Dialog", "    500secs", nullptr));
        energy_cons_g1_3->setText(QCoreApplication::translate("Dialog", "Energy Consumed               :", nullptr));
        energy_cons_val_g1_3->setText(QCoreApplication::translate("Dialog", "    0.05kWh", nullptr));
        current_g1_3->setText(QCoreApplication::translate("Dialog", "Current                                   :", nullptr));
        session_cost_g1_3->setText(QCoreApplication::translate("Dialog", "Session Cost   : ", nullptr));
        session_cost_val_g1_3->setText(QCoreApplication::translate("Dialog", "Rs. 120", nullptr));
        label_13->setText(QCoreApplication::translate("Dialog", "Please Disconnect the Charger", nullptr));
        btn_manual->setText(QCoreApplication::translate("Dialog", "Goto Manual Mode", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "No Network, Try Other Stations", nullptr));
        label_4->setText(QString());
        label_10->setText(QCoreApplication::translate("Dialog", "CCS2", nullptr));
        auth_status->setText(QCoreApplication::translate("Dialog", "Please wait ...", nullptr));
        connect_stat->setText(QString());
        soc_g1->setText(QCoreApplication::translate("Dialog", "SOC                               :", nullptr));
        soc_val_g1->setText(QString());
        voltage_g1->setText(QCoreApplication::translate("Dialog", "Voltage                        :", nullptr));
        voltage_val_g1->setText(QString());
        current_val_g1->setText(QString());
        power_g1->setText(QCoreApplication::translate("Dialog", "Power                           :", nullptr));
        power_val_g1->setText(QString());
        Time_t_F_soc_g1->setText(QCoreApplication::translate("Dialog", "Time to Full SOC       :", nullptr));
        time_t_f_soc_val_g1->setText(QString());
        energy_cons_g1->setText(QCoreApplication::translate("Dialog", "Energy Consumed    :", nullptr));
        energy_cons_val_g1->setText(QString());
        current_g1->setText(QCoreApplication::translate("Dialog", "Current                        :", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Please Disconnect the Charger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
