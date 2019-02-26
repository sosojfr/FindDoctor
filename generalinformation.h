#ifndef GENERALINFORMATION_H
#define GENERALINFORMATION_H

#include <QDialog>

namespace Ui {
class GeneralInformation;
}

class GeneralInformation : public QDialog
{
    Q_OBJECT

public:
    explicit GeneralInformation(QWidget *parent = 0);
    ~GeneralInformation();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::GeneralInformation *ui;
};

#endif // GENERALINFORMATION_H
