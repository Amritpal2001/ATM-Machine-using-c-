#ifndef DIALOG_DETAILS_H
#define DIALOG_DETAILS_H

#include <QDialog>

namespace Ui {
class Dialog_details;
}

class Dialog_details : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_details(QWidget *parent = nullptr);
    ~Dialog_details();

private slots:
    void on_pushButton_details_clicked();

public:
    Ui::Dialog_details *ui;
};

#endif // DIALOG_DETAILS_H
