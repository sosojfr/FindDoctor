#ifndef DOCTORINFO_H
#define DOCTORINFO_H

#include <QDialog>

namespace Ui {
class DoctorInfo;
}

class DoctorInfo : public QDialog
{
    Q_OBJECT

public:
    explicit DoctorInfo(QWidget *parent = 0,QString DoctorInfo="");
    ~DoctorInfo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DoctorInfo *ui;
};

#endif // DOCTORINFO_H
