#include "finddoctorlocationandsymptoms.h"
#include "ui_finddoctorlocationandsymptoms.h"
#include "mainwindow.h"
#include "about.h"
#include "doctorinfo.h"
#include "QMessageBox"
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

QHash < QString, QSet < int > > SymptomToDoctor;
QHash < QString, QSet < int > > LocationToDoctor;

QSet < int > SoreThroatDoctors;

finddoctorlocationandsymptoms::finddoctorlocationandsymptoms(QWidget * parent):
  QDialog(parent),
  ui(new Ui::finddoctorlocationandsymptoms) {
    ui -> setupUi(this);

    QSet < int > SoreThroatDoctors;
    SoreThroatDoctors.insert(3);
    SoreThroatDoctors.insert(1);
    SoreThroatDoctors.insert(4);
    SoreThroatDoctors.insert(2);

    QSet < int > NeckPainDoctors;
    NeckPainDoctors.insert(6);
    NeckPainDoctors.insert(5);
    NeckPainDoctors.insert(2);

    SymptomToDoctor.insert("Sore Throat", SoreThroatDoctors);
    SymptomToDoctor.insert("Neck Pain", NeckPainDoctors);





    QSet <int> AddisAbabaDoctors;
    AddisAbabaDoctors.insert(1);
    AddisAbabaDoctors.insert(4);
    AddisAbabaDoctors.insert(6);

    QSet < int > BahirDarDoctors;
    BahirDarDoctors.insert(5);
    BahirDarDoctors.insert(2);

    LocationToDoctor.insert("Addis Ababa", AddisAbabaDoctors);
    LocationToDoctor.insert("Bahir Dar", BahirDarDoctors);

    ui -> comboBox -> addItems(SymptomToDoctor.keys());
    ui -> comboBox_2 -> addItems(LocationToDoctor.keys());

  }

finddoctorlocationandsymptoms::~finddoctorlocationandsymptoms() {
  delete ui;
}

void finddoctorlocationandsymptoms::on_pushButton_clicked() {
  About * newWindow = new About();
  newWindow -> show();
}

void finddoctorlocationandsymptoms::on_pushButton_2_clicked() {
  MainWindow * newWindow = new MainWindow();
  newWindow -> show();
  close();
}

void finddoctorlocationandsymptoms::on_pushButton_3_clicked() {

  QString Location = ui -> comboBox_2 -> currentText();
  QSet < int > DoctorsFromLocation = LocationToDoctor[Location];

  QString Symptom = ui -> comboBox -> currentText();
  QSet < int > DoctorsForSymptom = SymptomToDoctor[Symptom];

  QSet < int > intersection = DoctorsForSymptom.intersect(DoctorsFromLocation);

  if (!intersection.isEmpty()) {
    DoctorInfo * newWindow = new DoctorInfo(0, doctorInfos[intersection.toList().at(0) - 1]);
    newWindow -> show();
    close();

  } else {

    QMessageBox * msgBox = new QMessageBox(0);
    msgBox -> setText("No Doctor found for the selected symptom and location");
    msgBox -> exec();
  }

}
