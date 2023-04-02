#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "qlistwidget.h"
#include <QList>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Ingredients
        Ingredient lardon1;
        lardon1.nomIngredient =" g de ladons";
        lardon1.quantite = 800;

        Ingredient pommeDeTerres;
        pommeDeTerres.nomIngredient =" g de pomme de terres";
        pommeDeTerres.quantite = 2000;

        Ingredient creme;
        creme.nomIngredient =" cl de crème épaisse";
        creme.quantite = 80;

        Ingredient chocolat;
        creme.nomIngredient =" g de chocolat";
        creme.quantite = 200;

        Ingredient beurre;
        creme.nomIngredient =" g de beurre";
        creme.quantite = 100;

        Ingredient farine;
        creme.nomIngredient =" g de farine";
        creme.quantite = 50;

        Ingredient sucre;
        creme.nomIngredient =" g de sucre";
        creme.quantite = 100;

        Ingredient oeuf;
        creme.nomIngredient =" oeufs";
        creme.quantite = 3;

        Ingredient oeuf2;
        creme.nomIngredient =" oeuf";
        creme.quantite = 1;

        Ingredient gruyere;
        gruyere.nomIngredient ="g de gruyère";
        gruyere.quantite = 200;

        Ingredient oignon;
        oignon.nomIngredient =" oignon";
        oignon.quantite = 1;

        Ingredient butternut;
        butternut.nomIngredient ="butternut";
        butternut.quantite = 1;

        Ingredient cannelle;
        cannelle.nomIngredient =" pincée de cannelle";
        cannelle.quantite = 1;

//        Ingredient oignon;

    //Recette 1: Gratin (Plat)
        Recette r1;
        r1.nomRecette = "Gratin";
        r1.tag = {"#plat"};
        r1.nbPersonne = 8;
        r1.ingredients = {pommeDeTerres, lardon1, creme};
        Etape e1r1;
        e1r1.numero = 1;
        e1r1.description = "éplucher les pommes de terres";
        Etape e2r1;
        e2r1.numero = 2;
        e2r1.description = "Couper les pommes de terres";
        Etape e3r1;
        e3r1.numero = 3;
        e3r1.description = "Faire boullir de l'eau et faire cuire les pommes de terres pendant 10min";
        Etape e4r1;
        e4r1.numero = 4;
        e4r1.description = "Dans un plat à gratin disposer les pommes de terres, ajouter les lardons la crème et le fromage";
        r1.etape = {e1r1, e2r1, e3r1, e4r1};

    //Recette 2: Quiche (plat)
        Recette r2;
        r2.nomRecette = "Quiche Lorraine";
        r2.tag = {"#entrée","#plat"};
        r2.nbPersonne = 6;
        r2.ingredients = {lardon1, oeuf, creme, gruyere};
        Etape e1r2;
        e1r2.numero = 1;
        e1r2.description = "Dans un saladier mélanger les oeufs, la crème, les lardons et les gruyère ";
        Etape e2r2;
        e2r2.numero = 2;
        e2r2.description = "Etaler la pate briser, puis la mettre dans un moule à tarte";
        Etape e3r2;
        e3r2.numero = 3;
        e3r2.description = "Verser la préparation dans le moule, et ajouter du gruyère sur le dessus";
        Etape e4r2;
        e4r2.numero = 4;
        e4r2.description = "Faire cuire pendant 30 min au four à 190°C.";
        r2.etape = {e1r2, e2r2, e3r2, e4r2};

    //Recette 3 : Gateau (desssert)
        Recette r3;
        r3.nomRecette = "Gateau chocolat";
        r3.tag = {"#dessert"};
        r3.nbPersonne = 6;
        r3.ingredients = {chocolat, beurre, farine, sucre, oeuf};
        Etape e1r3;
        e1r3.numero = 1;
        e1r3.description = "Préchauffez votre four à 180°C (thermostat 6). Dans une casserole, faites fondre le chocolat et le beurre coupé en morceaux à feu très doux ";
        Etape e2r3;
        e2r3.numero = 2;
        e2r3.description = "Dans un saladier, ajoutez le sucre, les oeufs, la farine. Mélangez.";
        Etape e3r3;
        e3r3.numero = 3;
        e3r3.description = "Ajoutez le mélange chocolat/beurre. Mélangez bien";
        Etape e4r3;
        e4r3.numero = 4;
        e4r3.description = "Beurrez à l'aide d'une feuille de papier essuie-tout et farinez votre moule puis y versez la pâte à gâteau.";
        Etape e5r3;
        e5r3.numero = 5;
        e5r3.description = "Faites cuire au four environ 20 minutes.";
        Etape e6r3;
        e6r3.numero = 6;
        e6r3.description = "A la sortie du four le gâteau ne paraît pas assez cuit. C'est normal, laissez-le refroidir puis démoulez- le.";
        r3.etape = {e1r3, e2r3, e3r3, e4r3, e5r3, e6r3};

    //Recette 4: oeuf à la coque (entree)
        Recette r4;
        r4.nomRecette = "Oeuf à la coque";
        r4.tag = {"#entree"};
        r4.nbPersonne = 1;
        r4.ingredients = {oeuf2};
        Etape e1r4;
        e1r4.numero = 1;
        e1r4.description = "Mettre de l'eau à chauffer Lorsque l'eau bout, plonger les oeufs dedans avec une cuillère et compter 3 minutes de cuisson avant de les sortir de l'eau";
        Etape e2r4;
        e2r4.numero = 2;
        e2r4.description = "Ajoutez un filet de vinaigre ou de jus de citron dans l'eau de cuisson afin d'éviter que l'oeuf se dilue dans l'eau si d'aventure la coquille se fêle.";
        Etape e3r4;
        e3r4.numero = 3;
        e3r4.description = "Si vous ne les dégustez pas immédiatement, conservez-les dans une eau à 60°C";
        Etape e4r4;
        e4r4.numero = 4;
        e4r4.description = "Accompagnez de mouillettes de pain ou de gruyère, puis salez légèrement, succès garanti !";
        r4.etape = {e1r4, e2r4, e3r4, e4r4};

    //Recette 5 : soupe butternut
        Recette r5;
        r5.nomRecette = "Oeuf à la coque";
        r5.tag = {"#entree"};
        r5.nbPersonne = 4;
        r5.ingredients = {oignon, butternut};
        Etape e1r5;
        e1r5.numero = 1;
        e1r5.description = "Mettre de l'eau à chauffer Lorsque l'eau bout, plonger les oeufs dedans avec une cuillère et compter 3 minutes de cuisson avant de les sortir de l'eau";
        Etape e2r5;
        e2r5.numero = 2;
        e2r5.description = "Ajoutez un filet de vinaigre ou de jus de citron dans l'eau de cuisson afin d'éviter que l'oeuf se dilue dans l'eau si d'aventure la coquille se fêle.";
        Etape e3r5;
        e3r5.numero = 3;
        e3r5.description = "Si vous ne les dégustez pas immédiatement, conservez-les dans une eau à 60°C";
        Etape e4r5;
        e4r5.numero = 4;
        e4r5.description = "Accompagnez de mouillettes de pain ou de gruyère, puis salez légèrement, succès garanti !";
        r5.etape = {e1r5, e2r5, e3r5, e4r5};

    //Liste de Recettes
        QList<Recette> listeRecette = {r1,r2,r3,r4, r5};

    //Tableau
        //Dimension tableau
        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(10);
        //Bordure tableau
        ui->tableWidget->horizontalHeader()->setVisible(false);
        ui->tableWidget->verticalHeader()->setVisible(false);
        //Taille colonne
        ui->tableWidget->setColumnWidth(0, 150);
        ui->tableWidget->setColumnWidth(1, 150);
        ui->tableWidget->setColumnWidth(2, 150);
        ui->tableWidget->setColumnWidth(3, 150);



        int i=0;
        Recette recette;
//        QPushButton *buttonVoirRecette = new QPushButton ( "Voir la recette" );
        foreach (recette, listeRecette) {
            QString tag = recette.tag[0];
            if(recette.tag.length()==2){
                tag+=" "+recette.tag[1];
            }
            if(recette.tag.length()==3){
                tag+=" "+recette.tag[2];
            }
            ui->tableWidget->setCellWidget(i, 0, new QLabel(recette.nomRecette));
            ui->tableWidget->setCellWidget(i, 1, new QLabel(tag));
//            ui->tableWidget->setCellWidget(i, 2, new QLabel("nombre de persones: "+QString::number(recette.nbPersonne)));
//            ui->tableWidget->setCellWidget(i, 3, buttonVoirRecette );
            ui->tableWidget->setCellWidget(i, 3, new QPushButton ( "Voir la recette" ) );
            i++;
        }


//TEST IMAGE
//    icon = QtGui.QIcon("qrc:/../../quiche.jpg");
//    item = QtWidgets.QListWidgetItem(icon, "Hello this is a test");
//    ui->listWidget->addItems(QWidget.QListWidgetItem(QtGui.QIcon("qrc:/../../quiche.jpg"), "Hello this is a test"));
//    new QListWidgetItem(QIcon("qrc:/../../quiche.jpg"),"Recettte")


//    new QListWidgetItem(r1, listWidget);
//    test = QListWidgetItem(r1);
//    ui->listWidget->addItem(r1.nomRecette);
//    ui->listWidget->addItem(r1.nomRecette);


//    QListWidgetItem *test = new QListWidgetItem();
//    ui->listWidget->addItem(test);
//    ui->listWidget->setItemWidget(test, r1);
//    QListWidgetItem *test = new QListWidgetItem(r1);

//    ui->listWidget->addItem(test);

//    widget = new QWidget;
//        widget ->setLayout(new QHBoxLayout());
//        QLabel *nomRecette = new QLabel ( r1.nomRecette);
//    //  QLabel *tagRecette = new QLabel ( r1.tag);
//        QPushButton *buttonVoirRecette = new QPushButton ( "Voir la recette" );

//    ui->listWidget->setItemWidget ( test, widget );

//QString::FromStdString pour convertir
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buttonEntreeFolder_clicked()
{
   QMainWindow *entreeWindow = new QMainWindow();
   entreeWindow -> show();
   qInfo()<<"salut";
}

void MainWindow::on_buttonAddRecipe_clicked()
{
   //Créer une fenetre test1
//   QMainWindow *addWindow = new QMainWindow();
//   addWindow->setFixedSize(500, 500);
//   addWindow -> show();
//   qInfo()<<"test";


//   QLineEdit *addRecette = new QLineEdit();
//   addRecette->setPlaceholderText("Ex: Gratin chocolat");
//   QLabel *nomRecette = new QLabel ("Nom de la recette") ;

//   addWindow->setAttribute(addRecette);

   fenetreAdd = new FenetreAdd();
   fenetreAdd->show();


}

