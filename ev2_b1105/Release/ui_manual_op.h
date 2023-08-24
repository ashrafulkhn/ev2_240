/********************************************************************************
** Form generated from reading UI file 'manual_op.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUAL_OP_H
#define UI_MANUAL_OP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manual_op
{
public:
    QPushButton *pushButton;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_13;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QFrame *frame_3;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QLabel *label_11;
    QLineEdit *lineEdit_4;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *page_4;
    QLabel *label_3;

    void setupUi(QDialog *manual_op)
    {
        if (manual_op->objectName().isEmpty())
            manual_op->setObjectName(QString::fromUtf8("manual_op"));
        manual_op->resize(1280, 800);
        pushButton = new QPushButton(manual_op);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 734, 231, 61));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        frame = new QFrame(manual_op);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 20, 1181, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 9, 1161, 51));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(manual_op);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 100, 231, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(manual_op);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 100, 611, 611));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 50, 591, 511));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        formLayoutWidget = new QWidget(page);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 40, 511, 201));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font3;
        font3.setPointSize(20);
        label_4->setFont(font3);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font3);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);

        formLayout->setWidget(3, QFormLayout::FieldRole, label_12);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);

        formLayout->setWidget(4, QFormLayout::FieldRole, label_13);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_9);

        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(260, 330, 291, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton_5);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        frame_3 = new QFrame(manual_op);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(640, 100, 621, 611));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        stackedWidget_2 = new QStackedWidget(frame_3);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 50, 591, 511));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        formLayoutWidget_2 = new QWidget(page_3);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(40, 40, 511, 201));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        lineEdit_3 = new QLineEdit(formLayoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font3);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        lineEdit_4 = new QLineEdit(formLayoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font3);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_4);

        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font3);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, label_15);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font3);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_16);

        label_17 = new QLabel(formLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font3);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, label_17);

        label_18 = new QLabel(formLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_18);

        label_19 = new QLabel(formLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, label_19);

        horizontalLayoutWidget_2 = new QWidget(page_3);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(260, 330, 291, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButton_7);

        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget_2->addWidget(page_4);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 0, 231, 41));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        frame_3->raise();
        frame_2->raise();
        pushButton->raise();
        frame->raise();
        label_2->raise();

        retranslateUi(manual_op);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(manual_op);
    } // setupUi

    void retranslateUi(QDialog *manual_op)
    {
        manual_op->setWindowTitle(QCoreApplication::translate("manual_op", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("manual_op", "Exit Manual Mode", nullptr));
        label->setText(QCoreApplication::translate("manual_op", "Manual Mode", nullptr));
        label_2->setText(QCoreApplication::translate("manual_op", "Gun 1", nullptr));
        label_4->setText(QCoreApplication::translate("manual_op", "Current (A)", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("manual_op", "Enter Current", nullptr));
        label_5->setText(QCoreApplication::translate("manual_op", "Voltage (V)", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("manual_op", "Enter Voltage", nullptr));
        label_6->setText(QCoreApplication::translate("manual_op", "Current Reading  (A)    :", nullptr));
        label_12->setText(QCoreApplication::translate("manual_op", "    0", nullptr));
        label_7->setText(QCoreApplication::translate("manual_op", "Voltage Reading   (V)   :", nullptr));
        label_13->setText(QCoreApplication::translate("manual_op", "    0", nullptr));
        label_8->setText(QCoreApplication::translate("manual_op", "=================================", nullptr));
        label_9->setText(QCoreApplication::translate("manual_op", "=========================", nullptr));
        pushButton_4->setText(QCoreApplication::translate("manual_op", "Start", nullptr));
        pushButton_5->setText(QCoreApplication::translate("manual_op", "Stop", nullptr));
        label_10->setText(QCoreApplication::translate("manual_op", "Current (A)", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("manual_op", "Enter Current", nullptr));
        label_11->setText(QCoreApplication::translate("manual_op", "Voltage (V)", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("manual_op", "Enter Voltage", nullptr));
        label_14->setText(QCoreApplication::translate("manual_op", "Current Reading  (A)    :", nullptr));
        label_15->setText(QCoreApplication::translate("manual_op", "    0", nullptr));
        label_16->setText(QCoreApplication::translate("manual_op", "Voltage Reading   (V)   :", nullptr));
        label_17->setText(QCoreApplication::translate("manual_op", "    0", nullptr));
        label_18->setText(QCoreApplication::translate("manual_op", "=================================", nullptr));
        label_19->setText(QCoreApplication::translate("manual_op", "=========================", nullptr));
        pushButton_6->setText(QCoreApplication::translate("manual_op", "Start", nullptr));
        pushButton_7->setText(QCoreApplication::translate("manual_op", "Stop", nullptr));
        label_3->setText(QCoreApplication::translate("manual_op", "Gun 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manual_op: public Ui_manual_op {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUAL_OP_H
