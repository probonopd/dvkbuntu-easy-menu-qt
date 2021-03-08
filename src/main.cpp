#include "mainwindow.h"
#include <QApplication>
#include <QWebEngineView>
#include <QWebEngineSettings>
#include <QtWebEngineWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowState(Qt::WindowMaximized);
    w.showFullScreen();
    //w.show();

    return a.exec();
}
