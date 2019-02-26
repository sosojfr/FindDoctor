#include "about.h"
#include "ui_about.h"
#include"qmovie.h"
About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    QMovie *movie = new QMovie(":/AppFiles/Resources/batman.gif");
    if (movie->isValid())
    {
        QLabel *processLabel = ui->label_2;
        processLabel->setMovie(movie);
        movie->start();    }

}

About::~About()
{
    delete ui;
}
