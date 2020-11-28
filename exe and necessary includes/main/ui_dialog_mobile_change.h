/********************************************************************************
** Form generated from reading UI file 'dialog_mobile_change.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MOBILE_CHANGE_H
#define UI_DIALOG_MOBILE_CHANGE_H

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

class Ui_Dialog_mobile_change
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_mobile_change;
    QPushButton *pushButton_mobile_change;

    void setupUi(QDialog *Dialog_mobile_change)
    {
        if (Dialog_mobile_change->objectName().isEmpty())
            Dialog_mobile_change->setObjectName(QString::fromUtf8("Dialog_mobile_change"));
        Dialog_mobile_change->resize(400, 300);
        Dialog_mobile_change->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        layoutWidget = new QWidget(Dialog_mobile_change);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 90, 301, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label);

        lineEdit_mobile_change = new QLineEdit(layoutWidget);
        lineEdit_mobile_change->setObjectName(QString::fromUtf8("lineEdit_mobile_change"));
        lineEdit_mobile_change->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(lineEdit_mobile_change);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_mobile_change = new QPushButton(layoutWidget);
        pushButton_mobile_change->setObjectName(QString::fromUtf8("pushButton_mobile_change"));
        pushButton_mobile_change->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(pushButton_mobile_change);


        retranslateUi(Dialog_mobile_change);

        QMetaObject::connectSlotsByName(Dialog_mobile_change);
    } // setupUi

    void retranslateUi(QDialog *Dialog_mobile_change)
    {
        Dialog_mobile_change->setWindowTitle(QCoreApplication::translate("Dialog_mobile_change", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_mobile_change", "Enter new Mobile Number", nullptr));
        pushButton_mobile_change->setText(QCoreApplication::translate("Dialog_mobile_change", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_mobile_change: public Ui_Dialog_mobile_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MOBILE_CHANGE_H
