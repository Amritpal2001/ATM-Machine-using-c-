#ifndef DIALOG_PIN_CHANGE_H
#define DIALOG_PIN_CHANGE_H

#include <QDialog>

namespace Ui {
class Dialog_pin_change;
}

class Dialog_pin_change : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_pin_change(QWidget *parent = nullptr);
    ~Dialog_pin_change();

private slots:
    void on_pushButton_change_pin_clicked();

private:
    Ui::Dialog_pin_change *ui;
};

#endif // DIALOG_PIN_CHANGE_H
