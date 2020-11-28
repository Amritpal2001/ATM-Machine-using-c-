/********************************************************************************
** Form generated from reading UI file 'dialog_pre_trans.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PRE_TRANS_H
#define UI_DIALOG_PRE_TRANS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_pre_trans
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *pushButton_pre_trans;

    void setupUi(QDialog *Dialog_pre_trans)
    {
        if (Dialog_pre_trans->objectName().isEmpty())
            Dialog_pre_trans->setObjectName(QString::fromUtf8("Dialog_pre_trans"));
        Dialog_pre_trans->resize(582, 425);
        Dialog_pre_trans->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        layoutWidget = new QWidget(Dialog_pre_trans);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 491, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        pushButton_pre_trans = new QPushButton(layoutWidget);
        pushButton_pre_trans->setObjectName(QString::fromUtf8("pushButton_pre_trans"));

        verticalLayout->addWidget(pushButton_pre_trans);


        retranslateUi(Dialog_pre_trans);

        QMetaObject::connectSlotsByName(Dialog_pre_trans);
    } // setupUi

    void retranslateUi(QDialog *Dialog_pre_trans)
    {
        Dialog_pre_trans->setWindowTitle(QCoreApplication::translate("Dialog_pre_trans", "Dialog", nullptr));
        pushButton_pre_trans->setText(QCoreApplication::translate("Dialog_pre_trans", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_pre_trans: public Ui_Dialog_pre_trans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PRE_TRANS_H
