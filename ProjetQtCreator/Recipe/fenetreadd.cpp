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

void FenetreAdd::on_addIngredient_clicked()
{   //rentrer ingrédient
    QLineEdit *addIngredient = new QLineEdit();
    addIngredient->setPlaceholderText("Ex: g de chocolat");

    //quantité ingrédient
    QSpinBox *quantity = new QSpinBox();

    //btn
//    QPushButton *validerIngredient = new QPushButton ( "Valider" );

    //créer layout horizontal
    QHBoxLayout *horizontalLayout = new QHBoxLayout();

    //add to layout horizontal
    horizontalLayout->addWidget(quantity);
    horizontalLayout->addWidget(addIngredient);

    ui->verticalLayout_2->addLayout(horizontalLayout);
}


void FenetreAdd::on_addStep_clicked()
{
    count ++;
    //numéro
    QLabel *num = new QLabel(QString::number(count));

    //text à editer
    QLineEdit *description = new QLineEdit();
    description->setPlaceholderText("Ex: Couper les légumes en dés");

    //créer layout horizontal
    QHBoxLayout *horizontalLayout2 = new QHBoxLayout();

    horizontalLayout2->addWidget(num);
    horizontalLayout2->addWidget(description);

    ui->verticalLayout_3->addLayout(horizontalLayout2);

}




void FenetreAdd::on_pushButton_clicked()
{
//    //Ingredients
//        Ingredient lardon1;
//        lardon1.nomIngredient =" g de ladons";
//        lardon1.quantite = 800;

//        //Recette 1: Gratin (Plat)
//            Recette r1;
//            r1.nomRecette = "Gratin";
//            r1.tag = {"#plat"};
//            r1.nbPersonne = 8;
//            r1.ingredients = {pommeDeTerres, lardon1, creme};
//            Etape e1r1;
//            e1r1.numero = 1;
//            e1r1.description = "éplucher les pommes de terres";
//            Etape e2r1;
//            e2r1.numero = 2;
//            e2r1.description = "Couper les pommes de terres";
//            Etape e3r1;
//            e3r1.numero = 3;
//            e3r1.description = "Faire boullir de l'eau et faire cuire les pommes de terres pendant 10min";
//            Etape e4r1;
//            e4r1.numero = 4;
//            e4r1.description = "Dans un plat à gratin disposer les pommes de terres, ajouter les lardons la crème et le fromage";
//            r1.etape = {e1r1, e2r1, e3r1, e4r1};
}

