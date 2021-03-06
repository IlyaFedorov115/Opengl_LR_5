/********************************************************************************
** Form generated from reading UI file 'myglwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYGLWIDGET_H
#define UI_MYGLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myGlWidget
{
public:

    void setupUi(QWidget *myGlWidget)
    {
        if (myGlWidget->objectName().isEmpty())
            myGlWidget->setObjectName(QStringLiteral("myGlWidget"));
        myGlWidget->resize(400, 324);

        retranslateUi(myGlWidget);

        QMetaObject::connectSlotsByName(myGlWidget);
    } // setupUi

    void retranslateUi(QWidget *myGlWidget)
    {
        myGlWidget->setWindowTitle(QApplication::translate("myGlWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myGlWidget: public Ui_myGlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYGLWIDGET_H
