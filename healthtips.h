#ifndef HEALTHTIPS_H
#define HEALTHTIPS_H

#include <QDialog>

namespace Ui {
class HealthTips;
}

class HealthTips : public QDialog
{
    Q_OBJECT

public:
    explicit HealthTips(QWidget *parent = 0);
    ~HealthTips();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::HealthTips *ui;
};

#endif // HEALTHTIPS_H
