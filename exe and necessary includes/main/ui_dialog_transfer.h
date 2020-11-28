/********************************************************************************
** Form generated from reading UI file 'dialog_transfer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TRANSFER_H
#define UI_DIALOG_TRANSFER_H

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

class Ui_Dialog_transfer
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_transfer;

    void setupUi(QDialog *Dialog_transfer)
    {
        if (Dialog_transfer->objectName().isEmpty())
            Dialog_transfer->setObjectName(QString::fromUtf8("Dialog_transfer"));
        Dialog_transfer->resize(400, 300);
        Dialog_transfer->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        layoutWidget = new QWidget(Dialog_transfer);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 40, 301, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label);

        lineEdit_1 = new QLineEdit(layoutWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(lineEdit_1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_transfer = new QPushButton(layoutWidget);
        pushButton_transfer->setObjectName(QString::fromUtf8("pushButton_transfer"));
        pushButton_transfer->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_transfer);


        retranslateUi(Dialog_transfer);

        QMetaObject::connectSlotsByName(Dialog_transfer);
    } // setupUi

    void retranslateUi(QDialog *Dialog_transfer)
    {
        Dialog_transfer->setWindowTitle(QCoreApplication::translate("Dialog_transfer", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_transfer", "Enter Account number", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_transfer", "Enter Amount                ", nullptr));
        pushButton_transfer->setText(QCoreApplication::translate("Dialog_transfer", "Transfer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_transfer: public Ui_Dialog_transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TRANSFER_H
