#ifndef PASSWORD_BOX_H
#define PASSWORD_BOX_H

#include <QDialog>

namespace Ui {
class password_box;
}

class password_box : public QDialog
{
    Q_OBJECT

public:
    explicit password_box(QWidget *parent = nullptr);
    ~password_box();

private:
    Ui::password_box *ui;
};

#endif // PASSWORD_BOX_H
