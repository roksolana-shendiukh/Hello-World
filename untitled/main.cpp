#include "mainwindow.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //qDebug() << "Hello Sofia";
    qDebug() << "Message from Maria";
    qDebug() << "Message from Sofiya";
    return a.exec();
}
