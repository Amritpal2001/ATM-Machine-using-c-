#include "dialog_transfer.h"
#include "ui_dialog_transfer.h"

Dialog_transfer::Dialog_transfer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_transfer)
{
    ui->setupUi(this);
}

Dialog_transfer::~Dialog_transfer()
{
    delete ui;
}

