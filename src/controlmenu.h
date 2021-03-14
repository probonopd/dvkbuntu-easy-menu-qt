#ifndef CONTROLMENU_H
#define CONTROLMENU_H

#include <QWidget>

namespace Ui {
class ControlMenu;
}

class ControlMenu : public QWidget
{
    Q_OBJECT

public:
    explicit ControlMenu(QWidget *parent = nullptr);
    ~ControlMenu();

private:
    Ui::ControlMenu *ui;
};

#endif // CONTROLMENU_H
