#ifndef CONTROLMENUMAIN_H
#define CONTROLMENUMAIN_H

#include <QWidget>
#include <QMainWindow>
#include "ui_mainwindow.h"
#include "mainwindow.h"

namespace Ui {
class ControlMenuMain;
}

class ControlMenuMain : public QWidget
{
    Q_OBJECT

public:
    explicit ControlMenuMain(QWidget *parent = nullptr);
    ~ControlMenuMain();

private:
    Ui::ControlMenuMain *ui;

private slots:
    void on_Fermeture_clicked();
    void on_Home_clicked();
    void on_Options_clicked();
    void showTime();
};
#endif // CONTROLMENUMAIN_H