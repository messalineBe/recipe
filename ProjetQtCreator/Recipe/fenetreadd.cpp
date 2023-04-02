#include "fenetreadd.h"
#include "ui_fenetreadd.h"
#include "mainwindow.h"

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

void FenetreAdd::on_addIngredient_clicked()
{   //rentrer ingrédient
    QLineEdit *addIngredient = new QLineEdit();
    addIngredient->setPlaceholderText("Ex: g de chocolat");

    //quantité ingrédient
    QSpinBox *quantity = new QSpinBox();

    //créer layout horizontal
    QHBoxLayout *horizontalLayout = new QHBoxLayout();

    //add to layout horizontal
    horizontalLayout->addWidget(quantity);
    horizontalLayout->addWidget(addIngredient);

    ui->verticalLayout_2->addLayout(horizontalLayout);
}


void FenetreAdd::on_addStep_clicked()
{
    countStep ++;
    //numéro
    QLabel *num = new QLabel(QString::number(countStep));

    //text à editer
    QLineEdit *description = new QLineEdit();
    description->setPlaceholderText("Ex: Couper les légumes en dés");

    //créer layout horizontal
    QHBoxLayout *horizontalLayout2 = new QHBoxLayout();

    horizontalLayout2->addWidget(num);
    horizontalLayout2->addWidget(description);

    ui->verticalLayout_3->addLayout(horizontalLayout2);

//    Etape *et = new Etape();
//    et.numero = countStep;
//    et.description = description->text();

}




void FenetreAdd::on_pushButton_clicked()
{
//  il faudrait ajouter les valeurs au tableau
    close();
//    for(int i=0; i<countStep; i++){

//    }

}

