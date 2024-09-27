#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    G->adicionarAresta(0, 1);
    G->adicionarAresta(1, 2);
    G->adicionarAresta(2, 3);
    G->adicionarAresta(3, 4);
    G->adicionarAresta(4, 5);
    G->adicionarAresta(5, 6);
    G->adicionarAresta(6, 7);
    G->adicionarAresta(7, 8);
    G->adicionarAresta(8, 9);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    G->showGrafo(ui->textEdit);
}

void MainWindow::on_pushButton_2_clicked()
{
    int mult = G->getAdjacencia();

    G->resizeAdj(G->getAdjacencia() + 1);
    G->adicionarAresta((rand() %mult), (rand() %mult));
}

