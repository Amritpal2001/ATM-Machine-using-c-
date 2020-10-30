#include "dialog_pin_change.h"
#include "ui_dialog_pin_change.h"

Dialog_pin_change::Dialog_pin_change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_pin_change)
{
    ui->setupUi(this);
}

Dialog_pin_change::~Dialog_pin_change()
{
    delete ui;
}


