#ifndef FENETREADD_H
#define FENETREADD_H

#include <QMainWindow>

namespace Ui {
class FenetreAdd;
}

class FenetreAdd : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetreAdd(QWidget *parent = nullptr);
    ~FenetreAdd();
    int count=0;

private slots:
    void on_addIngredient_clicked();

    void on_addStep_clicked();

    void on_pushButton_clicked();

private:
    Ui::FenetreAdd *ui;
};

#endif // FENETREADD_H
