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

    //Recette 1: Plat
        Recette r1;
        r1.nomRecette = "Gratin";
        r1.tag = {"#entrée","#plat"};
        r1.nbPersonne = 8;
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

    //Recette 2: Quiche
        Recette r2;
        r2.nomRecette = "Quiche Lorraine";
        r2.tag = {"#entrée","#plat"};
        r2.nbPersonne = 6;
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

    //Liste de Recettes
        QList<Recette> listeRecette = {r1,r2};

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

