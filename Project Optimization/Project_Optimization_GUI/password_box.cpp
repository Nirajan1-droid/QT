#include "password_box.h"
#include "ui_password_box.h"

password_box::password_box(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::password_box)
{
    ui->setupUi(this);
}

password_box::~password_box()
{
    delete ui;
}
