/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "myglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    MyGlWidget *myGlWidget;
    QSlider *xRotSlider;
    QSlider *yRotSlider;
    QSlider *zRotSlider;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(707, 813);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        myGlWidget = new MyGlWidget(centralWidget);
        myGlWidget->setObjectName(QStringLiteral("myGlWidget"));
        myGlWidget->setGeometry(QRect(45, 10, 601, 601));
        xRotSlider = new QSlider(centralWidget);
        xRotSlider->setObjectName(QStringLiteral("xRotSlider"));
        xRotSlider->setGeometry(QRect(120, 640, 321, 16));
        xRotSlider->setMaximum(360);
        xRotSlider->setSingleStep(16);
        xRotSlider->setPageStep(15);
        xRotSlider->setOrientation(Qt::Horizontal);
        xRotSlider->setTickPosition(QSlider::TicksAbove);
        xRotSlider->setTickInterval(15);
        yRotSlider = new QSlider(centralWidget);
        yRotSlider->setObjectName(QStringLiteral("yRotSlider"));
        yRotSlider->setGeometry(QRect(120, 670, 321, 16));
        yRotSlider->setMaximum(360);
        yRotSlider->setSingleStep(16);
        yRotSlider->setPageStep(15);
        yRotSlider->setOrientation(Qt::Horizontal);
        yRotSlider->setTickPosition(QSlider::TicksAbove);
        yRotSlider->setTickInterval(15);
        zRotSlider = new QSlider(centralWidget);
        zRotSlider->setObjectName(QStringLiteral("zRotSlider"));
        zRotSlider->setGeometry(QRect(120, 700, 321, 16));
        zRotSlider->setMaximum(360);
        zRotSlider->setSingleStep(16);
        zRotSlider->setPageStep(15);
        zRotSlider->setOrientation(Qt::Horizontal);
        zRotSlider->setTickPosition(QSlider::TicksAbove);
        zRotSlider->setTickInterval(15);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 640, 41, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 670, 41, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 700, 41, 17));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(480, 640, 151, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 707, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(xRotSlider, SIGNAL(valueChanged(int)), myGlWidget, SLOT(setXRotation(int)));
        QObject::connect(yRotSlider, SIGNAL(valueChanged(int)), myGlWidget, SLOT(setYRotation(int)));
        QObject::connect(zRotSlider, SIGNAL(valueChanged(int)), myGlWidget, SLOT(setZRotation(int)));
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), myGlWidget, SLOT(selectPrimitive(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "xRot", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "yRot", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "zRot", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "GL_POINTS", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_LINES", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_LINE_STRIP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_LINE_LOOP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_TRIANGLES", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_TRIANGLE_STRIP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_TRIANGLE_FAN", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_QUADS", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_QUAD_STRIP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "GL_POLYGON", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
