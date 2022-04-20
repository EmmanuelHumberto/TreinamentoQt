/********************************************************************************
** Form generated from reading UI file 'menubarras.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUBARRAS_H
#define UI_MENUBARRAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuBarras
{
public:
    QAction *actionRemove;
    QAction *actionMudar;
    QAction *actionSair;
    QAction *actionSalvar;
    QAction *actionSobre_esse_programa;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuSobre_esse_Programa;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MenuBarras)
    {
        if (MenuBarras->objectName().isEmpty())
            MenuBarras->setObjectName(QString::fromUtf8("MenuBarras"));
        MenuBarras->resize(800, 600);
        actionRemove = new QAction(MenuBarras);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/icons/Close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove->setIcon(icon);
        actionMudar = new QAction(MenuBarras);
        actionMudar->setObjectName(QString::fromUtf8("actionMudar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/icons/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMudar->setIcon(icon1);
        actionSair = new QAction(MenuBarras);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("assets/icons/download.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon2);
        actionSalvar = new QAction(MenuBarras);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/icons/Load.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon3);
        actionSobre_esse_programa = new QAction(MenuBarras);
        actionSobre_esse_programa->setObjectName(QString::fromUtf8("actionSobre_esse_programa"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("assets/icons/download (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre_esse_programa->setIcon(icon4);
        centralwidget = new QWidget(MenuBarras);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MenuBarras->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuBarras);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuSobre_esse_Programa = new QMenu(menubar);
        menuSobre_esse_Programa->setObjectName(QString::fromUtf8("menuSobre_esse_Programa"));
        MenuBarras->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuBarras);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MenuBarras->setStatusBar(statusbar);
        toolBar = new QToolBar(MenuBarras);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        MenuBarras->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuSobre_esse_Programa->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionRemove);
        menuArquivo->addAction(actionSair);
        menuEditar->addAction(actionMudar);
        menuSobre_esse_Programa->addAction(actionSobre_esse_programa);
        toolBar->addAction(actionMudar);
        toolBar->addSeparator();
        toolBar->addAction(actionRemove);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionSair);

        retranslateUi(MenuBarras);

        QMetaObject::connectSlotsByName(MenuBarras);
    } // setupUi

    void retranslateUi(QMainWindow *MenuBarras)
    {
        MenuBarras->setWindowTitle(QCoreApplication::translate("MenuBarras", "MenuBarras", nullptr));
        actionRemove->setText(QCoreApplication::translate("MenuBarras", "Remove", nullptr));
        actionMudar->setText(QCoreApplication::translate("MenuBarras", "Adicionar", nullptr));
        actionSair->setText(QCoreApplication::translate("MenuBarras", "Sair", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MenuBarras", "Salvar", nullptr));
        actionSobre_esse_programa->setText(QCoreApplication::translate("MenuBarras", "Sobre esse programa", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MenuBarras", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MenuBarras", "Editar", nullptr));
        menuSobre_esse_Programa->setTitle(QCoreApplication::translate("MenuBarras", "Sobre", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MenuBarras", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuBarras: public Ui_MenuBarras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUBARRAS_H
