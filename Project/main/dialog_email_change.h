#ifndef DIALOG_EMAIL_CHANGE_H
#define DIALOG_EMAIL_CHANGE_H

#include <QDialog>

namespace Ui {
class Dialog_email_change;
}

class Dialog_email_change : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_email_change(QWidget *parent = nullptr);
    ~Dialog_email_change();

private slots:
    void on_pushButton_email_change_clicked();

private:
    Ui::Dialog_email_change *ui;
};

#endif // DIALOG_EMAIL_CHANGE_H
