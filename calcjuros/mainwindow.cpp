#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->valoresTableWidget->setColumnWidth(0, 80);
    ui->valoresTableWidget->setColumnWidth(1, 150);
    ui->valoresTableWidget->setColumnWidth(2, 150);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculaJuros(){
    QLocale currloc = QLocale();

    auto meses = ui->mesesSpinBox->value();
    auto valorAplicacao = ui->valorAplicacaoDoubleSpinBox->value();
    auto taxaJuros = ui->taxaJurosDoubleSpinBox->value();
    ui->valoresTableWidget->setRowCount(meses);
    for(int m=1; m<=meses; m++){
        auto mesItem = new QTableWidgetItem(QString::number(m));
        mesItem->setTextAlignment(Qt::AlignRight | Qt::AlignCenter);
        ui->valoresTableWidget->setItem(m-1, 0, mesItem);

        auto juros = valorAplicacao * taxaJuros / 100;
        auto jurosItem = new QTableWidgetItem(currloc.toCurrencyString(juros));
        jurosItem->setTextAlignment(Qt::AlignRight | Qt::AlignCenter);
        ui->valoresTableWidget->setItem(m-1, 1, jurosItem);


        valorAplicacao += juros;
        auto valorItem = new QTableWidgetItem(currloc.toCurrencyString(valorAplicacao));
        valorItem->setTextAlignment(Qt::AlignRight | Qt::AlignCenter);
        ui->valoresTableWidget->setItem(m-1, 2, valorItem);
    }
}

void MainWindow::on_valorAplicacaoDoubleSpinBox_valueChanged(double arg1)
{
    calculaJuros();
}


void MainWindow::on_taxaJurosDoubleSpinBox_valueChanged(double arg1)
{
    calculaJuros();
}


void MainWindow::on_mesesSpinBox_valueChanged(int arg1)
{
    calculaJuros();
}


void MainWindow::on_actionSobre_triggered()
{
    // QMessageBox::about(this, "Sobre", "Calculadora de Juros");
//    if(QMessageBox::critical(this, "Titulo", "Texto", QMessageBox::Close | QMessageBox::Help)==QMessageBox::Help){
//        // clicou no help
//    }
    QMessageBox::warning(this, "sdadas", "czxcxzczxcxz");
}










