#include "accueil.hpp"
#include <QPushButton>

Accueil::Accueil(QWidget *parent)
    : QWidget(parent){
        //taille de la fenêtre
        setFixedSize(1500,800);

        //Barre de recherceh
        QLineEdit *recherche = new QLineEdit();
        recherche->setPlaceholderText("Ex: Qt");

        //pour le setGeometry(positionAbsc, positionOrdo, longueur,hauteur)

        //bouton ajouter
        buttonAddRecipe = new QPushButton("Ajouter une recette", this);
        buttonAddRecipe -> setGeometry(700, 300, 250, 70);

        //boutons dossiers
        buttonEntreeFolder = new QPushButton("Entrée", this);
        buttonEntreeFolder -> setGeometry(20, 200, 250, 70);

        buttonPlatsFolder = new QPushButton("Plats", this);
        buttonPlatsFolder -> setGeometry(300, 200, 250, 70);

        buttonDessertsFolder = new QPushButton("Desserts", this);
        buttonDessertsFolder -> setGeometry(580, 200, 250, 70);
    }