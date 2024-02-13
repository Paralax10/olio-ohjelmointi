#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    int num = 0;
    int result = 1;
    int num1 = 0;
    int num2 = 0;
    int special;
    int nub = 0;
    int numOfPresses = 0;

private slots:
    void appendDigitToLineEdit(const QString &digit);
    void on_Count_clicked();

    void on_Reset_clicked();

    void on_Num0_clicked();

    void on_Num1_clicked();

    void on_Num2_clicked();

    void on_Num3_clicked();

    void on_Num4_clicked();

    void on_Num5_clicked();

    void on_Num6_clicked();

    void on_Num7_clicked();

    void on_Num8_clicked();

    void on_Num9_clicked();

    void on_Add_clicked();

    void on_Sub_clicked();

    void on_Mul_clicked();

    void on_Div_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
