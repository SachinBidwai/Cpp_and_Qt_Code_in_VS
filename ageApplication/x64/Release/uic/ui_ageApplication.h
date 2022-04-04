/********************************************************************************
** Form generated from reading UI file 'ageApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGEAPPLICATION_H
#define UI_AGEAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ageApplicationClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ageApplicationClass)
    {
        if (ageApplicationClass->objectName().isEmpty())
            ageApplicationClass->setObjectName(QString::fromUtf8("ageApplicationClass"));
        ageApplicationClass->resize(600, 400);
        menuBar = new QMenuBar(ageApplicationClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ageApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ageApplicationClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ageApplicationClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ageApplicationClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ageApplicationClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ageApplicationClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ageApplicationClass->setStatusBar(statusBar);

        retranslateUi(ageApplicationClass);

        QMetaObject::connectSlotsByName(ageApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *ageApplicationClass)
    {
        ageApplicationClass->setWindowTitle(QApplication::translate("ageApplicationClass", "ageApplication", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ageApplicationClass: public Ui_ageApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGEAPPLICATION_H
