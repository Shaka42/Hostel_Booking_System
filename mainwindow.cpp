#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QString"
#include "QMessageBox"

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



void MainWindow::on_Olympia_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Dreamworld_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Login_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_Register_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}



void MainWindow::on_Book_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    QString Room [5] = {"A1","B2","B3","B4","B5"};
    QString type[5]= {"Single","Single","Double","Double","Single"};//Dummy Variables
    QString Price[5]={"1000","1000","1000","2000","2000"};

    for(int i =0; i<5;i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem( Room[i]));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(type[i]));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(Price[i]));

    }
}




void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}







void MainWindow::on_pushButton_6_clicked()
{
    exit(0);
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_9_clicked()
{
    QMessageBox::information(this,"Bookingb","Please Proceed to send money of payment to \n this Number 0781826817 with this code 120219");
    if(QMessageBox::Ok){
        ui->stackedWidget->setCurrentIndex(3);
    }
}

