#ifndef MEDICALDICTIONARY_H
#define MEDICALDICTIONARY_H

#include <QDialog>

namespace Ui {
class MedicalDictionary;
}

class MedicalDictionary : public QDialog
{
    Q_OBJECT

public:
    explicit MedicalDictionary(QWidget *parent = 0);
    ~MedicalDictionary();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MedicalDictionary *ui;
};

#endif // MEDICALDICTIONARY_H
