/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
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
    QWidget *page_1;
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
    QLabel *defrag_section;
    QGraphicsView *defrag_bg;
    QPushButton *disk_1;
    QRadioButton *radio_1;
    QRadioButton *radio_2;
    QRadioButton *radio_3;
    QPushButton *disk_3;
    QComboBox *disk_2_combo;
    QPushButton *defrag;
    QLabel *status_bar;
    QGraphicsView *status_bg;
    QProgressBar *progressBar;
    QLabel *sys_info;
    QGraphicsView *sys_bg;
    QLabel *sys_name_1;
    QLabel *sys_detail_1;
    QLabel *sys_name_2;
    QLabel *sys_detail_2;
    QLabel *sys_name_3;
    QLabel *sys_detail_3;
    QLabel *sys_detail_4;
    QLabel *sys_name_4;
    QLabel *sys_detail_5;
    QLabel *sys_name_5;
    QWidget *page_2;
    QTableWidget *tableWidget;
    QGraphicsView *graphicsView_3;
    QPushButton *refresh_btn;
    QPushButton *end_process;
    QWidget *page_3;
    QLabel *reset_pw_label;
    QGraphicsView *reset_pw_bg;
    QLabel *current_label;
    QLabel *new_label;
    QLineEdit *current_pw;
    QLineEdit *new_pw;
    QPushButton *update_pw;
    QLabel *description;
    QPushButton *dashboard_btn;
    QPushButton *processes_btn;
    QStatusBar *statusBar;

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
"	background: #484E58;\n"
"}"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(30, 17, 50, 50));
        logo->setPixmap(QPixmap(QString::fromUtf8("../Assets/Maintainance Icon White.png")));
        logo->setScaledContents(true);
        logo_bg = new QLabel(centralwidget);
        logo_bg->setObjectName(QString::fromUtf8("logo_bg"));
        logo_bg->setGeometry(QRect(19, 6, 71, 71));
        logo_bg->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 35px;\n"
"}"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 2000, 1000));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget\n"
"{\n"
"background: #222831;\n"
"}\n"
""));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        delete_junk = new QLabel(page_1);
        delete_junk->setObjectName(QString::fromUtf8("delete_junk"));
        delete_junk->setGeometry(QRect(10, 94, 244, 45));
        delete_junk->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #BFBFBF;\n"
"color: black;\n"
"}"));
        delete_junk->setAlignment(Qt::AlignCenter);
        junk_bg = new QGraphicsView(page_1);
        junk_bg->setObjectName(QString::fromUtf8("junk_bg"));
        junk_bg->setGeometry(QRect(10, 94, 244, 474));
        junk_bg->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"background: #484E58;\n"
"border-radius: 7px;\n"
"}"));
        check_1 = new QCheckBox(page_1);
        check_1->setObjectName(QString::fromUtf8("check_1"));
        check_1->setGeometry(QRect(31, 173, 20, 20));
        check_1->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        delete_1 = new QPushButton(page_1);
        delete_1->setObjectName(QString::fromUtf8("delete_1"));
        delete_1->setGeometry(QRect(61, 161, 142, 45));
        delete_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        check_2 = new QCheckBox(page_1);
        check_2->setObjectName(QString::fromUtf8("check_2"));
        check_2->setGeometry(QRect(31, 229, 20, 20));
        check_2->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        delete_2 = new QPushButton(page_1);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(61, 216, 142, 45));
        delete_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        check_3 = new QCheckBox(page_1);
        check_3->setObjectName(QString::fromUtf8("check_3"));
        check_3->setGeometry(QRect(31, 284, 20, 20));
        check_3->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        delete_3 = new QPushButton(page_1);
        delete_3->setObjectName(QString::fromUtf8("delete_3"));
        delete_3->setGeometry(QRect(61, 272, 142, 45));
        delete_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        delete_4 = new QPushButton(page_1);
        delete_4->setObjectName(QString::fromUtf8("delete_4"));
        delete_4->setGeometry(QRect(61, 329, 142, 45));
        delete_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        check_4 = new QCheckBox(page_1);
        check_4->setObjectName(QString::fromUtf8("check_4"));
        check_4->setGeometry(QRect(31, 342, 20, 20));
        check_4->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        delete_5 = new QPushButton(page_1);
        delete_5->setObjectName(QString::fromUtf8("delete_5"));
        delete_5->setGeometry(QRect(61, 384, 142, 45));
        delete_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"coloor: black;\n"
"}"));
        check_5 = new QCheckBox(page_1);
        check_5->setObjectName(QString::fromUtf8("check_5"));
        check_5->setGeometry(QRect(31, 397, 20, 20));
        check_5->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background: none;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        select_all = new QPushButton(page_1);
        select_all->setObjectName(QString::fromUtf8("select_all"));
        select_all->setGeometry(QRect(51, 442, 162, 45));
        select_all->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        delete_selected = new QPushButton(page_1);
        delete_selected->setObjectName(QString::fromUtf8("delete_selected"));
        delete_selected->setGeometry(QRect(51, 497, 162, 45));
        delete_selected->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        defrag_section = new QLabel(page_1);
        defrag_section->setObjectName(QString::fromUtf8("defrag_section"));
        defrag_section->setGeometry(QRect(264, 94, 497, 45));
        defrag_section->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #BFBFBF;\n"
"color: black;\n"
"}"));
        defrag_section->setAlignment(Qt::AlignCenter);
        defrag_bg = new QGraphicsView(page_1);
        defrag_bg->setObjectName(QString::fromUtf8("defrag_bg"));
        defrag_bg->setGeometry(QRect(264, 94, 497, 293));
        defrag_bg->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"background: #484E58;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        disk_1 = new QPushButton(page_1);
        disk_1->setObjectName(QString::fromUtf8("disk_1"));
        disk_1->setGeometry(QRect(314, 159, 92, 68));
        disk_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #C4C4C4;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        radio_1 = new QRadioButton(page_1);
        radio_1->setObjectName(QString::fromUtf8("radio_1"));
        radio_1->setGeometry(QRect(350, 249, 21, 23));
        radio_2 = new QRadioButton(page_1);
        radio_2->setObjectName(QString::fromUtf8("radio_2"));
        radio_2->setGeometry(QRect(501, 249, 21, 23));
        radio_3 = new QRadioButton(page_1);
        radio_3->setObjectName(QString::fromUtf8("radio_3"));
        radio_3->setGeometry(QRect(654, 249, 21, 23));
        disk_3 = new QPushButton(page_1);
        disk_3->setObjectName(QString::fromUtf8("disk_3"));
        disk_3->setGeometry(QRect(618, 159, 92, 68));
        disk_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #C4C4C4;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        disk_2_combo = new QComboBox(page_1);
        disk_2_combo->addItem(QString());
        disk_2_combo->addItem(QString());
        disk_2_combo->setObjectName(QString::fromUtf8("disk_2_combo"));
        disk_2_combo->setGeometry(QRect(452, 159, 120, 68));
        disk_2_combo->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"background: #C4C4C4;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        defrag = new QPushButton(page_1);
        defrag->setObjectName(QString::fromUtf8("defrag"));
        defrag->setGeometry(QRect(365, 308, 294, 45));
        defrag->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        status_bar = new QLabel(page_1);
        status_bar->setObjectName(QString::fromUtf8("status_bar"));
        status_bar->setGeometry(QRect(264, 397, 750, 45));
        status_bar->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #BFBFBF;\n"
"color: black;\n"
"}"));
        status_bar->setAlignment(Qt::AlignCenter);
        status_bg = new QGraphicsView(page_1);
        status_bg->setObjectName(QString::fromUtf8("status_bg"));
        status_bg->setGeometry(QRect(264, 397, 750, 171));
        status_bg->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"background: #484E58;\n"
"border-radius: 7px;\n"
"}"));
        progressBar = new QProgressBar(page_1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(304, 483, 669, 45));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar::chunk:horizontal {\n"
"background-color: #4AD067;\n"
"}\n"
""));
        progressBar->setValue(45);
        progressBar->setAlignment(Qt::AlignCenter);
        sys_info = new QLabel(page_1);
        sys_info->setObjectName(QString::fromUtf8("sys_info"));
        sys_info->setGeometry(QRect(772, 94, 242, 45));
        sys_info->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #BFBFBF;\n"
"color: black;\n"
"}"));
        sys_info->setAlignment(Qt::AlignCenter);
        sys_bg = new QGraphicsView(page_1);
        sys_bg->setObjectName(QString::fromUtf8("sys_bg"));
        sys_bg->setGeometry(QRect(772, 94, 242, 293));
        sys_bg->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"background: #484E58;\n"
"border-radius: 7px;\n"
"}"));
        sys_name_1 = new QLabel(page_1);
        sys_name_1->setObjectName(QString::fromUtf8("sys_name_1"));
        sys_name_1->setGeometry(QRect(778, 170, 82, 35));
        QFont font;
        font.setPointSize(9);
        sys_name_1->setFont(font);
        sys_name_1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_detail_1 = new QLabel(page_1);
        sys_detail_1->setObjectName(QString::fromUtf8("sys_detail_1"));
        sys_detail_1->setGeometry(QRect(863, 170, 143, 35));
        sys_detail_1->setFont(font);
        sys_detail_1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_name_2 = new QLabel(page_1);
        sys_name_2->setObjectName(QString::fromUtf8("sys_name_2"));
        sys_name_2->setGeometry(QRect(778, 208, 82, 35));
        sys_name_2->setFont(font);
        sys_name_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_detail_2 = new QLabel(page_1);
        sys_detail_2->setObjectName(QString::fromUtf8("sys_detail_2"));
        sys_detail_2->setGeometry(QRect(863, 208, 143, 35));
        sys_detail_2->setFont(font);
        sys_detail_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_name_3 = new QLabel(page_1);
        sys_name_3->setObjectName(QString::fromUtf8("sys_name_3"));
        sys_name_3->setGeometry(QRect(778, 246, 82, 35));
        sys_name_3->setFont(font);
        sys_name_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_detail_3 = new QLabel(page_1);
        sys_detail_3->setObjectName(QString::fromUtf8("sys_detail_3"));
        sys_detail_3->setGeometry(QRect(863, 246, 143, 35));
        sys_detail_3->setFont(font);
        sys_detail_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_detail_4 = new QLabel(page_1);
        sys_detail_4->setObjectName(QString::fromUtf8("sys_detail_4"));
        sys_detail_4->setGeometry(QRect(863, 284, 143, 35));
        sys_detail_4->setFont(font);
        sys_detail_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_name_4 = new QLabel(page_1);
        sys_name_4->setObjectName(QString::fromUtf8("sys_name_4"));
        sys_name_4->setGeometry(QRect(778, 284, 82, 35));
        sys_name_4->setFont(font);
        sys_name_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_detail_5 = new QLabel(page_1);
        sys_detail_5->setObjectName(QString::fromUtf8("sys_detail_5"));
        sys_detail_5->setGeometry(QRect(863, 322, 143, 35));
        sys_detail_5->setFont(font);
        sys_detail_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        sys_name_5 = new QLabel(page_1);
        sys_name_5->setObjectName(QString::fromUtf8("sys_name_5"));
        sys_name_5->setGeometry(QRect(778, 322, 82, 35));
        sys_name_5->setFont(font);
        sys_name_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #C4C4C4;\n"
"color: black;\n"
"}"));
        stackedWidget->addWidget(page_1);
        junk_bg->raise();
        sys_bg->raise();
        status_bg->raise();
        defrag_bg->raise();
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
        defrag_section->raise();
        disk_1->raise();
        radio_1->raise();
        radio_2->raise();
        radio_3->raise();
        disk_3->raise();
        disk_2_combo->raise();
        defrag->raise();
        status_bar->raise();
        progressBar->raise();
        sys_info->raise();
        sys_name_1->raise();
        sys_detail_1->raise();
        sys_name_2->raise();
        sys_detail_2->raise();
        sys_name_3->raise();
        sys_detail_3->raise();
        sys_detail_4->raise();
        sys_name_4->raise();
        sys_detail_5->raise();
        sys_name_5->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 23)
            tableWidget->setRowCount(23);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(20, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(21, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(22, __qtablewidgetitem26);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 95, 1004, 411));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"backgroud-color: #BFBFBF;\n"
"color:black;\n"
"border:1px solid #242424;\n"
"alternate-background-color:#EBEBEB;\n"
"gridline-color:#222831\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"text-align:center;\n"
"background:#BFBFBF;\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#black;\n"
"border:1px solid #222831;\n"
"border-left-width:0;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical{\n"
"background:#BFBFBF;\n"
"}\n"
" "));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(35);
        tableWidget->verticalHeader()->setDefaultSectionSize(35);
        graphicsView_3 = new QGraphicsView(page_2);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(10, 95, 1004, 473));
        graphicsView_3->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"background: #484E58;\n"
"border-radius: 7px;\n"
"}"));
        refresh_btn = new QPushButton(page_2);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setGeometry(QRect(61, 521, 142, 30));
        refresh_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        end_process = new QPushButton(page_2);
        end_process->setObjectName(QString::fromUtf8("end_process"));
        end_process->setGeometry(QRect(821, 521, 142, 30));
        end_process->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        stackedWidget->addWidget(page_2);
        graphicsView_3->raise();
        tableWidget->raise();
        refresh_btn->raise();
        end_process->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setMaximumSize(QSize(2000, 16777215));
        reset_pw_label = new QLabel(page_3);
        reset_pw_label->setObjectName(QString::fromUtf8("reset_pw_label"));
        reset_pw_label->setGeometry(QRect(10, 95, 1004, 33));
        reset_pw_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #BFBFBF;\n"
"color: black;\n"
"}"));
        reset_pw_label->setAlignment(Qt::AlignCenter);
        reset_pw_bg = new QGraphicsView(page_3);
        reset_pw_bg->setObjectName(QString::fromUtf8("reset_pw_bg"));
        reset_pw_bg->setGeometry(QRect(10, 95, 1004, 473));
        reset_pw_bg->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"background: #484E58;\n"
"border-radius: 7px;\n"
"}"));
        current_label = new QLabel(page_3);
        current_label->setObjectName(QString::fromUtf8("current_label"));
        current_label->setGeometry(QRect(227, 246, 125, 15));
        current_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: white;\n"
"}"));
        new_label = new QLabel(page_3);
        new_label->setObjectName(QString::fromUtf8("new_label"));
        new_label->setGeometry(QRect(227, 283, 125, 15));
        new_label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: white;\n"
"}"));
        current_pw = new QLineEdit(page_3);
        current_pw->setObjectName(QString::fromUtf8("current_pw"));
        current_pw->setGeometry(QRect(365, 236, 294, 33));
        current_pw->setEchoMode(QLineEdit::Password);
        new_pw = new QLineEdit(page_3);
        new_pw->setObjectName(QString::fromUtf8("new_pw"));
        new_pw->setGeometry(QRect(365, 278, 294, 33));
        new_pw->setEchoMode(QLineEdit::Password);
        update_pw = new QPushButton(page_3);
        update_pw->setObjectName(QString::fromUtf8("update_pw"));
        update_pw->setGeometry(QRect(416, 357, 192, 39));
        update_pw->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        description = new QLabel(page_3);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(10, 521, 1004, 46));
        description->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background: #BFBFBF;\n"
"color:#454545;\n"
"  border-bottom-left-radius: 7px;\n"
"  border-bottom-right-radius: 7px;\n"
"\n"
"}"));
        description->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_3);
        reset_pw_bg->raise();
        reset_pw_label->raise();
        current_label->raise();
        new_label->raise();
        current_pw->raise();
        new_pw->raise();
        update_pw->raise();
        description->raise();
        dashboard_btn = new QPushButton(centralwidget);
        dashboard_btn->setObjectName(QString::fromUtf8("dashboard_btn"));
        dashboard_btn->setGeometry(QRect(413, 11, 90, 62));
        dashboard_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        dashboard_btn->setCheckable(false);
        processes_btn = new QPushButton(centralwidget);
        processes_btn->setObjectName(QString::fromUtf8("processes_btn"));
        processes_btn->setGeometry(QRect(514, 11, 90, 62));
        processes_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 10px;\n"
"color: black;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        stackedWidget->raise();
        header->raise();
        logo_bg->raise();
        logo->raise();
        dashboard_btn->raise();
        processes_btn->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8("QStatusBar\n"
"{\n"
"background: #BFBFBF;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo->setText(QString());
        logo_bg->setText(QString());
        delete_junk->setText(QCoreApplication::translate("MainWindow", "Delete Junk", nullptr));
        check_1->setText(QString());
        delete_1->setText(QCoreApplication::translate("MainWindow", "Delete Temp1", nullptr));
        check_2->setText(QString());
        delete_2->setText(QCoreApplication::translate("MainWindow", "Delete Temp2", nullptr));
        check_3->setText(QString());
        delete_3->setText(QCoreApplication::translate("MainWindow", "Delete Prefetch", nullptr));
        delete_4->setText(QCoreApplication::translate("MainWindow", "Delete Old Drivers", nullptr));
        check_4->setText(QString());
        delete_5->setText(QCoreApplication::translate("MainWindow", "Delete DNS Cache", nullptr));
        check_5->setText(QString());
        select_all->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        delete_selected->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        defrag_section->setText(QCoreApplication::translate("MainWindow", "Defragment Section", nullptr));
        disk_1->setText(QCoreApplication::translate("MainWindow", "Disk C:", nullptr));
        radio_1->setText(QString());
        radio_2->setText(QString());
        radio_3->setText(QString());
        disk_3->setText(QCoreApplication::translate("MainWindow", "Disk C:", nullptr));
        disk_2_combo->setItemText(0, QCoreApplication::translate("MainWindow", "Custom Disks", nullptr));
        disk_2_combo->setItemText(1, QString());

        defrag->setText(QCoreApplication::translate("MainWindow", "Defragment", nullptr));
        status_bar->setText(QCoreApplication::translate("MainWindow", "Progress Level", nullptr));
        sys_info->setText(QCoreApplication::translate("MainWindow", "System Information", nullptr));
        sys_name_1->setText(QCoreApplication::translate("MainWindow", "  Device Name", nullptr));
        sys_detail_1->setText(QString());
        sys_name_2->setText(QCoreApplication::translate("MainWindow", "  OS Name", nullptr));
        sys_detail_2->setText(QString());
        sys_name_3->setText(QCoreApplication::translate("MainWindow", "  Processor", nullptr));
        sys_detail_3->setText(QString());
        sys_detail_4->setText(QString());
        sys_name_4->setText(QCoreApplication::translate("MainWindow", "  RAM", nullptr));
        sys_detail_5->setText(QString());
        sys_name_5->setText(QCoreApplication::translate("MainWindow", "  System Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Process Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "PID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Memory", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Process Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->verticalHeaderItem(21);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->verticalHeaderItem(22);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        refresh_btn->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        end_process->setText(QCoreApplication::translate("MainWindow", "End Process", nullptr));
        reset_pw_label->setText(QCoreApplication::translate("MainWindow", "Reset Password", nullptr));
        current_label->setText(QCoreApplication::translate("MainWindow", "Current Password:", nullptr));
        new_label->setText(QCoreApplication::translate("MainWindow", "New Password:", nullptr));
        update_pw->setText(QCoreApplication::translate("MainWindow", "Update Password", nullptr));
        description->setText(QCoreApplication::translate("MainWindow", "Application developed by: Giver Khadka, Suraj Kumal, Nirajan Bhattarai and Manish Sheewakoti ", nullptr));
        dashboard_btn->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        processes_btn->setText(QCoreApplication::translate("MainWindow", "Processes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
