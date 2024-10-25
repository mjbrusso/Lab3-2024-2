/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *valorAplicacaoLabel;
    QLabel *taxaJurosLabel;
    QLabel *mesesLabel;
    QDoubleSpinBox *valorAplicacaoDoubleSpinBox;
    QDoubleSpinBox *taxaJurosDoubleSpinBox;
    QSpinBox *mesesSpinBox;
    QTableWidget *valoresTableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(434, 521);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        valorAplicacaoLabel = new QLabel(centralwidget);
        valorAplicacaoLabel->setObjectName(QString::fromUtf8("valorAplicacaoLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, valorAplicacaoLabel);

        taxaJurosLabel = new QLabel(centralwidget);
        taxaJurosLabel->setObjectName(QString::fromUtf8("taxaJurosLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, taxaJurosLabel);

        mesesLabel = new QLabel(centralwidget);
        mesesLabel->setObjectName(QString::fromUtf8("mesesLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mesesLabel);

        valorAplicacaoDoubleSpinBox = new QDoubleSpinBox(centralwidget);
        valorAplicacaoDoubleSpinBox->setObjectName(QString::fromUtf8("valorAplicacaoDoubleSpinBox"));
        valorAplicacaoDoubleSpinBox->setMaximum(99999999.989999994635582);
        valorAplicacaoDoubleSpinBox->setSingleStep(0.010000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, valorAplicacaoDoubleSpinBox);

        taxaJurosDoubleSpinBox = new QDoubleSpinBox(centralwidget);
        taxaJurosDoubleSpinBox->setObjectName(QString::fromUtf8("taxaJurosDoubleSpinBox"));
        taxaJurosDoubleSpinBox->setMaximum(999.990000000000009);
        taxaJurosDoubleSpinBox->setSingleStep(0.010000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, taxaJurosDoubleSpinBox);

        mesesSpinBox = new QSpinBox(centralwidget);
        mesesSpinBox->setObjectName(QString::fromUtf8("mesesSpinBox"));
        mesesSpinBox->setMinimum(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, mesesSpinBox);


        verticalLayout->addLayout(formLayout);

        valoresTableWidget = new QTableWidget(centralwidget);
        if (valoresTableWidget->columnCount() < 3)
            valoresTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        valoresTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        valoresTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        valoresTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        valoresTableWidget->setObjectName(QString::fromUtf8("valoresTableWidget"));
        valoresTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        valoresTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        valoresTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        valoresTableWidget->setGridStyle(Qt::SolidLine);
        valoresTableWidget->setRowCount(0);
        valoresTableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(valoresTableWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Juros Compostos", nullptr));
        valorAplicacaoLabel->setText(QCoreApplication::translate("MainWindow", "Valor da Aplica\303\247\303\243o:", nullptr));
        taxaJurosLabel->setText(QCoreApplication::translate("MainWindow", "Taxa de Juros Mensal:", nullptr));
        mesesLabel->setText(QCoreApplication::translate("MainWindow", "N\303\272mero de Meses:", nullptr));
        valorAplicacaoDoubleSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "R$ ", nullptr));
        taxaJurosDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "%", nullptr));
        QTableWidgetItem *___qtablewidgetitem = valoresTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "M\303\252s", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = valoresTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Juros", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = valoresTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Valor Atualizado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
