#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :  //constructor
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); //open window
}

MainWindow::~MainWindow()   //destructor
{
    delete ui;
}

void MainWindow::on_pushButtonClose_clicked()
{
    ui->label->setText("Button clicked");
}
