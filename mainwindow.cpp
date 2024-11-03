#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScrollBar>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->verticalScrollBar, &QScrollBar::valueChanged, ui->textEdit->verticalScrollBar(), &QScrollBar::setValue);
    connect(ui->textEdit->verticalScrollBar(), &QScrollBar::valueChanged, ui->verticalScrollBar, &QScrollBar::setValue);

    connect(ui->textEdit->verticalScrollBar(), &QScrollBar::rangeChanged, [=](int min, int max){
        ui->verticalScrollBar->setRange( min,  max); });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    int mult = G->getSizeAdjacencia();
    mult++;
    G->resizeAdj(mult);

    G->adicionarAresta((rand() %mult), (rand() %mult));
     G->mostrarGrafo(ui->textEdit);
}



