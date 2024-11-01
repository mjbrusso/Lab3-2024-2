#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_valorAplicacaoDoubleSpinBox_valueChanged(double arg1);

    void on_taxaJurosDoubleSpinBox_valueChanged(double arg1);

    void on_mesesSpinBox_valueChanged(int arg1);

    void on_actionSobre_triggered();

private:
    Ui::MainWindow *ui;
    void calculaJuros();
};
#endif // MAINWINDOW_H
