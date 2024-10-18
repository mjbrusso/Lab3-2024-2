#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_okPushButton_clicked()
{
    // setWindowTitle("Olá Mundo!");
    setWindowTitle(windowTitle() + "!");
    ui->okPushButton->setText("Boa noite");
}

