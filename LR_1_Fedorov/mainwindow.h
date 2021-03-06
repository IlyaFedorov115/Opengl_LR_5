#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QSlider>

#include <QEvent>
#include <QKeyEvent>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //lr 5
    void keyPressEvent(QKeyEvent *e);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
