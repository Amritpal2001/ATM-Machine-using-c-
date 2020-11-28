#ifndef DIALOG_WITHDRAW_H
#define DIALOG_WITHDRAW_H

#include <QDialog>

namespace Ui {
class Dialog_withdraw;
}

class Dialog_withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_withdraw(QWidget *parent = nullptr);
    ~Dialog_withdraw();

private slots:
    void on_pushButton_withdraw_clicked();

private:
    Ui::Dialog_withdraw *ui;
};

#endif // DIALOG_WITHDRAW_H
