#include "doctorinfo.h"
#include "ui_doctorinfo.h"
#include "about.h"
#include "finddoctorlocationandsymptoms.h"
DoctorInfo::DoctorInfo(QWidget *parent,QString DoctorInfo) :
    QDialog(parent),
    ui(new Ui::DoctorInfo)
{
    ui->setupUi(this);
    ui->label_2->setText(DoctorInfo);
}



DoctorInfo::~DoctorInfo()
{
    delete ui;
}

void DoctorInfo::on_pushButton_clicked()
{
    About *newWindow = new About();
    newWindow->show();
}

void DoctorInfo::on_pushButton_2_clicked()
{
    finddoctorlocationandsymptoms *newWindow = new finddoctorlocationandsymptoms();
    newWindow->show();
    close();
}
