/********************************************************************************
** Form generated from reading UI file 'dialog_pin_change.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PIN_CHANGE_H
#define UI_DIALOG_PIN_CHANGE_H

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

class Ui_Dialog_pin_change
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_new_pin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_confirm_new_pin;
    QPushButton *pushButton_change_pin;

    void setupUi(QDialog *Dialog_pin_change)
    {
        if (Dialog_pin_change->objectName().isEmpty())
            Dialog_pin_change->setObjectName(QString::fromUtf8("Dialog_pin_change"));
        Dialog_pin_change->resize(400, 300);
        Dialog_pin_change->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072\n"
"}\n"
"QLineEdit::hover{\n"
"border-bottom:3px solid black\n"
"}\n"
"#pushButton{\n"
"background:#4ee44e;\n"
"border-radius:60px;\n"
"\n"
"}\n"
"\n"
"#pushButton::hover{\n"
"background:green;\n"
"border-radius:60px;\n"
"\n"
"}"));
        layoutWidget = new QWidget(Dialog_pin_change);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 40, 271, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_new_pin = new QLineEdit(layoutWidget);
        lineEdit_new_pin->setObjectName(QString::fromUtf8("lineEdit_new_pin"));
        lineEdit_new_pin->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_new_pin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_confirm_new_pin = new QLineEdit(layoutWidget);
        lineEdit_confirm_new_pin->setObjectName(QString::fromUtf8("lineEdit_confirm_new_pin"));
        lineEdit_confirm_new_pin->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_confirm_new_pin);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_change_pin = new QPushButton(layoutWidget);
        pushButton_change_pin->setObjectName(QString::fromUtf8("pushButton_change_pin"));

        verticalLayout->addWidget(pushButton_change_pin);


        retranslateUi(Dialog_pin_change);

        QMetaObject::connectSlotsByName(Dialog_pin_change);
    } // setupUi

    void retranslateUi(QDialog *Dialog_pin_change)
    {
        Dialog_pin_change->setWindowTitle(QCoreApplication::translate("Dialog_pin_change", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_pin_change", "Enter new pin    ", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_pin_change", "Confirm new pin", nullptr));
        pushButton_change_pin->setText(QCoreApplication::translate("Dialog_pin_change", "Change PIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_pin_change: public Ui_Dialog_pin_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PIN_CHANGE_H
