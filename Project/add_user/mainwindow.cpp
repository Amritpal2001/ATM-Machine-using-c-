#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <iostream>
#include <winsock.h>
#include <mysql.h>
#include <windows.h>
#include <sstream>
#include<fstream>
#include<QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void mail(string e , string s)
{
    cout<<"Emailing...";
    ofstream file;
       file.open("test.ps1");
       string newArg = "-auto";
       string powershell;
       powershell = "$EmailFrom = \"environmentseekersnitj@gmail.com\"\n";
       powershell +="$EmailTo = \""+e+"\"\n";
        powershell +="$Subject = \"The subject of your email\"\n";
         powershell +="$Body = \"" +s+ "\"\n";
          powershell +="$SMTPServer = \"smtp.gmail.com\"\n";
           powershell +="$SMTPClient = New-Object Net.Mail.SmtpClient($SmtpServer, 587)\n";
            powershell +="$SMTPClient.EnableSsl = $true\n";
             powershell +="$SMTPClient.Credentials = New-Object System.Net.NetworkCredential(\"environmentseekersnitj@gmail.com\", \"fdgphlhigarggaoy\");\n";
             powershell +="$SMTPClient.Send($EmailFrom, $EmailTo, $Subject, $Body)\n";
             file << powershell << endl;
       file.close();

       system("powershell -ExecutionPolicy Bypass -F test.ps1");

       remove("test.ps1");

}
void addrecord(string acc_no ,string PIN ,string name, string balance ,string mobile_number,string email, string status  )
{
    MYSQL *conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "remotemysql.com", "mH2kQ9m8IW", "tXfgICQA3d", "mH2kQ9m8IW", 3306, NULL, 0);

    int qstate;
    stringstream ss;

    ss << "INSERT INTO ATM_users (acc_num , PIN , name , balance , Mobile_number , email , status ) VALUES('" << acc_no << "' , '" << PIN << "' , '" << name << "' , '" << balance << "' , '" << mobile_number << "' , '" << email << "' , '" << status << "')";
    string query = ss.str();
    const char *q = query.c_str();
    qstate = mysql_query(conn, q);
    if (qstate == 0)
        cout << "Record Inserted" << endl;
    else
        cout << "failed" << endl;

    mysql_close(conn);
}

void MainWindow::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    QString acc_no = ui->lineEdit_2->text();
    QString pin = ui->lineEdit_3->text();
    QString balance = ui->lineEdit_4->text();
    QString email = ui->lineEdit_5->text();
    QString OTP = ui->lineEdit_6->text();
    QString mobile = ui->lineEdit_7->text();
    QString status = ui->lineEdit_8->text();
    if(OTP.toStdString()=="5323")
    {
        addrecord(acc_no.toStdString() , pin.toStdString() , name.toStdString() , balance.toStdString() , mobile.toStdString() , email.toStdString() , status.toStdString());
        QMessageBox::information(this , "Success" , "Added successfully");
        hide();
    }

    else
        QMessageBox::information(this , "Failure" , "Enter OTP again");

}

void MainWindow::on_pushButton_2_clicked()
{
     QString email = ui->lineEdit_5->text();
     mail(email.toStdString() , "Your OTP for registration is 5323");
}
