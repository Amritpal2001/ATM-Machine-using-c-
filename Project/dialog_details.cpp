#include "dialog_details.h"
#include "ui_dialog_details.h"

Dialog_details::Dialog_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_details)
{
    ui->setupUi(this);
}

Dialog_details::~Dialog_details()
{
    delete ui;
}


