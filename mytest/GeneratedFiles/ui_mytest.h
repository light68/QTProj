/********************************************************************************
** Form generated from reading UI file 'mytest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTEST_H
#define UI_MYTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mytestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mytestClass)
    {
        if (mytestClass->objectName().isEmpty())
            mytestClass->setObjectName(QStringLiteral("mytestClass"));
        mytestClass->resize(600, 400);
        menuBar = new QMenuBar(mytestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        mytestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mytestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mytestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(mytestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mytestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(mytestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mytestClass->setStatusBar(statusBar);

        retranslateUi(mytestClass);

        QMetaObject::connectSlotsByName(mytestClass);
    } // setupUi

    void retranslateUi(QMainWindow *mytestClass)
    {
        mytestClass->setWindowTitle(QApplication::translate("mytestClass", "mytest", 0));
    } // retranslateUi

};

namespace Ui {
    class mytestClass: public Ui_mytestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTEST_H
