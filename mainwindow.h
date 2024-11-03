#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "grafo.h"

#include <QString>
#include "fabricadegrafos.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_2_clicked();


private:
    Ui::MainWindow *ui;
    fabricaDeGrafos* f;
    AbstractGrafo *G = f->createGrafo(fabricaDeGrafos::MULTIGRAFO) ;
};
#endif // MAINWINDOW_H
