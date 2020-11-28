#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "dialog.h"
#include <QMainWindow>
#include "dialog_deposit.h"
#include "dialog_withdraw.h"
#include "dialog_details.h"
#include "dialog_pin_change.h"
#include "dialog_email_change.h"
#include "dialog_pre_trans.h"
#include "dialog_transfer.h"
#include "dialog_mobile_change.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
     Dialog * secdialog;
    ~MainWindow();

private slots:


    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;

    Dialog_deposit * deposit_dialog;
    Dialog_withdraw * withdraw_dialog;
    Dialog_details * details_dialog;
    Dialog_pin_change * pin_change_dialog;
    Dialog_email_change * email_change_dialog;
};
#endif // MAINWINDOW_H
