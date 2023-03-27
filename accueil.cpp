#include "accueil.hpp"
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

Accueil::Accueil(QWidget *parent)
    : QWidget(parent){
        //taille de la fenêtre
        setFixedSize(1500,800);

        //pour le setGeometry(positionAbsc, positionOrdo, longueur,hauteur)

        //Label pour barre de recherche
        QLabel * labelRech = new QLabel("Recherche :", this);
        labelRech->setGeometry(40,70,100,30);

        //Barre de recherche
        QLineEdit * recherche = new QLineEdit(this);
        recherche->setPlaceholderText("Ex: Gratin");
        recherche -> setGeometry(130, 70, 1000, 30);

        //bouton ajouter
        buttonAddRecipe = new QPushButton("Ajouter une recette", this);
        buttonAddRecipe -> setGeometry(700, 300, 250, 70);

        //boutons dossiers
        buttonEntreeFolder = new QPushButton("Entrée", this);
        buttonEntreeFolder -> setGeometry(40, 200, 250, 70);

        buttonPlatsFolder = new QPushButton("Plats", this);
        buttonPlatsFolder -> setGeometry(300, 200, 250, 70);

        buttonDessertsFolder = new QPushButton("Desserts", this);
        buttonDessertsFolder -> setGeometry(580, 200, 250, 70);
    }