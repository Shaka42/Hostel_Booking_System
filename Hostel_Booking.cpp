#include "Hostel_Booking.h"
#include "./ui_Hostel_Booking.h"
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
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_Dreamworld_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}




void MainWindow::on_pushButton_15_clicked()
{
    QString student_Number = ui->textEdit_5->toPlainText();
    QString  student_Name= ui->textEdit_7->toPlainText();
    QString tele =ui->textEdit_8->toPlainText();
    QString password =  ui->textEdit_9->toPlainText();
    ui->stackedWidget->setCurrentIndex(0);
    QMessageBox::information(this,"Registration","Successfully Registered At Olympia");
    if(QMessageBox::Ok){
        ui->stackedWidget->setCurrentIndex(0);
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    QString student_Number = ui->textEdit->toPlainText();
    QString  student_Name = ui->plainTextEdit_2->toPlainText();
    QString tele =ui->plainTextEdit_3->toPlainText();
    QString password =  ui->plainTextEdit_4->toPlainText();
    ui->stackedWidget->setCurrentIndex(0);
    QMessageBox::information(this,"Registration","Successfully Registered At Dreamworld");
    if(QMessageBox::Ok){
        ui->stackedWidget->setCurrentIndex(0);
    }
}



void MainWindow::on_pushButton_3_clicked()
{
    QString  student_Number = ui->textEdit_13->toPlainText();
    QString   password  = ui->textEdit_12->toPlainText();
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_clicked()
{
    QString  student_Number = ui->textEdit_2->toPlainText();
    QString   password  = ui->plainTextEdit_3->toPlainText();
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_Login_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void MainWindow::on_Register_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_Login_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void MainWindow::on_Register_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_Book_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    QString Room [5] = {"Z1","B5","U3","L4","T5"};
    QString type[5]= {"Single","Single","Double","Double","Single"};//Dummy Variables
    QString Price[5]={"2000","4000","9000","6000","5000"};

    for(int i =0; i<5;i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem( Room[i]));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(type[i]));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(Price[i]));

    }
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_6_clicked()
{
    exit(0);
}



void MainWindow::on_Book_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    QString Room [5] = {"A1","B2","B3","B4","B5"};
    QString type[5]= {"Single","Single","Double","Double","Single"};//Dummy Variables
    QString Price[5]={"1000","1000","1000","2000","2000"};

    for(int i =0; i<5;i++){
        ui->tableWidget_2->setItem(i,0,new QTableWidgetItem( Room[i]));
        ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(type[i]));
        ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(Price[i]));

    }
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

 void MainWindow::on_pushButton_13_clicked()
{
     exit(0);
}


void MainWindow::on_pushButton_9_clicked()
{

    QString Room_number = ui->textEdit->toPlainText();
    QMessageBox::information(this,"Booking ","Please Send Payment to this 0781826817 to confirm booking");
    if(QMessageBox::Ok){
        ui->stackedWidget->setCurrentIndex(5);
    }

}


void MainWindow::on_pushButton_14_clicked()
{
    QString Room_number = ui->textEdit_4->toPlainText();
    QMessageBox::information(this,"Booking ","Please Send Payment to this 0772503174 to confirm booking");
    if(QMessageBox::Ok){
        ui->stackedWidget->setCurrentIndex(6);
    }

}

