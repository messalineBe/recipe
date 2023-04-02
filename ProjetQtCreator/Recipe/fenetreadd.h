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

private:
    Ui::FenetreAdd *ui;
};

#endif // FENETREADD_H
