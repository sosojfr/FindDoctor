#include "finddoctor.h"
#include "ui_finddoctor.h"
#include "mainwindow.h"
#include "about.h"
#include "doctorinfo.h"
QString doctorInfos[] = {
    "\
    Name: Doctor 1  \n\
    This is where the doctor info is written \n\
    Email: doctor1@gmail.com \n\
    Hospital: Menelik \n\
    Phone No: +251 912121212 \n\
    ",

    "\
    Name: Doctor 2  \n\
    This is where the doctor info is written \n\
    Email: doctor2@gmail.com \n\
    Hospital: Menelik \n\
    Phone No: +251 912121212 \n\
    ",

    "\
    Name: Doctor 3  \n\
    This is where the doctor info is written \n\
    Email: doctor3@gmail.com \n\
    Hospital: Menelik \n\
    Phone No: +251 912121212 \n\
    ",

    "\
    Name: Doctor 4  \n\
    This is where the doctor info is written \n\
    Email: doctor3@gmail.com \n\
    Hospital: Menelik \n\
    Phone No: +251 912121212 \n\
    ",

    "\
    Name: Doctor 5  \n\
    This is where the doctor info is written \n\
    Email: doctor3@gmail.com \n\
    Hospital: Menelik \n\
    Phone No: +251 912121212 \n\
    ",


    "\
    Name: Doctor 6  \n\
    This is where the doctor info is written \n\
    Email: doctor3@gmail.com \n\
    Hospital: Menelik \n\
    Phone No: +251 912121212 \n\
    "




};


FindDoctor::FindDoctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindDoctor)
{
    ui->setupUi(this);
}

FindDoctor::~FindDoctor()
{
    delete ui;
}

void FindDoctor::on_pushButton_2_clicked()
{

    MainWindow *newWindow = new MainWindow();
    newWindow->show();
     close();
}

void FindDoctor::on_pushButton_clicked()
{
    About *newWindow = new About();
    newWindow->show();
}

void FindDoctor::on_pushButton_3_clicked()
{
    DoctorInfo *newWindow = new DoctorInfo(0,doctorInfos[0]);
    newWindow->show();
    close();

}


void FindDoctor::on_pushButton_7_clicked()
{
    DoctorInfo *newWindow = new DoctorInfo(0,doctorInfos[1]);
    newWindow->show();
    close();
}

void FindDoctor::on_pushButton_8_clicked()
{
    DoctorInfo *newWindow = new DoctorInfo(0,doctorInfos[2]);
    newWindow->show();
    close();
}

void FindDoctor::on_pushButton_4_clicked()
{
    DoctorInfo *newWindow = new DoctorInfo(0,doctorInfos[3]);
    newWindow->show();
    close();
}

void FindDoctor::on_pushButton_9_clicked()
{
    DoctorInfo *newWindow = new DoctorInfo(0,doctorInfos[4]);
    newWindow->show();
    close();
}

void FindDoctor::on_pushButton_10_clicked()
{
    DoctorInfo *newWindow = new DoctorInfo(0,doctorInfos[5]);
    newWindow->show();
    close();
}
