#ifndef HOSTEL_BOOKING_H
#define HOSTEL_BOOKING_H

#include <QMainWindow>
#include <QPushButton>
#include   <list>

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

    void on_pushButton_15_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_Login_clicked();

    void on_Register_clicked();

    void on_Login_2_clicked();

    void on_Register_2_clicked();

    void on_Book_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_6_clicked();

    void on_Book_2_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_14_clicked();

private:
    Ui::MainWindow *ui;

};

class Client
{
private:
    QString Name;
    QString user_number;
    QString password;
    QString email;

public:
    void setName(QString name);
    QString getName();
    void setUser_number(QString user_number);
    QString getUser_number();
};
#endif // HOSTEL_BOOKING_H
