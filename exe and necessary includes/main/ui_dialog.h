/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame_2;
    QFrame *frame;
    QLabel *label;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_name;
    QLabel *label_4;
    QLabel *label_balance;
    QLabel *label_6;
    QLabel *label_email;
    QPushButton *pushButton_exit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QLabel *label_mobile_number;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_withdraw;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_mobile_change;
    QPushButton *pushButton_pin_change;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_transfer;
    QPushButton *pushButton_pre;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(980, 746);
        Dialog->setStyleSheet(QString::fromUtf8("\n"
"#frame{\n"
"background:rgb(26,42,160);\n"
"border-radius:0px;\n"
"}\n"
"#frame_2{\n"
"background:url(:/img/linear-pink-blue-gradient-1920x1080-c2-6495ed-ff69b4-a-165-f-14.svg)\n"
"}\n"
""));
        frame_2 = new QFrame(Dialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(-10, -80, 1051, 831));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 140, 901, 631));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 271, 71));
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 25pt \"Futura Md BT\";"));
        layoutWidget_2 = new QWidget(frame);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 100, 333, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 179, 249);\n"
"font: 75 13pt \"Futura Md BT\";"));

        verticalLayout_3->addWidget(label_2);

        label_name = new QLabel(layoutWidget_2);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 75 17pt \"Futura Md BT\";\n"
"font-weight:bold;"));

        verticalLayout_3->addWidget(label_name);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(0, 179, 249);\n"
"font: 75 13pt \"Futura Md BT\";\n"
"background:rgb(26,42,160);"));

        verticalLayout_3->addWidget(label_4);

        label_balance = new QLabel(layoutWidget_2);
        label_balance->setObjectName(QString::fromUtf8("label_balance"));
        label_balance->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 75 17pt \"Futura Md BT\";\n"
"font-weight:bold;\n"
"background:rgb(26,42,160);"));

        verticalLayout_3->addWidget(label_balance);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(0, 179, 249);\n"
"font: 75 13pt \"Futura Md BT\";"));

        verticalLayout_3->addWidget(label_6);

        label_email = new QLabel(layoutWidget_2);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 75 17pt \"Futura Md BT\";"));

        verticalLayout_3->addWidget(label_email);

        pushButton_exit = new QPushButton(frame);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(410, 480, 421, 61));
        pushButton_exit->setMinimumSize(QSize(0, 50));
        pushButton_exit->setStyleSheet(QString::fromUtf8("background:red;\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 360, 331, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(0, 179, 249);\n"
"font: 75 13pt \"Futura Md BT\";"));

        verticalLayout_2->addWidget(label_8);

        label_mobile_number = new QLabel(layoutWidget);
        label_mobile_number->setObjectName(QString::fromUtf8("label_mobile_number"));
        label_mobile_number->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 16pt \"Futura Md BT\";"));

        verticalLayout_2->addWidget(label_mobile_number);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(410, 100, 410, 331));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_withdraw = new QPushButton(layoutWidget1);
        pushButton_withdraw->setObjectName(QString::fromUtf8("pushButton_withdraw"));
        pushButton_withdraw->setStyleSheet(QString::fromUtf8("height:50px;\n"
"background-color:rgb(0,179,249);\n"
"color:white;\n"
"padding-top:20px;\n"
"padding-bottom:20px;\n"
"font: 75 17pt \"Futura Md BT\";"));

        horizontalLayout->addWidget(pushButton_withdraw);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("height:50px;\n"
"background-color:rgb(0,179,249);\n"
"color:white;\n"
"padding-top:20px;\n"
"padding-bottom:20px;\n"
"font: 75 17pt \"Futura Md BT\";"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_mobile_change = new QPushButton(layoutWidget1);
        pushButton_mobile_change->setObjectName(QString::fromUtf8("pushButton_mobile_change"));
        pushButton_mobile_change->setStyleSheet(QString::fromUtf8("height:50px;\n"
"background-color:rgb(0,179,249);\n"
"color:white;\n"
"padding-top:20px;\n"
"padding-bottom:20px;\n"
"font: 75 17pt \"Futura Md BT\";"));

        horizontalLayout_2->addWidget(pushButton_mobile_change);

        pushButton_pin_change = new QPushButton(layoutWidget1);
        pushButton_pin_change->setObjectName(QString::fromUtf8("pushButton_pin_change"));
        pushButton_pin_change->setStyleSheet(QString::fromUtf8("height:50px;\n"
"background-color:rgb(0,179,249);\n"
"color:white;\n"
"padding-top:20px;\n"
"padding-bottom:20px;\n"
"font: 75 17pt \"Futura Md BT\";"));

        horizontalLayout_2->addWidget(pushButton_pin_change);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_transfer = new QPushButton(layoutWidget1);
        pushButton_transfer->setObjectName(QString::fromUtf8("pushButton_transfer"));
        pushButton_transfer->setStyleSheet(QString::fromUtf8("height:50px;\n"
"background-color:rgb(0,179,249);\n"
"color:white;\n"
"padding-top:20px;\n"
"padding-bottom:20px;\n"
"font: 75 17pt \"Futura Md BT\";"));

        horizontalLayout_3->addWidget(pushButton_transfer);

        pushButton_pre = new QPushButton(layoutWidget1);
        pushButton_pre->setObjectName(QString::fromUtf8("pushButton_pre"));
        pushButton_pre->setStyleSheet(QString::fromUtf8("height:50px;\n"
"background-color:rgb(0,179,249);\n"
"color:white;\n"
"padding-top:20px;\n"
"padding-bottom:20px;\n"
"font: 75 17pt \"Futura Md BT\";"));

        horizontalLayout_3->addWidget(pushButton_pre);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "ATM", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Welcome", nullptr));
        label_name->setText(QString());
        label_4->setText(QCoreApplication::translate("Dialog", "Balance", nullptr));
        label_balance->setText(QCoreApplication::translate("Dialog", "Rs.", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "E-mail", nullptr));
        label_email->setText(QString());
        pushButton_exit->setText(QCoreApplication::translate("Dialog", "EXIT", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "Mobile Number", nullptr));
        label_mobile_number->setText(QString());
        pushButton_withdraw->setText(QCoreApplication::translate("Dialog", "Withdraw", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Deposit", nullptr));
        pushButton_mobile_change->setText(QCoreApplication::translate("Dialog", "Change Mobile", nullptr));
        pushButton_pin_change->setText(QCoreApplication::translate("Dialog", "PIN Change", nullptr));
        pushButton_transfer->setText(QCoreApplication::translate("Dialog", "Transfer Balance", nullptr));
        pushButton_pre->setText(QCoreApplication::translate("Dialog", "Previous Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
