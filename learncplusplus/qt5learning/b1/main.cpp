#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextStream out(stdout);
    MainWindow w;
    w.resize(400,400);
    w.setWindowTitle("simple example");
    w.show();

    return a.exec();
}
