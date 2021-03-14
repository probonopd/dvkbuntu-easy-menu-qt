#include "controlmenu.h"
#include "ui_controlmenu.h"

ControlMenu::ControlMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlMenu)
{
    ui->setupUi(this);
}

ControlMenu::~ControlMenu()
{
    delete ui;
}
