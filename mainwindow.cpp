#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    num_in=0;
    num_sum=0;
    operator_char='+';
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showNum()
{
    ui->textEdit->setText(QString("%1").arg(num_in));
}

void MainWindow::on_pushButton_clicked()
{
    if(operator_char=='0')
    {
        operator_char='+';
        num_in=0;
        num_sum=0;
    }
    if(num_in<99999999999999999)
    num_in=num_in*10+1;
    showNum();
}


void MainWindow::on_pushButton_2_clicked()
{
    if(operator_char=='0')
    {
    operator_char='+';
    num_in=0;
    num_sum=0;
    }
    if(num_in<99999999999999999)
     num_in=num_in*10+2;
    showNum();
}

void MainWindow::on_pushButton_3_clicked()
{
    if(operator_char=='0')
    {
     operator_char='+';
     num_in=0;
     num_sum=0;
    }
    if(num_in<99999999999999999)
     num_in=num_in*10+3;
    showNum();
}

void MainWindow::on_pushButton_4_clicked()
{
    if(operator_char=='0')
    {
     operator_char='+';
     num_in=0;
     num_sum=0;
    }
    if(num_in<99999999999999999)
     num_in=num_in*10+4;
    showNum();
}

void MainWindow::on_pushButton_5_clicked()
{
    if(operator_char=='0')
    {
     operator_char='+';
     num_in=0;
     num_sum=0;
    }
    if(num_in<99999999999999999)
     num_in=num_in*10+5;
    showNum();
}

void MainWindow::on_pushButton_6_clicked()
{
    if(operator_char=='0')
    {
     operator_char='+';
     num_in=0;
     num_sum=0;
    }
    if(num_in<99999999999999999)
     num_in=num_in*10+6;
    showNum();
}

void MainWindow::on_pushButton_7_clicked()
{
    if(operator_char=='0')
    {
     operator_char='+';
     num_in=0;
     num_sum=0;
    }
    if(num_in<99999999999999999)
     num_in=num_in*10+7;
    showNum();
}

void MainWindow::on_pushButton_8_clicked()
{
    if(operator_char=='0')
    {
     operator_char='+';
     num_in=0;
     num_sum=0;
    }
    if(num_in<99999999999999999)
     num_in=num_in*10+8;
    showNum();
}

void MainWindow::on_pushButton_9_clicked()
{
    if(operator_char=='0')
    {
     operator_char='+';
     num_in=0;
     num_sum=0;
    }
    if(num_in<99999999999999999)
     num_in=num_in*10+9;
    showNum();
}

void MainWindow::on_pushButton_10_clicked()//+
{
    on_pushButton_14_clicked();
    operator_char='+';
}

void MainWindow::on_pushButton_11_clicked()//-
{
    on_pushButton_14_clicked();
     operator_char='-';
}

void MainWindow::on_pushButton_12_clicked()//*
{
     on_pushButton_14_clicked();
     operator_char='*';
}

void MainWindow::on_pushButton_13_clicked()//÷
{
     on_pushButton_14_clicked();
     operator_char='/';
}

void MainWindow::on_pushButton_14_clicked()//=
{
     switch (operator_char) {
     case '+':
     num_sum+=num_in;
     break;
     case '-':
     num_sum-=num_in;
     break;
     case '*':
     num_sum*=num_in;
     break;
     case '/':
     {
     if(num_in!=0)
     num_sum/=(float)num_in;
     else
     {
     ui->textEdit->setText("error!");
     return;
     }
     break;
     }
     }
     operator_char='0';
     num_in=0;
     ui->textEdit->setText(QString("%1").arg(num_sum));
}


void MainWindow::on_pushButton_15_clicked()
{
     num_in=0;
     num_sum=0;
     operator_char='+';
     showNum();
}


void MainWindow::on_pushButton_16_clicked()
{
     if(num_in<99999999999999999)
     num_in=num_in*10;
     showNum();
}

