/********************************************************************************
** Form generated from reading UI file 'exitwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITWINDOW_H
#define UI_EXITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ExitWindow
{
public:
    QPushButton *cancelButton;
    QPushButton *exitButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ExitWindow)
    {
        if (ExitWindow->objectName().isEmpty())
            ExitWindow->setObjectName(QStringLiteral("ExitWindow"));
        ExitWindow->resize(320, 239);
        cancelButton = new QPushButton(ExitWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(220, 200, 80, 22));
        exitButton = new QPushButton(ExitWindow);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(130, 200, 80, 22));
        textBrowser = new QTextBrowser(ExitWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 80, 261, 41));

        retranslateUi(ExitWindow);

        QMetaObject::connectSlotsByName(ExitWindow);
    } // setupUi

    void retranslateUi(QDialog *ExitWindow)
    {
        ExitWindow->setWindowTitle(QApplication::translate("ExitWindow", "Exit?", 0));
        cancelButton->setText(QApplication::translate("ExitWindow", "Cancel", 0));
        exitButton->setText(QApplication::translate("ExitWindow", "Exit", 0));
        textBrowser->setHtml(QApplication::translate("ExitWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Are you sure you want to exit? All progress will be lost. </span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ExitWindow: public Ui_ExitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITWINDOW_H
