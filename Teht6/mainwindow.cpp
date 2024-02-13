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

void MainWindow::on_Count_clicked()
{
    qDebug("Count clicked");
    if(ui->lineEdit_2->text().isEmpty() && ui->lineEdit->text().isEmpty()){
        qDebug("Not enough numbers");
    }
    num1 = ui->lineEdit->text().toInt();
    num2 = ui->lineEdit_2->text().toInt();
    int n1 = num1;
    int n2 = num2;

    switch(special){
        case 1:
           result = n1+n2;
           qDebug("%d", result);
           break;
        case 2:
            result = n1 - n2;
            qDebug("%d", result);
            break;
        case 3:
            result = n1 * n2;
            qDebug("%d", result);
            break;
        case 4:
            result = n1 / n2;
            qDebug("%d", result);
            break;
    }
    QString res = QString::number(result);
    ui->lineEdit_3->setText(res);
}


void MainWindow::on_Reset_clicked()
{
    qDebug("Resetoitu");
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    num = 1;
    result = 1;
    nub = 0;
}


void MainWindow::on_Num0_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("0");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num1_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("1");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num2_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("2");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num3_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("3");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num4_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("4");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num5_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("5");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num6_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("6");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num7_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("7");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num8_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("8");
    appendDigitToLineEdit(str);
}


void MainWindow::on_Num9_clicked()
{
    qDebug("Num9 clicked");
    QString str = QStringLiteral("9");
    appendDigitToLineEdit(str);
}

void MainWindow::appendDigitToLineEdit(const QString &digit)
{
    if (nub == 0) {
        QString currentText = ui->lineEdit->text();
        ui->lineEdit->setText(currentText + digit);
    } else if (nub == 1) {
        QString currentText = ui->lineEdit_2->text();
        ui->lineEdit_2->setText(currentText + digit);
    }
}


void MainWindow::on_Add_clicked()
{
    qDebug("Add clicked");
    special = 1;
    nub = 1;
}


void MainWindow::on_Sub_clicked()
{
    qDebug("Sub clicked");
    special = 2;
    nub = 1;
}


void MainWindow::on_Mul_clicked()
{
    qDebug("Mul clicked");
    special = 3;
    nub = 1;
}


void MainWindow::on_Div_clicked()
{
    qDebug("Div clicked");
    special = 4;
    nub = 1;
}

