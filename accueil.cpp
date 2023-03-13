#include "accueil.hpp"
#include <QPushButton>

Accueil::Accueil(QWidget *parent)
    : QWidget(parent){
        //taille de la fenêtre
        setFixedSize(1500,800);
        m_button = new QPushButton("Hello", this);
        m_button -> setGeometry(10, 10, 300, 300);
    }