#ifndef DIALOG_TRANSFER_H
#define DIALOG_TRANSFER_H

#include <QDialog>

namespace Ui {
class Dialog_transfer;
}

class Dialog_transfer : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_transfer(QWidget *parent = nullptr);
    ~Dialog_transfer();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_transfer_clicked();

private:
    Ui::Dialog_transfer *ui;
};

#endif // DIALOG_TRANSFER_H
