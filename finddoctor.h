#ifndef FINDDOCTOR_H
#define FINDDOCTOR_H

#include <QDialog>

namespace Ui {
class FindDoctor;
}

class FindDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit FindDoctor(QWidget *parent = 0);
    ~FindDoctor();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::FindDoctor *ui;
};

#endif // FINDDOCTOR_H
