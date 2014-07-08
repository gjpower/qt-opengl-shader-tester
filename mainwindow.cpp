#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "glviewerwidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->glWidget = new GLViewerWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}
