#ifndef DIALOG_PRE_TRANS_H
#define DIALOG_PRE_TRANS_H

#include <QDialog>
#include <QAbstractTableModel>


namespace Ui {
class Dialog_pre_trans;
}

class TestModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    TestModel(QObject *parent = nullptr);

    void populateData(const QList<QString> &action,const QList<QString> &amount ,const QList<QString> &date_time);

    int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    int columnCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

private:
    QList<QString> tm_action;
    QList<QString> tm_amount;
    QList<QString> tm_date_time;

};


class Dialog_pre_trans : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_pre_trans(QWidget *parent = nullptr);
    ~Dialog_pre_trans();

private slots:
    void on_pushButton_pre_trans_clicked();

    void on_pushButton_checkbook_email_clicked();

private:
    Ui::Dialog_pre_trans *ui;
};

#endif // DIALOG_PRE_TRANS_H
