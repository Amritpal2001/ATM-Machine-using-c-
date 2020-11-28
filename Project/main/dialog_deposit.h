#ifndef DIALOG_DEPOSIT_H
#define DIALOG_DEPOSIT_H

#include <QDialog>

namespace Ui {
class Dialog_deposit;
}

class Dialog_deposit : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_deposit(QWidget *parent = nullptr);
    ~Dialog_deposit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_deposit *ui;
};

#endif // DIALOG_DEPOSIT_H
