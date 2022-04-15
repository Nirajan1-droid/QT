/********************************************************************************
** Form generated from reading UI file 'passwordwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDWINDOW_H
#define UI_PASSWORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_passwordwindow
{
public:
    QLabel *bg;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *ok_btn;
    QPushButton *cancel_btn;

    void setupUi(QDialog *passwordwindow)
    {
        if (passwordwindow->objectName().isEmpty())
            passwordwindow->setObjectName(QString::fromUtf8("passwordwindow"));
        passwordwindow->resize(420, 240);
        passwordwindow->setMinimumSize(QSize(420, 240));
        passwordwindow->setMaximumSize(QSize(420, 240));
        bg = new QLabel(passwordwindow);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setGeometry(QRect(0, 0, 500, 300));
        bg->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color: #484E58;\n"
"color: white;\n"
"}"));
        bg->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label = new QLabel(passwordwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 28, 158, 23));
        QFont font;
        font.setFamilies({QString::fromUtf8("Poppins SemiBold")});
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: white;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(passwordwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(47, 58, 327, 13));
        QFont font1;
        font1.setPointSize(8);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: white;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        password = new QLineEdit(passwordwindow);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(47, 99, 327, 42));
        password->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background: #EBEBEB;\n"
"border-radius: 5px;\n"
"}"));
        password->setEchoMode(QLineEdit::Password);
        ok_btn = new QPushButton(passwordwindow);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setGeometry(QRect(88, 169, 120, 43));
        ok_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #29A19C;\n"
"border-radius: 7px;\n"
"color: white;\n"
"}"));
        cancel_btn = new QPushButton(passwordwindow);
        cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));
        cancel_btn->setGeometry(QRect(213, 169, 120, 43));
        cancel_btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #C4C4C4;\n"
"border-radius: 7px;\n"
"color: black;\n"
"}\n"
""));

        retranslateUi(passwordwindow);

        QMetaObject::connectSlotsByName(passwordwindow);
    } // setupUi

    void retranslateUi(QDialog *passwordwindow)
    {
        passwordwindow->setWindowTitle(QCoreApplication::translate("passwordwindow", "Dialog", nullptr));
        bg->setText(QString());
        label->setText(QCoreApplication::translate("passwordwindow", "Enter Password", nullptr));
        label_2->setText(QCoreApplication::translate("passwordwindow", "Authentication is required to acces this software", nullptr));
        ok_btn->setText(QCoreApplication::translate("passwordwindow", "OK", nullptr));
        cancel_btn->setText(QCoreApplication::translate("passwordwindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passwordwindow: public Ui_passwordwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDWINDOW_H
