/********************************************************************************
** Form generated from reading UI file 'dialog_withdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_WITHDRAW_H
#define UI_DIALOG_WITHDRAW_H

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

class Ui_Dialog_withdraw
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_withdraw;
    QPushButton *pushButton_withdraw;

    void setupUi(QDialog *Dialog_withdraw)
    {
        if (Dialog_withdraw->objectName().isEmpty())
            Dialog_withdraw->setObjectName(QString::fromUtf8("Dialog_withdraw"));
        Dialog_withdraw->resize(416, 319);
        Dialog_withdraw->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        layoutWidget = new QWidget(Dialog_withdraw);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 281, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_withdraw = new QLineEdit(layoutWidget);
        lineEdit_withdraw->setObjectName(QString::fromUtf8("lineEdit_withdraw"));
        lineEdit_withdraw->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(lineEdit_withdraw);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_withdraw = new QPushButton(layoutWidget);
        pushButton_withdraw->setObjectName(QString::fromUtf8("pushButton_withdraw"));
        pushButton_withdraw->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(pushButton_withdraw);


        retranslateUi(Dialog_withdraw);

        QMetaObject::connectSlotsByName(Dialog_withdraw);
    } // setupUi

    void retranslateUi(QDialog *Dialog_withdraw)
    {
        Dialog_withdraw->setWindowTitle(QCoreApplication::translate("Dialog_withdraw", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_withdraw", "Amount", nullptr));
        pushButton_withdraw->setText(QCoreApplication::translate("Dialog_withdraw", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_withdraw: public Ui_Dialog_withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_WITHDRAW_H
