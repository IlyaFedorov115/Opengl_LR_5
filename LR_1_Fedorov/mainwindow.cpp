#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myglwidget.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    switch (e->key()) {
    case Qt::Key_W:
        ui->myGlWidget->upView();
        break;
    case Qt::Key_S:
        ui->myGlWidget->downView();
        break;
    case Qt::Key_A:
        ui->myGlWidget->leftView();
        break;
    case Qt::Key_D:
        ui->myGlWidget->rightView();
        break;
    case Qt::Key_Z:
        ui->myGlWidget->moveDistance();
        break;
    case Qt::Key_X:
        ui->myGlWidget->moveCloser();
        break;
    }
}

