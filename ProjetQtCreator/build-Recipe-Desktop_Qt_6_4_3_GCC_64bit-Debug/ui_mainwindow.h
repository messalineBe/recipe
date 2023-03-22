/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonEntreeFolder;
    QPushButton *buttonPlatsFolder;
    QPushButton *buttonDessertsFolder;
    QPushButton *buttonAddRecipe;
    QLineEdit *recherche;
    QLabel *labelRech;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        buttonEntreeFolder = new QPushButton(centralwidget);
        buttonEntreeFolder->setObjectName("buttonEntreeFolder");
        buttonEntreeFolder->setGeometry(QRect(30, 100, 150, 35));
        buttonEntreeFolder->setMinimumSize(QSize(150, 35));
        buttonPlatsFolder = new QPushButton(centralwidget);
        buttonPlatsFolder->setObjectName("buttonPlatsFolder");
        buttonPlatsFolder->setGeometry(QRect(210, 100, 150, 35));
        buttonPlatsFolder->setMinimumSize(QSize(150, 35));
        buttonDessertsFolder = new QPushButton(centralwidget);
        buttonDessertsFolder->setObjectName("buttonDessertsFolder");
        buttonDessertsFolder->setGeometry(QRect(380, 100, 150, 35));
        buttonDessertsFolder->setMinimumSize(QSize(150, 35));
        QPalette palette;
        QBrush brush(QColor(98, 160, 234, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(48, 140, 198, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        QBrush brush2(QColor(145, 145, 145, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        buttonDessertsFolder->setPalette(palette);
        buttonAddRecipe = new QPushButton(centralwidget);
        buttonAddRecipe->setObjectName("buttonAddRecipe");
        buttonAddRecipe->setGeometry(QRect(320, 180, 150, 35));
        buttonAddRecipe->setMinimumSize(QSize(150, 35));
        recherche = new QLineEdit(centralwidget);
        recherche->setObjectName("recherche");
        recherche->setGeometry(QRect(130, 20, 500, 35));
        recherche->setMinimumSize(QSize(500, 35));
        labelRech = new QLabel(centralwidget);
        labelRech->setObjectName("labelRech");
        labelRech->setGeometry(QRect(30, 30, 100, 17));
        labelRech->setMinimumSize(QSize(100, 0));
        listWidget = new QListWidget(centralwidget);
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font1);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font1);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFont(font1);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setFont(font1);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setFont(font1);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setFont(font1);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setFont(font1);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget);
        __qlistwidgetitem8->setFont(font1);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget);
        __qlistwidgetitem9->setFont(font1);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 220, 751, 271));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonEntreeFolder->setText(QCoreApplication::translate("MainWindow", "Entr\303\251e", nullptr));
        buttonPlatsFolder->setText(QCoreApplication::translate("MainWindow", "Plats", nullptr));
        buttonDessertsFolder->setText(QCoreApplication::translate("MainWindow", "Desserts", nullptr));
        buttonAddRecipe->setText(QCoreApplication::translate("MainWindow", "Ajouter une recette", nullptr));
        labelRech->setText(QCoreApplication::translate("MainWindow", "Recherche :", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Recette 1 \n"
"	Entr\303\251e", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Recette 2", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Recette 3", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Recette 4", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Recette 5", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Recette 6", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "Recette 7", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainWindow", "Recette 8", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("MainWindow", "Recette 9", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("MainWindow", "Recette 10", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
