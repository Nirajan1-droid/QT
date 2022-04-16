/********************************************************************************
** Form generated from reading UI file 'password_box.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_BOX_H
#define UI_PASSWORD_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_password_box
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *password_box)
    {
        if (password_box->objectName().isEmpty())
            password_box->setObjectName(QString::fromUtf8("password_box"));
        password_box->resize(640, 480);
        buttonBox = new QDialogButtonBox(password_box);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(password_box);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, password_box, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, password_box, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(password_box);
    } // setupUi

    void retranslateUi(QDialog *password_box)
    {
        password_box->setWindowTitle(QCoreApplication::translate("password_box", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class password_box: public Ui_password_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_BOX_H
