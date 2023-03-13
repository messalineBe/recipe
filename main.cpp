#include <QApplication>
#include "accueil.hpp"

int main (int argc, char * argv[]){
    QApplication app(argc, argv);
    Accueil window;
    window.show();
    return app.exec();
}