#ifndef NAMWEHGIY_H
#define NAMWEHGIY_H

#include <QDialog>

namespace Ui {
class Namwehgiy;
}

class Namwehgiy : public QDialog
{
    Q_OBJECT

public:
    explicit Namwehgiy(QWidget *parent = 0);
    ~Namwehgiy();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Namwehgiy *ui;
};

#endif // NAMWEHGIY_H
