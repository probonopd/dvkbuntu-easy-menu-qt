#include "options.h"
#include "./ui_options.h"
#include "mainwindow.h"
#include <QWindow>
#include <QSettings>

Options::Options(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Options)
{
    ui->setupUi(this);
    this->showFullScreen();
}

Options::~Options()
{
    delete ui;
}

void Options::on_Arretoptions_clicked()
{
    this->close();
}

void Options::on_Jamendo_toggled()
{
    ChoixServiceMusique = QString::fromUtf8("0");
}

void Options::on_YouTube_toggled()
{
    ChoixServiceMusique = QString::fromUtf8("1");
}

void Options::on_Deezer_toggled()
{
    ChoixServiceMusique = QString::fromUtf8("2");
}

void Options::on_buttonBox_accepted()
{
    QProcess SetValue;
    SetValue.start("bash -c \"mkdir -p \"$HOME\"/.easymenu && echo \"" + ChoixServiceMusique + "\" > \"$HOME\"/.easymenu/MusiqueService\"");
    SetValue.waitForFinished(-1);
    this->close();
}

void Options::on_buttonBox_rejected()
{
    this->close();
}