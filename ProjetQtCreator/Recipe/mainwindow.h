#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <QMainWindow>
#include "fenetreadd.h"
#include <QLayoutItem>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    FenetreAdd * fenetreAdd;
    QPushButton *buttonVoirRecette;
private slots:
    void on_buttonEntreeFolder_clicked();
    void on_buttonAddRecipe_clicked();
//    void on_buttonVoirRecette_clicked();

private:
    Ui::MainWindow *ui;
};

struct Etape{
    int numero;
    QString description;
    //minuteur
};

struct Ingredient{
    int quantite;
    QString nomIngredient;
};

struct Recette{
    QString nomRecette;
    QList<QString> tag;
    QList<Etape> etape;
    QList<Ingredient> ingredients;
    int nbPersonne;
    //image
};
#endif // MAINWINDOW_H
