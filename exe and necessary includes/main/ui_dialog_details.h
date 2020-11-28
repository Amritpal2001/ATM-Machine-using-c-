/********************************************************************************
** Form generated from reading UI file 'dialog_details.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DETAILS_H
#define UI_DIALOG_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_details
{
public:
    QLabel *label;
    QPushButton *pushButton_details;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_acc_num;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_email;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_mobile_number;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *label_balance;

    void setupUi(QDialog *Dialog_details)
    {
        if (Dialog_details->objectName().isEmpty())
            Dialog_details->setObjectName(QString::fromUtf8("Dialog_details"));
        Dialog_details->resize(432, 403);
        label = new QLabel(Dialog_details);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 30, 201, 61));
        pushButton_details = new QPushButton(Dialog_details);
        pushButton_details->setObjectName(QString::fromUtf8("pushButton_details"));
        pushButton_details->setGeometry(QRect(40, 340, 351, 41));
        layoutWidget = new QWidget(Dialog_details);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 110, 351, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_name = new QLabel(layoutWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        horizontalLayout->addWidget(label_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_acc_num = new QLabel(layoutWidget);
        label_acc_num->setObjectName(QString::fromUtf8("label_acc_num"));

        horizontalLayout_2->addWidget(label_acc_num);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_email = new QLabel(layoutWidget);
        label_email->setObjectName(QString::fromUtf8("label_email"));

        horizontalLayout_3->addWidget(label_email);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label_mobile_number = new QLabel(layoutWidget);
        label_mobile_number->setObjectName(QString::fromUtf8("label_mobile_number"));

        horizontalLayout_4->addWidget(label_mobile_number);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        label_balance = new QLabel(layoutWidget);
        label_balance->setObjectName(QString::fromUtf8("label_balance"));

        horizontalLayout_5->addWidget(label_balance);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Dialog_details);

        QMetaObject::connectSlotsByName(Dialog_details);
    } // setupUi

    void retranslateUi(QDialog *Dialog_details)
    {
        Dialog_details->setWindowTitle(QCoreApplication::translate("Dialog_details", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_details", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff0000;\">CUSTOMER DETAILS</span></p></body></html>", nullptr));
        pushButton_details->setText(QCoreApplication::translate("Dialog_details", "Done", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_details", "Name", nullptr));
        label_name->setText(QCoreApplication::translate("Dialog_details", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_details", "Acount number", nullptr));
        label_acc_num->setText(QCoreApplication::translate("Dialog_details", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_details", "Email", nullptr));
        label_email->setText(QCoreApplication::translate("Dialog_details", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_details", "Mobile number", nullptr));
        label_mobile_number->setText(QCoreApplication::translate("Dialog_details", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog_details", "Current Balance", nullptr));
        label_balance->setText(QCoreApplication::translate("Dialog_details", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_details: public Ui_Dialog_details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DETAILS_H
