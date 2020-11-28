/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_acc_no;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_pin;
    QPushButton *pushButton_login;
    QLabel *label;
    QFrame *frame_3;
    QFrame *frame_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(819, 552);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"font-size:15px;\n"
"}\n"
"#frame_2{\n"
"background-image:url(\":/img/B.png\");\n"
"}\n"
"\n"
"#frame{\n"
"background-color:white;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"#frame_3{\n"
"background-image:url(\":/img/img-01.png\");\n"
"}\n"
"\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072\n"
"}\n"
"QLineEdit::hover{\n"
"border-bottom:3px solid black\n"
"}\n"
"#pushButton_login{\n"
"background:#4ee44e;\n"
"border-radius:60px;\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"}\n"
"\n"
"#pushButton_login::hover{\n"
"background:green;\n"
"border-radius:60px;\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 30, 731, 431));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(410, 130, 271, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_acc_no = new QLineEdit(layoutWidget);
        lineEdit_acc_no->setObjectName(QString::fromUtf8("lineEdit_acc_no"));
        lineEdit_acc_no->setMinimumSize(QSize(0, 30));
        lineEdit_acc_no->setClearButtonEnabled(true);

        horizontalLayout->addWidget(lineEdit_acc_no);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_pin = new QLineEdit(layoutWidget);
        lineEdit_pin->setObjectName(QString::fromUtf8("lineEdit_pin"));
        lineEdit_pin->setMinimumSize(QSize(0, 30));
        lineEdit_pin->setEchoMode(QLineEdit::Password);
        lineEdit_pin->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(lineEdit_pin);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_login);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 50, 121, 61));
        label->setStyleSheet(QString::fromUtf8("\n"
"	font: 75 19pt \"MS Sans Serif\";\n"
"font-size:30px;\n"
"font-weight:bold;\n"
""));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(30, 70, 321, 311));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(-10, 0, 831, 501));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->raise();
        frame->raise();

        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 819, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        lineEdit_acc_no->setText(QCoreApplication::translate("MainWindow", "Account Number", nullptr));
        lineEdit_pin->setText(QCoreApplication::translate("MainWindow", "PINN", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
