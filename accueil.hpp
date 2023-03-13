// #ifndef FENETRE_HPP
// #define FENETRE_HPP
#include <QWidget>

class QPushButton;
class Accueil : public QWidget{
    public:
        explicit Accueil(QWidget *parent = nullptr);
    private:
        QPushButton * m_button;
};
// #endif