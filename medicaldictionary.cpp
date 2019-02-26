#include "medicaldictionary.h"
#include "ui_medicaldictionary.h"
#include"mainwindow.h"
#include "about.h"
#include"QHash"
#include "QMessageBox"
QHash<QString, QString> Dictionary ;

MedicalDictionary::MedicalDictionary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MedicalDictionary)
{
    ui->setupUi(this);
    Dictionary.insert("acyclovir","a synthetic acyclic purine nucleoside with selective antiviral activity against the human herpesviruses, used in treatment of genital and mucocutaneous herpesvirus infections in both immunocompromised patients and those who are not. Administered orally, topically, or intravenously.");
    Dictionary.insert("alprazolam","a benzodiazepine antianxiety agent.");
    Dictionary.insert("diazepam","a benzodiazepine used primarily as an antianxiety agent, and also used as a skeletal muscle relaxant, anticonvulsant, antitremor agent, antipanic agent, as preoperative or preprocedural medication to relieve anxiety and tension, and in the management of alcohol withdrawal symptoms; administered orally, rectally, intravenously, or intramuscularly.");
    Dictionary.insert("Flexeril","a trademark for a muscle relaxant (cyclobenzaprine hydrochloride).");

    ui->comboBox->addItems(Dictionary.keys());
}

MedicalDictionary::~MedicalDictionary()
{
    delete ui;
}

void MedicalDictionary::on_pushButton_2_clicked()
{
    MainWindow *newWindow = new MainWindow();
    newWindow->show();
    close();
}

void MedicalDictionary::on_pushButton_clicked()
{
    About *newWindow = new About();
    newWindow->show();
}

void MedicalDictionary::on_pushButton_3_clicked()
{
   QMessageBox *msgBox = new QMessageBox(0);
   QString Word = ui->comboBox->currentText();
   QString Definition = Dictionary[Word];
   msgBox->setText(Definition);
   msgBox->exec();
}
