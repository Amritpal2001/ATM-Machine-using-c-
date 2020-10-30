#include "dialog_deposit.h"
#include "ui_dialog_deposit.h"

Dialog_deposit::Dialog_deposit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_deposit)
{
    ui->setupUi(this);
}

Dialog_deposit::~Dialog_deposit()
{
    delete ui;
}


