#include "dialog_mobile_change.h"
#include "ui_dialog_mobile_change.h"

Dialog_mobile_change::Dialog_mobile_change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_mobile_change)
{
    ui->setupUi(this);
}

Dialog_mobile_change::~Dialog_mobile_change()
{
    delete ui;
}


