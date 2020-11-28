/********************************************************************************
** Form generated from reading UI file 'dialog_email_change.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EMAIL_CHANGE_H
#define UI_DIALOG_EMAIL_CHANGE_H

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

class Ui_Dialog_email_change
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_email_change;
    QPushButton *pushButton_email_change;

    void setupUi(QDialog *Dialog_email_change)
    {
        if (Dialog_email_change->objectName().isEmpty())
            Dialog_email_change->setObjectName(QString::fromUtf8("Dialog_email_change"));
        Dialog_email_change->resize(400, 300);
        widget = new QWidget(Dialog_email_change);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 80, 291, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_email_change = new QLineEdit(widget);
        lineEdit_email_change->setObjectName(QString::fromUtf8("lineEdit_email_change"));

        horizontalLayout->addWidget(lineEdit_email_change);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_email_change = new QPushButton(widget);
        pushButton_email_change->setObjectName(QString::fromUtf8("pushButton_email_change"));

        verticalLayout->addWidget(pushButton_email_change);


        retranslateUi(Dialog_email_change);

        QMetaObject::connectSlotsByName(Dialog_email_change);
    } // setupUi

    void retranslateUi(QDialog *Dialog_email_change)
    {
        Dialog_email_change->setWindowTitle(QCoreApplication::translate("Dialog_email_change", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_email_change", "Enter new Email", nullptr));
        pushButton_email_change->setText(QCoreApplication::translate("Dialog_email_change", "Change Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_email_change: public Ui_Dialog_email_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EMAIL_CHANGE_H
