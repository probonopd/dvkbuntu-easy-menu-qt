#include "options.h"
#include "./ui_options.h"
#include "mainwindow.h"
#include <QWindow>
#include <QSettings>
#include <QApplication>
#include <QProcess>

Options::Options(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Options)
{
    ui->setupUi(this);

    screens = QGuiApplication::screens();
    screen = screens.first();
    screenGeometry = screen->geometry();
    HEIGHT = screenGeometry.height();
    WIDTH = screenGeometry.width();
    double dpi = QGuiApplication::primaryScreen()->physicalDotsPerInch();
    fSize2 = (int)((80*HEIGHT/2160)*72/dpi);

    int sizeButton = 80 * HEIGHT / 1080;

    ui->Arretoptions->setMaximumWidth(sizeButton);
    ui->Arretoptions->setMaximumHeight(sizeButton);
    ui->Arretoptions->setIconSize(QSize(sizeButton, sizeButton));

    font.setPointSize(fSize2);

    ui->Deezer->setFont(font);

    ui->YouTube->setFont(font);

    ui->Jamendo->setFont(font);

    ui->Choix->setFont(font);

    ui->Redemarrage->setFont(font);

    ui->buttonBox->setFont(font);

    ui->gridWidget->resize(WIDTH, HEIGHT);

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
    // changement service de musique dans uen variable:
    QProcess SetValue;
    SetValue.start("bash -c \"mkdir -p \"$HOME\"/.easymenu && echo \"" + ChoixServiceMusique + "\" > \"$HOME\"/.easymenu/MusiqueService\"");
    SetValue.waitForFinished(-1);
    // restart:
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
    this->close();
}

void Options::on_buttonBox_rejected()
{
    this->close();
}