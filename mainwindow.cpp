#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextStream>

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

void MainWindow::loadVertexShader() {

}

void MainWindow::loadFragmentShader() {
  ui->plainTextEdit->insertPlainText(QString("This is a test\n"));
  ui->textEdit->setText(ui->plainTextEdit->toPlainText());
}

void MainWindow::openVertexShaderFile() {
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Files (*.*)"));
  QFile file(fileName);

  if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    return;

  QTextStream in(&file);
  ui->plainTextEdit->setPlainText(in.readAll());

  file.close();
}

void MainWindow::openFragmentShaderFile() {
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Files (*.*)"));
  QFile file(fileName);

  if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    return;

  QTextStream in(&file);
  ui->textEdit->setText(in.readAll());

  file.close();
}

void MainWindow::saveVertexShaderFile() {
  QString fileName = QFileDialog::getSaveFileName(this,tr("Save File"), "", tr("OpenGL shader language file (*.glsl)"));
  QFile file(fileName);

  if (!file.open(QIODevice::WriteOnly | QIODevice::Text ))
    return;

  QString text = ui->plainTextEdit->toPlainText();

  QTextStream out(&file);

  out << text;

  file.close();
}

void MainWindow::saveFragmentShaderFile() {
  QString fileName = QFileDialog::getSaveFileName(this,tr("Save File"), "", tr("OpenGL shader language file (*.glsl)"));
  QFile file(fileName);

  if (!file.open(QIODevice::WriteOnly | QIODevice::Text ))
    return;

  QString text = ui->textEdit->toPlainText();

  QTextStream out(&file);

  out << text;

  file.close();
}
