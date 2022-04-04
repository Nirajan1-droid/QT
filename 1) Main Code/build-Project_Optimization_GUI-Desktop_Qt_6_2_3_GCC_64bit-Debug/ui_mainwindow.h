/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *header;
    QLabel *logo;
    QLabel *logo_bg;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *delete_junk;
    QGraphicsView *junk_bg;
    QCheckBox *check_1;
    QPushButton *delete_1;
    QCheckBox *check_2;
    QPushButton *delete_2;
    QCheckBox *check_3;
    QPushButton *delete_3;
    QPushButton *delete_4;
    QCheckBox *check_4;
    QPushButton *delete_5;
    QCheckBox *check_5;
    QPushButton *select_all;
    QPushButton *delete_selected;
    QWidget *page_2;
    QWidget *page_3;
    QPushButton *dashboard_btn;
    QPushButton *processes_btn;
    QPushButton *resetpw_btn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        header = new QGraphicsView(centralwidget);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(0, 0, 2000, 85));
        header->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	background: #BFBFBF;\n"
"}"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(30, 17, 50, 50));
        logo->setPixmap(QPixmap(QString::fromUtf8("../Assets/Maintainance Icon White.png")));
        logo->setScaledContents(true);
        logo_bg = new QLabel(centralwidget);
        logo_bg->setObjectName(QString::fromUtf8("logo_bg"));
        logo_bg->setGeometry(QRect(10, 11, 91, 62));
        logo_bg->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #484E58;\n"
"border-radius: 10px;\n"
"}"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 2000, 1000));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget\n"
"{\n"
"background: #222831;\n"
"}\n"
""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        delete_junk = new QLabel(page);
        delete_junk->setObjectName(QString::fromUtf8("delete_junk"));
        delete_junk->setGeometry(QRect(10, 94, 244, 45));
        delete_junk->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #BFBFBF;\n"
"color: black;\n"
"}"));
        junk_bg = new QGraphicsView(page);
        junk_bg->setObjectName(QString::fromUtf8("junk_bg"));
        junk_bg->setGeometry(QRect(10, 94, 244, 494));
        junk_bg->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"background: #484E58;\n"
"border-radius: 7px;\n"
"}"));
        check_1 = new QCheckBox(page);
        check_1->setObjectName(QString::fromUtf8("check_1"));
        check_1->setGeometry(QRect(31, 173, 20, 20));
        check_1->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        delete_1 = new QPushButton(page);
        delete_1->setObjectName(QString::fromUtf8("delete_1"));
        delete_1->setGeometry(QRect(61, 161, 142, 45));
        delete_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        check_2 = new QCheckBox(page);
        check_2->setObjectName(QString::fromUtf8("check_2"));
        check_2->setGeometry(QRect(31, 229, 20, 20));
        check_2->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        delete_2 = new QPushButton(page);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(61, 216, 142, 45));
        delete_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        check_3 = new QCheckBox(page);
        check_3->setObjectName(QString::fromUtf8("check_3"));
        check_3->setGeometry(QRect(31, 284, 20, 20));
        check_3->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        delete_3 = new QPushButton(page);
        delete_3->setObjectName(QString::fromUtf8("delete_3"));
        delete_3->setGeometry(QRect(61, 272, 142, 45));
        delete_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        delete_4 = new QPushButton(page);
        delete_4->setObjectName(QString::fromUtf8("delete_4"));
        delete_4->setGeometry(QRect(61, 329, 142, 45));
        delete_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        check_4 = new QCheckBox(page);
        check_4->setObjectName(QString::fromUtf8("check_4"));
        check_4->setGeometry(QRect(31, 342, 20, 20));
        check_4->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        delete_5 = new QPushButton(page);
        delete_5->setObjectName(QString::fromUtf8("delete_5"));
        delete_5->setGeometry(QRect(61, 384, 142, 45));
        delete_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        check_5 = new QCheckBox(page);
        check_5->setObjectName(QString::fromUtf8("check_5"));
        check_5->setGeometry(QRect(31, 397, 20, 20));
        check_5->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        select_all = new QPushButton(page);
        select_all->setObjectName(QString::fromUtf8("select_all"));
        select_all->setGeometry(QRect(51, 463, 162, 45));
        select_all->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        delete_selected = new QPushButton(page);
        delete_selected->setObjectName(QString::fromUtf8("delete_selected"));
        delete_selected->setGeometry(QRect(51, 520, 162, 45));
        delete_selected->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        stackedWidget->addWidget(page);
        junk_bg->raise();
        delete_junk->raise();
        check_1->raise();
        delete_1->raise();
        check_2->raise();
        delete_2->raise();
        check_3->raise();
        delete_3->raise();
        delete_4->raise();
        check_4->raise();
        delete_5->raise();
        check_5->raise();
        select_all->raise();
        delete_selected->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        dashboard_btn = new QPushButton(centralwidget);
        dashboard_btn->setObjectName(QString::fromUtf8("dashboard_btn"));
        dashboard_btn->setGeometry(QRect(365, 11, 91, 62));
        dashboard_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #484E58;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        processes_btn = new QPushButton(centralwidget);
        processes_btn->setObjectName(QString::fromUtf8("processes_btn"));
        processes_btn->setGeometry(QRect(466, 11, 91, 62));
        processes_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #484E58;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        resetpw_btn = new QPushButton(centralwidget);
        resetpw_btn->setObjectName(QString::fromUtf8("resetpw_btn"));
        resetpw_btn->setGeometry(QRect(568, 11, 91, 62));
        resetpw_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #484E58;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        stackedWidget->raise();
        header->raise();
        logo_bg->raise();
        logo->raise();
        dashboard_btn->raise();
        processes_btn->raise();
        resetpw_btn->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo->setText(QString());
        logo_bg->setText(QString());
        delete_junk->setText(QCoreApplication::translate("MainWindow", "                      Delete Junk", nullptr));
        check_1->setText(QString());
        delete_1->setText(QCoreApplication::translate("MainWindow", "Delete 1", nullptr));
        check_2->setText(QString());
        delete_2->setText(QCoreApplication::translate("MainWindow", "Delete 1", nullptr));
        check_3->setText(QString());
        delete_3->setText(QCoreApplication::translate("MainWindow", "Delete 1", nullptr));
        delete_4->setText(QCoreApplication::translate("MainWindow", "Delete 1", nullptr));
        check_4->setText(QString());
        delete_5->setText(QCoreApplication::translate("MainWindow", "Delete 1", nullptr));
        check_5->setText(QString());
        select_all->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        delete_selected->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        dashboard_btn->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        processes_btn->setText(QCoreApplication::translate("MainWindow", "Processes", nullptr));
        resetpw_btn->setText(QCoreApplication::translate("MainWindow", "Reset Pw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
