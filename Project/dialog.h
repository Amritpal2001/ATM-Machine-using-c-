#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_withdraw_clicked();

    void on_pushButton_details_clicked();

    void on_pushButton_pin_change_clicked();

    void on_pushButton_email_change_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_pre_clicked();

    void on_pushButton_transfer_clicked();

    void on_pushButton_mobile_change_clicked();

public:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
