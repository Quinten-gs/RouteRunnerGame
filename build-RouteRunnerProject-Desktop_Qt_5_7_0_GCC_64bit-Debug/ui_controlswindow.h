/********************************************************************************
** Form generated from reading UI file 'controlswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLSWINDOW_H
#define UI_CONTROLSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlsWindow
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *ControlsWindow)
    {
        if (ControlsWindow->objectName().isEmpty())
            ControlsWindow->setObjectName(QStringLiteral("ControlsWindow"));
        ControlsWindow->resize(640, 480);
        tableWidget = new QTableWidget(ControlsWindow);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem17);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(130, 60, 281, 261));
        label = new QLabel(ControlsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 30, 59, 14));
        pushButton = new QPushButton(ControlsWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 60, 161, 22));

        retranslateUi(ControlsWindow);

        QMetaObject::connectSlotsByName(ControlsWindow);
    } // setupUi

    void retranslateUi(QDialog *ControlsWindow)
    {
        ControlsWindow->setWindowTitle(QApplication::translate("ControlsWindow", "Controls", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ControlsWindow", "Effect", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ControlsWindow", "Key", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("ControlsWindow", "Movement", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ControlsWindow", "UI", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("ControlsWindow", "Jump", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 1);
        ___qtablewidgetitem5->setText(QApplication::translate("ControlsWindow", "Up ", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("ControlsWindow", "Move Left", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("ControlsWindow", "Left", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(2, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("ControlsWindow", "Move Right", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(2, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("ControlsWindow", "Right", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(3, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("ControlsWindow", "Reset Game", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(3, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("ControlsWindow", "r", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("ControlsWindow", "Controls", 0));
        pushButton->setText(QApplication::translate("ControlsWindow", "Close Controls", 0));
    } // retranslateUi

};

namespace Ui {
    class ControlsWindow: public Ui_ControlsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSWINDOW_H
