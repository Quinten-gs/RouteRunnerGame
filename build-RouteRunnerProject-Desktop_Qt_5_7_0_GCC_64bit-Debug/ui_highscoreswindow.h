/********************************************************************************
** Form generated from reading UI file 'highscoreswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHSCORESWINDOW_H
#define UI_HIGHSCORESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HighscoresWindow
{
public:
    QListWidget *listWidget;
    QPushButton *closeButton;
    QLabel *label;

    void setupUi(QDialog *HighscoresWindow)
    {
        if (HighscoresWindow->objectName().isEmpty())
            HighscoresWindow->setObjectName(QStringLiteral("HighscoresWindow"));
        HighscoresWindow->resize(480, 640);
        listWidget = new QListWidget(HighscoresWindow);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 60, 231, 561));
        closeButton = new QPushButton(HighscoresWindow);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(310, 60, 111, 31));
        label = new QLabel(HighscoresWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 35, 131, 21));

        retranslateUi(HighscoresWindow);

        QMetaObject::connectSlotsByName(HighscoresWindow);
    } // setupUi

    void retranslateUi(QDialog *HighscoresWindow)
    {
        HighscoresWindow->setWindowTitle(QApplication::translate("HighscoresWindow", "Dialog", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("HighscoresWindow", "Name             Score ", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("HighscoresWindow", "Quinten          10", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        closeButton->setText(QApplication::translate("HighscoresWindow", "Close", 0));
        label->setText(QApplication::translate("HighscoresWindow", "Highscores", 0));
    } // retranslateUi

};

namespace Ui {
    class HighscoresWindow: public Ui_HighscoresWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHSCORESWINDOW_H
