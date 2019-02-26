#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "finddoctorlocationandsymptoms.h"
#include "healthtips.h"
#include "quickandpreciseadvice.h"
#include "medicaldictionary.h"
#include "about.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    finddoctorlocationandsymptoms *newWindow = new finddoctorlocationandsymptoms();
    newWindow->show();

     close();
}

void MainWindow::on_pushButton_6_clicked()
{
    HealthTips *newWindow = new HealthTips();
    newWindow->show();
     close();
}

void MainWindow::on_pushButton_4_clicked()
{
    QuickAndPreciseAdvice *newWindow = new QuickAndPreciseAdvice();
    newWindow->show();
    close();
}

void MainWindow::on_pushButton_5_clicked()
{

    MedicalDictionary *newWindow = new MedicalDictionary();
    newWindow->show();
    close();
}

void MainWindow::on_pushButton_2_clicked()
{
    qApp->exit();
}

void MainWindow::on_pushButton_clicked()
{

    About *newWindow = new About();
    newWindow->show();
}

void MainWindow::on_pushButton_7_clicked()
{

}
