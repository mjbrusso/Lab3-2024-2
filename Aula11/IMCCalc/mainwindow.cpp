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


void MainWindow::on_calcularPushButton_clicked()
{
    double peso = ui->pesoDoubleSpinBox->value();
    double altura = ui->alturaSpinBox->value() / 100.0;
    double imc = peso / (altura * altura);
    ui->imcOutputLabel->setText(QLocale().toString(imc, 'f', 1));

    QString classificacao;
    if(imc<18.5)
        classificacao = "Abaixo do peso";
    else if(imc<25)
        classificacao = "Peso normal";
    else if(imc<30)
        classificacao = "Excesso de peso";
    else if(imc<35)
        classificacao = "Obesidade I";
    else if(imc<40)
        classificacao = "Obesidade II";
    else
        classificacao = "Obesidade III";

    ui->classificacaoOutputLabel->setText(classificacao);

}


void MainWindow::on_fecharPushButton_clicked()
{
    close();
    // QApplication::exit(0); // Para finalizar a aplicação, independente da quantidade de janelas abertas
}

