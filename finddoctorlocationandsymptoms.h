#ifndef FINDDOCTORLOCATIONANDSYMPTOMS_H
#define FINDDOCTORLOCATIONANDSYMPTOMS_H

#include <QDialog>

namespace Ui {
class finddoctorlocationandsymptoms;
}

class finddoctorlocationandsymptoms : public QDialog
{
    Q_OBJECT

public:
    explicit finddoctorlocationandsymptoms(QWidget *parent = 0);
    ~finddoctorlocationandsymptoms();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::finddoctorlocationandsymptoms *ui;
};

#endif // FINDDOCTORLOCATIONANDSYMPTOMS_H
