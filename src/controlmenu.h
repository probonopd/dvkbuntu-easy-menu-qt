#ifndef CONTROLMENU_H
#define CONTROLMENU_H

#include <QWidget>
#include <QMainWindow>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "options.h"
#include "ui_options.h"


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

private slots:
    void on_Fermeture_clicked();
    void on_Home_clicked();
    void on_Options_clicked();
    void showTime();
};
#endif // CONTROLMENU_H
