/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QAction *actionNew_Game;
    QAction *actionSave_Game;
    QAction *actionExit;
    QAction *actionControls;
    QAction *actionAbout;
    QAction *actionShow_Highscores;
    QAction *actionReset_Highscores;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuHighscores;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(640, 480);
        actionNew_Game = new QAction(GameWindow);
        actionNew_Game->setObjectName(QStringLiteral("actionNew_Game"));
        actionSave_Game = new QAction(GameWindow);
        actionSave_Game->setObjectName(QStringLiteral("actionSave_Game"));
        actionExit = new QAction(GameWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionControls = new QAction(GameWindow);
        actionControls->setObjectName(QStringLiteral("actionControls"));
        actionAbout = new QAction(GameWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionShow_Highscores = new QAction(GameWindow);
        actionShow_Highscores->setObjectName(QStringLiteral("actionShow_Highscores"));
        actionReset_Highscores = new QAction(GameWindow);
        actionReset_Highscores->setObjectName(QStringLiteral("actionReset_Highscores"));
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        GameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHighscores = new QMenu(menubar);
        menuHighscores->setObjectName(QStringLiteral("menuHighscores"));
        GameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GameWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GameWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHighscores->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Game);
        menuFile->addAction(actionSave_Game);
        menuFile->addAction(actionExit);
        menuHelp->addSeparator();
        menuHelp->addAction(actionControls);
        menuHelp->addAction(actionAbout);
        menuHighscores->addSeparator();
        menuHighscores->addAction(actionShow_Highscores);
        menuHighscores->addAction(actionReset_Highscores);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "Route Runner", 0));
        actionNew_Game->setText(QApplication::translate("GameWindow", "New Game", 0));
        actionSave_Game->setText(QApplication::translate("GameWindow", "Save Game", 0));
        actionExit->setText(QApplication::translate("GameWindow", "Exit", 0));
        actionControls->setText(QApplication::translate("GameWindow", "Controls", 0));
        actionAbout->setText(QApplication::translate("GameWindow", "About", 0));
        actionShow_Highscores->setText(QApplication::translate("GameWindow", "Show Highscores", 0));
        actionReset_Highscores->setText(QApplication::translate("GameWindow", "Reset Highscores", 0));
        menuFile->setTitle(QApplication::translate("GameWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("GameWindow", "Help", 0));
        menuHighscores->setTitle(QApplication::translate("GameWindow", "Highscores", 0));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
