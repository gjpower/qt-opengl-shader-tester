#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private:
  Ui::MainWindow *ui;

private slots:
  void loadVertexShader();
  void loadFragmentShader();
  void openVertexShaderFile();
  void openFragmentShaderFile();
  void saveVertexShaderFile();
  void saveFragmentShaderFile();
};




#endif // MAINWINDOW_H
