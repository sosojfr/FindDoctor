#include "quickandpreciseadvice.h"
#include "ui_quickandpreciseadvice.h"
#include"mainwindow.h"
#include "about.h"
#include "QMessageBox"
QHash<QString, QString> SymptomToAdvice ;

QuickAndPreciseAdvice::QuickAndPreciseAdvice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuickAndPreciseAdvice)
{
    ui->setupUi(this);

    SymptomToAdvice.insert("Sore Throat","A sore throat that is caused by a virus does not need antibiotics. In those cases, no specific medicine is required, and your child should get better in seven to ten days. In other cases, a sore throat could be caused by an infection called streptococcal (strep throat).");
    SymptomToAdvice.insert("Bronchitis","Chronic bronchitis is an infection of the larger, more central airways in the lungs and is more often seen in adults. Often the word 'bronchitis' is used to describe a chest virus and does not require antibiotics.");
    SymptomToAdvice.insert("Common Cold","Colds are caused by viruses in the upper respiratory tract. Many young children—especially those in child care—can get 6 to 8 colds per year. Symptoms of a cold (including runny nose, congestion, and cough) may last for up to ten days.");
    SymptomToAdvice.insert("Cough","Cough medicine is not recommended for children 4 years of age and younger, or for children 4 to 6 years of age unless advised by your doctor. Studies have consistently shown that cough medicines do not work in the 4-years-and-younger age group and have the potential for serious side effects. Cough medicines with narcotics—such as codeine—should not be used in children.");

    ui->comboBox->addItems(SymptomToAdvice.keys());

}

QuickAndPreciseAdvice::~QuickAndPreciseAdvice()
{
    delete ui;
}

void QuickAndPreciseAdvice::on_pushButton_2_clicked()
{
    MainWindow *newWindow = new MainWindow();
    newWindow->show();
     close();
}

void QuickAndPreciseAdvice::on_pushButton_clicked()
{
    About *newWindow = new About();
    newWindow->show();
}

void QuickAndPreciseAdvice::on_pushButton_3_clicked()
{
    QMessageBox *msgBox = new QMessageBox(0);
    QString Word = ui->comboBox->currentText();
    QString Advice = SymptomToAdvice[Word];
    msgBox->setText(Advice);
    msgBox->exec();
}
