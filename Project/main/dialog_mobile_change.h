#ifndef DIALOG_MOBILE_CHANGE_H
#define DIALOG_MOBILE_CHANGE_H

#include <QDialog>

namespace Ui {
class Dialog_mobile_change;
}

class Dialog_mobile_change : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_mobile_change(QWidget *parent = nullptr);
    ~Dialog_mobile_change();

private slots:
    void on_pushButton_mobile_change_clicked();

private:
    Ui::Dialog_mobile_change *ui;
};

#endif // DIALOG_MOBILE_CHANGE_H
