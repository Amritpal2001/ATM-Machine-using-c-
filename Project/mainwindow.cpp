#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <iostream>
#include "Customer.h"
#include "ui_dialog_deposit.h"
#include "ui_dialog_withdraw.h"
#include "ui_dialog_details.h"
#include "ui_dialog_pin_change.h"
#include "ui_dialog_email_change.h"
#include "dialog_pre_trans.h"
#include "ui_dialog_pre_trans.h"
#include "database_funs.h"
#include "ui_dialog_transfer.h"
#include "ui_dialog_mobile_change.h"

#include <QList>

using namespace std;

QList<QString> action;
QList<QString> amount ;
QList<QString> date_time ;

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
Customer c;


void MainWindow::on_pushButton_login_clicked()
{
    QString acc_no = ui->lineEdit_acc_no->text();
    QString pin = ui->lineEdit_pin->text();

    int x= c.validate_user(acc_no.toStdString() , pin.toStdString());

    if(x==4)
    {
        previous_trans(c.get_acc_num() , action , amount , date_time);
        hide();
        secdialog = new Dialog(this);
        secdialog->show();
    }
    else
    {
        QMessageBox::warning(this , "Login" , "Invalid details");
    }
}

//balance
void Dialog::on_pushButton_clicked()
{
    string s = c.get_balance();
    char c [s.length()+1];
    strcpy(c, s.c_str());
    QMessageBox::warning(this , "Current Balanace" , c);
}
//Deposit
void Dialog::on_pushButton_2_clicked()
{
    Dialog_deposit * deposit_dialog = new Dialog_deposit(this);
    deposit_dialog->show();
}

void Dialog_deposit::on_pushButton_clicked()
{
    QString amt = ui->lineEdit_amt_deposit->text();
    c.deposit(stoi(amt.toStdString()));
    hide();
}

//withdraw
void Dialog::on_pushButton_withdraw_clicked()
{
   Dialog_withdraw * withdraw_dialog = new Dialog_withdraw(this);
   withdraw_dialog->show();
}
void Dialog_withdraw::on_pushButton_withdraw_clicked()
{
     QString amt = ui->lineEdit_withdraw->text();
     int x =c.withdraw(stoi(amt.toStdString()));
     if(x==0)
     {
         QMessageBox::information(this , "Success" , "Transaction Successful");
         hide();
     }
     else
       QMessageBox::warning(this , "Failure" , "Not enough Balance");
}
//details
void Dialog::on_pushButton_details_clicked()
{
    Dialog_details * details_dialog = new Dialog_details(this);
    map<string , string> details = c.show_user_infomation();
    details_dialog->show();
    details_dialog->ui->label_name->setText(details["name"].c_str());
    details_dialog->ui->label_acc_num->setText(details["acc_no"].c_str());
    details_dialog->ui->label_mobile_number->setText(details["mobile_number"].c_str());
    details_dialog->ui->label_email->setText(details["email"].c_str());
    details_dialog->ui->label_balance->setText(details["balance"].c_str());
}
void Dialog_details::on_pushButton_details_clicked()
{
    hide();
}

//PIN change
void Dialog::on_pushButton_pin_change_clicked()
{
    Dialog_pin_change * dialog_pin_change = new Dialog_pin_change(this);
    dialog_pin_change->show();
}
void Dialog_pin_change::on_pushButton_change_pin_clicked()
{
      QString pin1 = ui->lineEdit_new_pin->text();
      QString pin2 = ui->lineEdit_confirm_new_pin->text();
      if(pin1 == pin2)
      {
          c.pin_change(pin1.toStdString());
          QMessageBox::information(this , "Success" , "PIN changed successfully");
          hide();
      }
      else
          QMessageBox::warning(this , "Current Balanace" , "PIN don't match. Enter again");
}
//Email change
void Dialog::on_pushButton_email_change_clicked()
{
    Dialog_email_change * email_change_dialog = new Dialog_email_change(this);
    email_change_dialog->show();
}
void Dialog_email_change::on_pushButton_email_change_clicked()
{
    QString em = ui->lineEdit_email_change->text();
    c.email_change(em.toStdString());
    QMessageBox::information(this , "Success" , "Email changed successfully");
    hide();
}

//balance transfer
void Dialog::on_pushButton_transfer_clicked()
{
    Dialog_transfer * transfer_dialog = new Dialog_transfer(this);
    transfer_dialog->show();
}
void Dialog_transfer::on_pushButton_clicked()
{

}

void Dialog_transfer::on_pushButton_transfer_clicked()
{

    QString acc_no = ui->lineEdit_1->text();
    QString amt = ui->lineEdit_2->text();
    string am = amt.toStdString();

    int x = c.transfer_bal(acc_no.toStdString() , stoi(am) );
    if(x==0)
    {
        QMessageBox::information(this , "Success" , "Balance Trannsferred successfully");
        hide();
    }
    else
    {
        QMessageBox::warning(this , "Failure" , "Check Account number and make sure yo have enough balance");
    }
}

//Mobile_change

void Dialog::on_pushButton_mobile_change_clicked()
{

    Dialog_mobile_change * mobile_change_dialog = new Dialog_mobile_change(this);
    mobile_change_dialog->show();
}
void Dialog_mobile_change::on_pushButton_mobile_change_clicked()
{
    QString new_ = ui->lineEdit_mobile_change->text();
    c.mobile_number_change(new_.toStdString());
    hide();
}



//EXIT
void Dialog::on_pushButton_exit_clicked()
{
       close();
}


//previous trans
void Dialog::on_pushButton_pre_clicked()
{
    Dialog_pre_trans * pre_trans_dialog = new Dialog_pre_trans(this);
    pre_trans_dialog->show(); pre_trans_dialog->show();
}
Dialog_pre_trans::Dialog_pre_trans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_pre_trans)
{
    ui->setupUi(this);


       TestModel *pre_transModel = new TestModel(this);

       pre_transModel->populateData(action,amount,date_time);

       ui->tableView->setModel(pre_transModel);
        ui->tableView->setColumnWidth(2,200);
       ui->tableView->horizontalHeader()->setVisible(true);
       ui->tableView->show();
}

Dialog_pre_trans::~Dialog_pre_trans()
{
    delete ui;
}
TestModel::TestModel(QObject *parent) : QAbstractTableModel(parent)
{
}

void TestModel::populateData(const QList<QString> &action,const QList<QString> &amount ,const QList<QString> &date_time)
{
    tm_action.clear();
    tm_action = action;
    tm_amount.clear();
    tm_amount = amount;
    tm_date_time.clear();
    tm_date_time = date_time;
    return;
}

int TestModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return tm_action.length();
}

int TestModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 3;
}

QVariant TestModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || role != Qt::DisplayRole) {
        return QVariant();
    }
    if (index.column() == 0) {
        return tm_action[index.row()];
    } else if (index.column() == 1) {
        return tm_amount[index.row()];
    }
    else if (index.column() == 2) {
            return tm_date_time[index.row()];
        }
    return QVariant();
}

QVariant TestModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        if (section == 0) {
            return QString("Action");
        } else if (section == 1) {
            return QString("Amount");
        }
        else if (section == 2) {
                    return QString("Date Time");
                }
    }
    return QVariant();
}


void Dialog_pre_trans::on_pushButton_pre_trans_clicked()
{
    hide();
}


