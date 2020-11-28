/********************************************************************************
** Form generated from reading UI file 'dialog_deposit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DEPOSIT_H
#define UI_DIALOG_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_deposit
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_amt_deposit;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_deposit)
    {
        if (Dialog_deposit->objectName().isEmpty())
            Dialog_deposit->setObjectName(QString::fromUtf8("Dialog_deposit"));
        Dialog_deposit->resize(415, 319);
        Dialog_deposit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072\n"
"}\n"
"QLineEdit::hover{\n"
"border-bottom:3px solid black\n"
"}"));
        layoutWidget = new QWidget(Dialog_deposit);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 60, 301, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_amt_deposit = new QLineEdit(layoutWidget);
        lineEdit_amt_deposit->setObjectName(QString::fromUtf8("lineEdit_amt_deposit"));

        horizontalLayout->addWidget(lineEdit_amt_deposit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Dialog_deposit);

        QMetaObject::connectSlotsByName(Dialog_deposit);
    } // setupUi

    void retranslateUi(QDialog *Dialog_deposit)
    {
        Dialog_deposit->setWindowTitle(QCoreApplication::translate("Dialog_deposit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_deposit", "Enter Amount", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_deposit", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_deposit: public Ui_Dialog_deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DEPOSIT_H
