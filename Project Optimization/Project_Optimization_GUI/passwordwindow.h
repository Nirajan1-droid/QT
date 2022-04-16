#ifndef PASSWORDWINDOW_H
#define PASSWORDWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class passwordwindow;
}

class passwordwindow : public QDialog
{
    Q_OBJECT

public:
    explicit passwordwindow(QWidget *parent = nullptr);
    ~passwordwindow();
    bool status = false;
private slots:
    void on_ok_btn_pressed();

private:
    Ui::passwordwindow *ui;
    MainWindow *mw_ptr;
};

#endif // PASSWORDWINDOW_H
