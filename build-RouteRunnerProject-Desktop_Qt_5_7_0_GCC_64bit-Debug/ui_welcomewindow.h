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

class Ui_WelcomeWindow
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

    void setupUi(QMainWindow *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QStringLiteral("WelcomeWindow"));
        WelcomeWindow->resize(640, 480);
        actionNew_Game = new QAction(WelcomeWindow);
        actionNew_Game->setObjectName(QStringLiteral("actionNew_Game"));
        actionSave_Game = new QAction(WelcomeWindow);
        actionSave_Game->setObjectName(QStringLiteral("actionSave_Game"));
        actionExit = new QAction(WelcomeWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionControls = new QAction(WelcomeWindow);
        actionControls->setObjectName(QStringLiteral("actionControls"));
        actionAbout = new QAction(WelcomeWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionShow_Highscores = new QAction(WelcomeWindow);
        actionShow_Highscores->setObjectName(QStringLiteral("actionShow_Highscores"));
        actionReset_Highscores = new QAction(WelcomeWindow);
        actionReset_Highscores->setObjectName(QStringLiteral("actionReset_Highscores"));
        centralwidget = new QWidget(WelcomeWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        WelcomeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WelcomeWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHighscores = new QMenu(menubar);
        menuHighscores->setObjectName(QStringLiteral("menuHighscores"));
        WelcomeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WelcomeWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WelcomeWindow->setStatusBar(statusbar);

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

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QApplication::translate("WelcomeWindow", "Route Runner", 0));
        actionNew_Game->setText(QApplication::translate("WelcomeWindow", "New Game", 0));
        actionSave_Game->setText(QApplication::translate("WelcomeWindow", "Save Game", 0));
        actionExit->setText(QApplication::translate("WelcomeWindow", "Exit", 0));
        actionControls->setText(QApplication::translate("WelcomeWindow", "Controls", 0));
        actionAbout->setText(QApplication::translate("WelcomeWindow", "About", 0));
        actionShow_Highscores->setText(QApplication::translate("WelcomeWindow", "Show Highscores", 0));
        actionReset_Highscores->setText(QApplication::translate("WelcomeWindow", "Reset Highscores", 0));
        menuFile->setTitle(QApplication::translate("WelcomeWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("WelcomeWindow", "Help", 0));
        menuHighscores->setTitle(QApplication::translate("WelcomeWindow", "Highscores", 0));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
