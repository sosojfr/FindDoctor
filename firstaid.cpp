#include "firstaid.h"
#include "ui_firstaid.h"
#include "about.h"
#include"healthtips.h"
#include"QMessageBox"
QString FirstAidInfos[]={
    "\
    FirstAid Info 1 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    FirstAid Info 2 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    FirstAid Info 3 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    FirstAid Info 4 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    FirstAid Info 5 \n\
    This is where some important stuff will be written \n\
    ",

    "\
    FirstAid Info 6 \n\
    This is where some important stuff will be written \n\
    "





};
FirstAid::FirstAid(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstAid)
{
    ui->setupUi(this);
}

FirstAid::~FirstAid()
{
    delete ui;
}

void FirstAid::on_pushButton_clicked()
{
    About *newWindow = new About();
    newWindow->show();
}

void FirstAid::on_pushButton_2_clicked()
{
    HealthTips *newWindow = new HealthTips();
    newWindow->show();
    close();
}

void FirstAid::on_pushButton_3_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(FirstAidInfos[0]);
    msgBox->exec();
}

void FirstAid::on_pushButton_5_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(FirstAidInfos[1]);
    msgBox->exec();
}

void FirstAid::on_pushButton_7_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(FirstAidInfos[2]);
    msgBox->exec();
}

void FirstAid::on_pushButton_4_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(FirstAidInfos[3]);
    msgBox->exec();
}

void FirstAid::on_pushButton_6_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(FirstAidInfos[4]);
    msgBox->exec();
}

void FirstAid::on_pushButton_8_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    msgBox->setText(FirstAidInfos[5]);
    msgBox->exec();
}
