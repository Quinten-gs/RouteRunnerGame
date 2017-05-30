/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
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
    QAction *actionNew_Game_2;
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QLabel *namelabel;
    QPushButton *pushButton;
    QLineEdit *nameEdit;
    QLabel *errorNameLabel;
    QGraphicsView *graphicsView;
    QLabel *lostlabel;
    QLabel *scorelabel;
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
        actionNew_Game_2 = new QAction(GameWindow);
        actionNew_Game_2->setObjectName(QStringLiteral("actionNew_Game_2"));
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(110, 50, 411, 131));
        namelabel = new QLabel(centralwidget);
        namelabel->setObjectName(QStringLiteral("namelabel"));
        namelabel->setGeometry(QRect(150, 230, 151, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 320, 141, 31));
        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(300, 240, 191, 22));
        errorNameLabel = new QLabel(centralwidget);
        errorNameLabel->setObjectName(QStringLiteral("errorNameLabel"));
        errorNameLabel->setEnabled(true);
        errorNameLabel->setGeometry(QRect(130, 270, 411, 41));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 20, 601, 411));
        lostlabel = new QLabel(centralwidget);
        lostlabel->setObjectName(QStringLiteral("lostlabel"));
        lostlabel->setGeometry(QRect(190, 190, 311, 41));
        scorelabel = new QLabel(centralwidget);
        scorelabel->setObjectName(QStringLiteral("scorelabel"));
        scorelabel->setGeometry(QRect(498, 30, 111, 20));
        GameWindow->setCentralWidget(centralwidget);
        textBrowser->raise();
        namelabel->raise();
        pushButton->raise();
        nameEdit->raise();
        errorNameLabel->raise();
        lostlabel->raise();
        graphicsView->raise();
        scorelabel->raise();
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
        menuFile->addAction(actionNew_Game_2);
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
        actionNew_Game_2->setText(QApplication::translate("GameWindow", "New Game", 0));
        textBrowser->setHtml(QApplication::translate("GameWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">WELCOME to </span><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">ROUTE RUNNER!</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">To start a game: </span></p>\n"
"<p style="
                        "\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">	1) Enter your name below.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">	2) Click &quot;Start Game&quot;! </span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Have fun! </span></p></body></html>", 0));
        namelabel->setText(QApplication::translate("GameWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Enter name here:  </span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("GameWindow", "Start Game", 0));
        nameEdit->setText(QString());
        errorNameLabel->setText(QApplication::translate("GameWindow", "<html><head/><body><p><span style=\" font-size:18pt; color:#fd0606;\">Enter a name to play the game! </span></p></body></html>", 0));
        lostlabel->setText(QApplication::translate("GameWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">You Lost: Try again! </span></p></body></html>", 0));
        scorelabel->setText(QApplication::translate("GameWindow", "<html><head/><body><p>Score: 0</p></body></html>", 0));
        menuFile->setTitle(QApplication::translate("GameWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("GameWindow", "Help", 0));
        menuHighscores->setTitle(QApplication::translate("GameWindow", "Highscores", 0));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
