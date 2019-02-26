#ifndef QUICKANDPRECISEADVICE_H
#define QUICKANDPRECISEADVICE_H

#include <QDialog>

namespace Ui {
class QuickAndPreciseAdvice;
}

class QuickAndPreciseAdvice : public QDialog
{
    Q_OBJECT

public:
    explicit QuickAndPreciseAdvice(QWidget *parent = 0);
    ~QuickAndPreciseAdvice();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::QuickAndPreciseAdvice *ui;
};

#endif // QUICKANDPRECISEADVICE_H
