#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDesktopWidget>
#include <iostream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QMainWindow::setWindowIcon(QIcon("Images/EasyMenu_Icone.svg"));

    ui->setupUi(this);

    fontC = ui->Calculatrice->font();
    fontE = ui->Email->font();
    fontI = ui->Internet->font();
    fontN = ui->Notes->font();
    fontD = ui->Discord->font();
    fontM = ui->Music->font();

    rec = QApplication::desktop()->screenGeometry();
    HEIGHT = rec.height();

    QS = QSize(200,200);
    fSize=22;

    if (HEIGHT >= 1440)
    {
        QS = QSize(300,300);
    }
    if (HEIGHT <= 1080)
    {
        int fSize;
        QS = QSize(150,150);
        fSize=12;
    }
    if (HEIGHT <= 900)
    {
    QS = QSize(100,100);
    fSize=8;
    }

    ui->Calculatrice->setIconSize(QS);
    ui->Email->setIconSize(QS);
    ui->Internet->setIconSize(QS);
    ui->Notes->setIconSize(QS);
    ui->Discord->setIconSize(QS);
    ui->Music->setIconSize(QS);
    fontC.setPointSize(fSize);
    fontE.setPointSize(fSize);
    fontI.setPointSize(fSize);
    fontN.setPointSize(fSize);
    fontD.setPointSize(fSize);
    fontM.setPointSize(fSize);
    ui->Calculatrice->setFont(fontC);
    ui->Email->setFont(fontE);
    ui->Internet->setFont(fontI);
    ui->Notes->setFont(fontN);
    ui->Discord->setFont(fontD);
    ui->Music->setFont(fontM);

    ui->Calculatrice->installEventFilter(this);
    ui->Email->installEventFilter(this);
    ui->Internet->installEventFilter(this);
    ui->Notes->installEventFilter(this);
    ui->Discord->installEventFilter(this);
    ui->Music->installEventFilter(this);

    music->load(QUrl("https://www.jamendo.com/start"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject* watched, QEvent* event)
{
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Calculatrice && event->type() == QEvent::HoverEnter) {
            if (HEIGHT > 900)
            {
                QS = QSize(100,100);
                fontC.setPointSize(30);
            }
            else
            {
                QS = QSize(80,80);
                fontC.setPointSize(8);
            }
            ui->Calculatrice->setIconSize(QS);
            ui->Calculatrice->setFont(fontC);
        }
        if (watched == ui->Calculatrice && event->type() == QEvent::HoverLeave) {
            if (HEIGHT >= 1440)
            {
                QS = QSize(300,300);
                fontC.setPointSize(22);
            }
            else if (HEIGHT>1080)
            {
                QS = QSize(200,200);
                fontC.setPointSize(22);
            }
            else if (HEIGHT <= 1080 && HEIGHT > 900)
            {
                QS = QSize(150,150);
                fontC.setPointSize(12);
            }
            else if (HEIGHT <= 900)
            {
                QS = QSize(100,100);
                fontC.setPointSize(8);
            }
            ui->Calculatrice->setIconSize(QS);
            ui->Calculatrice->setFont(fontC);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Email && event->type() == QEvent::HoverEnter) {
            if (HEIGHT > 900)
            {
                QS = QSize(100,100);
                fontE.setPointSize(30);
            }
            else
            {
                QS = QSize(80,80);
                fontE.setPointSize(8);
            }
            ui->Email->setIconSize(QS);
            ui->Email->setFont(fontE);
        }
        if (watched == ui->Email && event->type() == QEvent::HoverLeave) {
            if (HEIGHT >= 1440)
            {
                QS = QSize(300,300);
                fontE.setPointSize(22);
            }
            else if (HEIGHT>1080)
            {
                QS = QSize(200,200);
                fontE.setPointSize(22);
            }
            else if (HEIGHT <= 1080 && HEIGHT > 900)
            {
                QS = QSize(150,150);
                fontE.setPointSize(12);
            }
            else if (HEIGHT <= 900)
            {
                QS = QSize(100,100);
                fontE.setPointSize(8);
            }
            ui->Email->setIconSize(QS);
            ui->Email->setFont(fontE);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Internet && event->type() == QEvent::HoverEnter) {
            if (HEIGHT > 900)
            {
                QS = QSize(100,100);
                fontI.setPointSize(30);
            }
            else
            {
                QS = QSize(80,80);
                fontI.setPointSize(8);
            }
            ui->Internet->setIconSize(QS);
            ui->Internet->setFont(fontI);
        }
        if (watched == ui->Internet && event->type() == QEvent::HoverLeave) {
            if (HEIGHT >= 1440)
            {
                QS = QSize(300,300);
                fontI.setPointSize(22);
            }
            else if (HEIGHT>1080)
            {
                QS = QSize(200,200);
                fontI.setPointSize(22);
            }
            else if (HEIGHT <= 1080 && HEIGHT > 900)
            {
                QS = QSize(150,150);
                fontI.setPointSize(12);
            }
            else if (HEIGHT <= 900)
            {
                QS = QSize(100,100);
                fontI.setPointSize(8);
            }
            ui->Internet->setIconSize(QS);
            ui->Internet->setFont(fontI);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Notes && event->type() == QEvent::HoverEnter) {
            if (HEIGHT > 900)
            {
                QS = QSize(100,100);
                fontN.setPointSize(30);
            }
            else
            {
                QS = QSize(80,80);
                fontN.setPointSize(8);
            }
            ui->Notes->setIconSize(QS);
            ui->Notes->setFont(fontN);
        }
        if (watched == ui->Notes && event->type() == QEvent::HoverLeave) {
            if (HEIGHT >= 1440)
            {
                QS = QSize(300,300);
                fontN.setPointSize(22);
            }
            else if (HEIGHT>1080)
            {
                QS = QSize(200,200);
                fontN.setPointSize(22);
            }
            else if (HEIGHT <= 1080 && HEIGHT > 900)
            {
                QS = QSize(150,150);
                fontN.setPointSize(12);
            }
            else if (HEIGHT <= 900)
            {
                QS = QSize(100,100);
                fontN.setPointSize(8);
            }
            ui->Notes->setIconSize(QS);
            ui->Notes->setFont(fontN);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Discord && event->type() == QEvent::HoverEnter) {
            if (HEIGHT > 900)
            {
                QS = QSize(100,100);
                fontD.setPointSize(30);
            }
            else
            {
                QS = QSize(80,80);
                fontD.setPointSize(8);
            }
            ui->Discord->setIconSize(QS);
            ui->Discord->setFont(fontD);
        }
        if (watched == ui->Discord && event->type() == QEvent::HoverLeave) {
            if (HEIGHT >= 1440)
            {
                QS = QSize(300,300);
                fontD.setPointSize(22);
            }
            else if (HEIGHT>1080)
            {
                QS = QSize(200,200);
                fontD.setPointSize(22);
            }
            else if (HEIGHT <= 1080 && HEIGHT > 900)
            {
                QS = QSize(150,150);
                fontD.setPointSize(12);
            }
            else if (HEIGHT <= 900)
            {
                QS = QSize(100,100);
                fontD.setPointSize(8);
            }
            ui->Discord->setIconSize(QS);
            ui->Discord->setFont(fontD);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Music && event->type() == QEvent::HoverEnter) {
            if (HEIGHT > 900)
            {
                QS = QSize(100,100);
                fontM.setPointSize(30);
            }
            else
            {
                QS = QSize(80,80);
                fontM.setPointSize(8);
            }
            ui->Music->setIconSize(QS);
            ui->Music->setFont(fontM);
        }
        if (watched == ui->Music && event->type() == QEvent::HoverLeave) {
            if (HEIGHT >= 1440)
            {
                QS = QSize(300,300);
                fontM.setPointSize(22);
            }
            else if (HEIGHT>1080)
            {
                QS = QSize(200,200);
                fontM.setPointSize(22);
            }
            else if (HEIGHT <= 1080 && HEIGHT > 900)
            {
                QS = QSize(150,150);
                fontM.setPointSize(12);
            }
            else if (HEIGHT <= 900)
            {
                QS = QSize(100,100);
                fontM.setPointSize(8);
            }
            ui->Music->setIconSize(QS);
            ui->Music->setFont(fontM);
        }
    }
    return false;
}

void MainWindow::on_Calculatrice_clicked()
{
    KCalculatrice->start("/usr/bin/kcalc");
}

void MainWindow::on_Email_clicked()
{
    rec = QApplication::desktop()->screenGeometry();
    std::string height = std::to_string(rec.height());
    std::string width = std::to_string(rec.width());
    std::string cmd = "/usr/bin/thunderbird -foreground -height" + height + "-width" + width + "";
    QCMD = QString::fromStdString(cmd);
    email->start(QCMD);
}

void MainWindow::on_Notes_clicked()
{
    rec = QApplication::desktop()->screenGeometry();
    std::string height = std::to_string(rec.height());
    std::string width = std::to_string(rec.width());
    std::string cmd = "/usr/bin/onlyoffice-desktopeditors -foreground -height" + height + "-width" + width + "";
    QCMD = QString::fromStdString(cmd);
    office->start(QCMD);
}

void MainWindow::on_Internet_clicked()
{
    rec = QApplication::desktop()->screenGeometry();
    std::string height = std::to_string(rec.height());
    std::string width = std::to_string(rec.width());
    std::string cmd = "/usr/bin/firefox -foreground -new-tab file:///home/Accueil_local/index.html -height" + height + "-width" + width + "";
    QCMD = QString::fromStdString(cmd);
    web->start(QCMD);
}

void MainWindow::on_Music_clicked()
{
    music->setWindowState(Qt::WindowMaximized);
    music->setWindowTitle("EasyMenu Jamendo");
    music->show();
}

void MainWindow::on_Discord_clicked()
{
    DiscordLauncher->start("/usr/bin/discord");
}
