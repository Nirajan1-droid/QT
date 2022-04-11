#include "passwordwindow.h"
#include "mainwindow.h"
#include "ui_passwordwindow.h"
#include <QApplication>

passwordwindow::passwordwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::passwordwindow)
{
    ui->setupUi(this);
}

passwordwindow::~passwordwindow()
{
    delete ui;
}

void passwordwindow::on_ok_btn_pressed()
{

}

