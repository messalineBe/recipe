#include "fenetreadd.h"
#include "ui_fenetreadd.h"

FenetreAdd::FenetreAdd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenetreAdd)
{
    ui->setupUi(this);
}

FenetreAdd::~FenetreAdd()
{
    delete ui;
}
