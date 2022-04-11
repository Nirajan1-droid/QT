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



void MainWindow::on_delete_1_clicked()
{
    if(ui->check_1->isChecked())
    {
        ui->check_1->setChecked(false);
    }
    else
    {
        ui->check_1->setChecked(true);
    }
}


void MainWindow::on_delete_2_clicked()
{
    if(ui->check_2->isChecked())
    {
        ui->check_2->setChecked(false);
    }
    else
    {
        ui->check_2->setChecked(true);
    }
}


void MainWindow::on_delete_3_clicked()
{
    if(ui->check_3->isChecked())
    {
        ui->check_3->setChecked(false);
    }
    else
    {
        ui->check_3->setChecked(true);
    }
}


void MainWindow::on_delete_4_clicked()
{
    if(ui->check_4->isChecked())
    {
        ui->check_4->setChecked(false);
    }
    else
    {
        ui->check_4->setChecked(true);
    }
}


void MainWindow::on_delete_5_clicked()
{
    if(ui->check_5->isChecked())
    {
        ui->check_5->setChecked(false);
    }
    else
    {
        ui->check_5->setChecked(true);
    }
}


void MainWindow::on_select_all_clicked()
{
    if((ui->check_1->isChecked()) && (ui->check_2->isChecked()) &&
    (ui->check_3->isChecked()) && (ui->check_4->isChecked()) && (ui->check_5->isChecked()))
    {
        ui->check_1->setChecked(false);
        ui->check_2->setChecked(false);
        ui->check_3->setChecked(false);
        ui->check_4->setChecked(false);
        ui->check_5->setChecked(false);
    }
    else
    {
        ui->check_1->setChecked(true);
        ui->check_2->setChecked(true);
        ui->check_3->setChecked(true);
        ui->check_4->setChecked(true);
        ui->check_5->setChecked(true);
    }
}


void MainWindow::on_disk_1_clicked()
{
    if(ui->radio_1->isChecked())
    {
        ui->radio_1->setChecked(false);
    }
    else
    {
        ui->radio_1->setChecked(true);
    }
}

void MainWindow::on_disk_3_clicked()
{
    if(ui->radio_3->isChecked())
    {
        ui->radio_3->setChecked(false);
    }
    else
    {
        ui->radio_3->setChecked(true);
    }
}



void MainWindow::on_disk_2_combo_highlighted(int index)
{
    if(index >= 0)                  // Just making use of 'index'
    {
        if(ui->radio_2->isChecked())
        {
            ui->radio_2->setChecked(false);
        }
        else
        {
            ui->radio_2->setChecked(true);
        }
    }
}


void MainWindow::on_dashboard_btn_pressed()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->dashboard_btn->setStyleSheet(QString("QPushButton { "
                                             "background-color: #29A19C; "
                                             "color: white;"
                                             "border-radius: 10px;"
                                             "}"));
    ui->processes_btn->setStyleSheet(QString("QPushButton { "
                                             "background-color: #BFBFBF; "
                                             "color: black;"
                                             "border-radius: 10px;"
                                             "}"));
}

void MainWindow::on_processes_btn_pressed()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->dashboard_btn->setStyleSheet(QString("QPushButton { "
                                             "background-color: #BFBFBF; "
                                             "color: black;"
                                             "border-radius: 10px;"
                                             "}"));
    ui->processes_btn->setStyleSheet(QString("QPushButton { "
                                             "background-color: #29A19C; "
                                             "color: white;"
                                             "border-radius: 10px;"
                                             "}"));
}

