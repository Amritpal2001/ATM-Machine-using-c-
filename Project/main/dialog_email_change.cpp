#include "dialog_email_change.h"
#include "ui_dialog_email_change.h"

Dialog_email_change::Dialog_email_change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_email_change)
{
    ui->setupUi(this);
}

Dialog_email_change::~Dialog_email_change()
{
    delete ui;
}


