#ifndef FIRSTAID_H
#define FIRSTAID_H

#include <QDialog>

namespace Ui {
class FirstAid;
}

class FirstAid : public QDialog
{
    Q_OBJECT

public:
    explicit FirstAid(QWidget *parent = 0);
    ~FirstAid();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::FirstAid *ui;
};

#endif // FIRSTAID_H
