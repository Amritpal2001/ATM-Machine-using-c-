#include "dialog_withdraw.h"
#include "ui_dialog_withdraw.h"

Dialog_withdraw::Dialog_withdraw(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_withdraw)
{
    ui->setupUi(this);
}

Dialog_withdraw::~Dialog_withdraw()
{
    delete ui;
}

