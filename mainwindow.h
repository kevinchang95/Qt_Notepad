#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);              //Constrctor
    ~MainWindow();                                                   //Destructor

private:
    Ui::MainWindow *ui;                                               //private in-class class variable: ui

    QString currentFile = "";
};
#endif // MAINWINDOW_H
