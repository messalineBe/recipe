#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "qlistwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    icon = QtGui.QIcon("qrc:/../../quiche.jpg");
//    item = QtWidgets.QListWidgetItem(icon, "Hello this is a test");

//    ui->listWidget->addItems(QWidget.QListWidgetItem(QtGui.QIcon("qrc:/../../quiche.jpg"), "Hello this is a test"));
//    new QListWidgetItem(QIcon("qrc:/../../quiche.jpg"),"Recettte")

//    ui->listWidget->addItem("Recette 1");
//    ui->listWidget->addItem("Recette 2");
//    ui->listWidget->addItem("Recette 3");
//    ui->listWidget->addItem("Recette 4");
//    ui->listWidget->addItem("Recette 5");
//    ui->listWidget->addItem("Recette 6");
//    ui->listWidget->addItem("Recette 7");
//    ui->listWidget->addItem("Recette 8");
//    ui->listWidget->addItem("Recette 9");


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

