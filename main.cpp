#include "mainwindow.h"
#include "glviewerwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    GLViewerWindow window;
    w.show();
    window.show();

    return a.exec();
}
