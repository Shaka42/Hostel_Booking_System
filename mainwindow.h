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
    void Hostel();
    ~MainWindow();

private slots:
    void on_Olympia_clicked();

    void on_Dreamworld_clicked();

    void on_Login_clicked();

    void on_Register_clicked();

    void on_Book_clicked();

    void on_pushButton_8_clicked();


    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
