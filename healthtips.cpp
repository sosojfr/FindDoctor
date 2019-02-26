#include "healthtips.h"
#include "ui_healthtips.h"
#include "generalinformation.h"
#include "firstaid.h"
#include"mainwindow.h"
#include "about.h"

HealthTips::HealthTips(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HealthTips)
{
    ui->setupUi(this);
}

HealthTips::~HealthTips()
{
    delete ui;
}

void HealthTips::on_pushButton_3_clicked()
{
    GeneralInformation *newWindow = new GeneralInformation();
    newWindow->show();
    close();
}

void HealthTips::on_pushButton_2_clicked()
{
    MainWindow *newWindow = new MainWindow();
    newWindow->show();
     close();
}

void HealthTips::on_pushButton_4_clicked()
{
    FirstAid *newWindow = new FirstAid();
    newWindow->show();
    close();
}

void HealthTips::on_pushButton_clicked()
{
    About *newWindow = new About();
    newWindow->show();
}
