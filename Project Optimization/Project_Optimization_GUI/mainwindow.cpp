#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Windows.h>
#include <qt_windows.h>
#include <QFileInfo>
#include <QDir>
#include <QDebug>
#include <QSysInfo>
#include <QProcess>




using namespace std;

QString driveSelect = NULL;
void system_hidden(char argument[]);
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Get System Drive Letters
    foreach(QFileInfo drive, QDir::drives())
    {
        QString letter = drive.absolutePath();
        int pos = 0;
        pos = letter.lastIndexOf(QChar('/'));
        QString driveLetter = letter.left(pos);
        // Add all drives except Local Disk C
        if(driveLetter != "C:")
        {
            ui->disk_2_combo->addItem("Drive " + driveLetter);
        }
    }

//    char sys_info[] = "systeminfo";
//    system_hidden(sys_info);
//    qDebug() << QSysInfo::kernelType();
//    qDebug() << QSysInfo::kernelVersion();
//    qDebug() << QSysInfo::machineHostName();
//    qDebug() << QSysInfo::productType();
//    qDebug() << QSysInfo::productVersion();
//    qDebug() << QSysInfo::currentCpuArchitecture();
//    qDebug() << QSysInfo::prettyProductName();
    QProcess process_system(0);
    QString output, command = "cmd.exe";
    QStringList cpuname;
    //"wmic cpu get name"
    process_system.start("cmd.exe /c echo %username%");
    process_system.waitForFinished();
    output = process_system.readAllStandardOutput().toUpper();
    qDebug() << output;


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
    ui->radio_1->setChecked(true);
}

void MainWindow::on_disk_3_clicked()
{
    ui->radio_3->setChecked(true);
}



void MainWindow::on_disk_2_combo_highlighted(int index)
{
    if(index >= 0)
    {
        ui->radio_2->setChecked(true);
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




void MainWindow::on_delete_selected_clicked()
{
    // Temp File Delete Command
    if(ui->check_1->isChecked())
    {
        char cmd1[] = "rmdir /s /q cd %temp%\\";
        system_hidden(cmd1);
    }
    if(ui->check_2->isChecked())
    {
        char cmd2[] = "rmdir /s /q cd %temp%\\";
        system_hidden(cmd2);
    }
    if(ui->check_3->isChecked())
    {
        char cmd3[] = "rmdir /s /q cd %temp%\\";
        system_hidden(cmd3);
    }
    if(ui->check_4->isChecked())
    {
        char cmd4[] = "rmdir /s /q cd %temp%\\";
        system_hidden(cmd4);
    }
    if(ui->check_5->isChecked())
    {
        char cmd5[] = "rmdir /s /q cd %temp%\\";
        system_hidden(cmd5);
    }
}
void system_hidden(char argument[])
{
    // Execute cmd without windows popup
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));
    // CMD command here
    char arg[500] = "cmd.exe /c ";
    strncat(arg, argument, 450);
    // Convert char string to required LPWSTR string
    wchar_t text[500];
    mbstowcs(text, arg, strlen(arg) + 1);
    LPWSTR command = text;
    // Run process
    CreateProcess (NULL, command, NULL, NULL, 0, CREATE_NO_WINDOW, NULL, NULL, &si, &pi);
}

void MainWindow::on_defrag_clicked()
{
    if(ui->radio_1->isChecked())
    {
        char cmd6[] = "C:/Windows/System32/defrag C:";
        system_hidden(cmd6);
    }
    else if(ui->radio_2->isChecked())
    {
        // 've' from last two characters of Custom Drive
        if(driveSelect != "ve")
        {
            //QString command to char * string conversion
            QString instruction = "C:/Windows/System32/defrag " + driveSelect + " > C:/Users/giver_kdkPC/Desktop/defrag.txt";
            char *cmd7;
            QByteArray instruct = instruction.toLocal8Bit();
            cmd7 = instruct.data();
            system_hidden(cmd7);
        }
    }
    else if(ui->radio_3->isChecked())
    {
        char cmd8[] = "C:/Windows/System32/defrag /C";
        system_hidden(cmd8);
    }
}



void MainWindow::on_disk_2_combo_textActivated(const QString &arg1)
{
    int pos = 2;
    driveSelect = arg1.right(pos);
    qDebug() << driveSelect;
}

