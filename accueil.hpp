// #ifndef FENETRE_HPP
// #define FENETRE_HPP
#include <QWidget>

class QPushButton;
class QLineEdit;
class QLabel;
class Accueil : public QWidget{
    public:
        explicit Accueil(QWidget *parent = nullptr);
    private:
        QPushButton * buttonAddRecipe;
        QPushButton * buttonEntreeFolder;
        QPushButton * buttonPlatsFolder;
        QPushButton * buttonDessertsFolder;
        QLineEdit * recherche;
        QLabel * labelRech;
};
// #endif