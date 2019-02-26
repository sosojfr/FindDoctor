#include "generalinformation.h"
#include "ui_generalinformation.h"
#include "about.h"
#include"healthtips.h"
#include "QMessageBox"
QString GeneralInfos[]={
    "\
    General Info 1 \n\
    This is info 1 where some important stuff will be written \n\
    ",

    "\
    General Info 2 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    General Info 3 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    General Info 4 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    General Info 5 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    General Info 6 \n\
    This is where some important stuff will be written \n\
    "





};
GeneralInformation::GeneralInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeneralInformation)
{
    ui->setupUi(this);
}

GeneralInformation::~GeneralInformation()
{
    delete ui;
}

void GeneralInformation::on_pushButton_clicked()
{
    About *newWindow = new About();
    newWindow->show();
}

void GeneralInformation::on_pushButton_2_clicked()
{
    HealthTips *newWindow = new HealthTips();
    newWindow->show();
    close();
}

void GeneralInformation::on_pushButton_3_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(GeneralInfos[0]);
    msgBox->exec();
}

void GeneralInformation::on_pushButton_6_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(GeneralInfos[1]);
    msgBox->exec();
}

void GeneralInformation::on_pushButton_8_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(GeneralInfos[2]);
    msgBox->exec();
}

void GeneralInformation::on_pushButton_4_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(GeneralInfos[3]);
    msgBox->exec();
}

void GeneralInformation::on_pushButton_5_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(GeneralInfos[4]);
    msgBox->exec();
}

void GeneralInformation::on_pushButton_7_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(GeneralInfos[5]);
    msgBox->exec();
}
