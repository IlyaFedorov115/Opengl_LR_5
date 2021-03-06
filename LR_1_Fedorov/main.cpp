#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;

    //window.resize(1000, 600);
    window.setWindowTitle("LR_1_Fedorov");
    window.move(500, 200);
    window.setToolTip("Lr1"); // устанавливаем всплывающую подсказку для виджета
    window.show();

    return app.exec();
}
