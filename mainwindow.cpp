#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDesktopWidget>
#include <iostream>
#include <string>
#include <QRect>
#include <QScreen>

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

    screens = QGuiApplication::screens();
    screen = screens.first();
    screenGeometry = screen->geometry();
    HEIGHT = screenGeometry.height();

    QS1 = QSize((int)(HEIGHT*.3),(int)(HEIGHT*.3));
    fSize1 = (int)((HEIGHT*.03) / 3);
    QS2 = QSize((int)(HEIGHT*.05),(int)(HEIGHT*.05));
    fSize2 = (int)((HEIGHT*.1) / 3);

    ui->Calculatrice->setText("Calculatrice");
    ui->Email->setText("Gestion\nEmail");
    ui->Internet->setText("Accédez\nà internet");
    ui->Notes->setText("Texte,\nCalcul ou \nPrésentation");
    ui->Discord->setText("Nous\nrejoindre\nsur Discord");
    ui->Music->setText("Ecouter de\nla musique\nsur Jamendo");

    ui->Calculatrice->setIconSize(QS1);
    ui->Email->setIconSize(QS1);
    ui->Internet->setIconSize(QS1);
    ui->Notes->setIconSize(QS1);
    ui->Discord->setIconSize(QS1);
    ui->Music->setIconSize(QS1);
    fontC.setPointSize(fSize1);
    fontE.setPointSize(fSize1);
    fontI.setPointSize(fSize1);
    fontN.setPointSize(fSize1);
    fontD.setPointSize(fSize1);
    fontM.setPointSize(fSize1);
    ui->Calculatrice->setFont(fontC);
    ui->Email->setFont(fontE);
    ui->Internet->setFont(fontI);
    ui->Notes->setFont(fontN);
    ui->Discord->setFont(fontD);
    ui->Music->setFont(fontM);

    ui->Calculatrice->setStyleSheet("background-color: rgb(41, 182, 71);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
    ui->Email->setStyleSheet("background-color: rgb(240, 195, 26);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
    ui->Internet->setStyleSheet("background-color: rgb(156, 113, 77);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
    ui->Notes->setStyleSheet("background-color: rgb(0, 88, 132);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
    ui->Discord->setStyleSheet("background-color: rgb(114, 137, 218);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
    ui->Music->setStyleSheet("background-color: rgb(222, 89, 144);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");

    ui->Calculatrice->installEventFilter(this);
    ui->Email->installEventFilter(this);
    ui->Internet->installEventFilter(this);
    ui->Notes->installEventFilter(this);
    ui->Discord->installEventFilter(this);
    ui->Music->installEventFilter(this);

    music.load(QUrl("https://www.jamendo.com/start"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject* watched, QEvent* event)
{
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Calculatrice && event->type() == QEvent::HoverEnter) {
            ui->Calculatrice->setIcon(QIcon(":/Images/0-Categorie/calculator-color.svg"));
            ui->Calculatrice->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 40px;border:  16PX solid rgb(41, 182, 71);color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Ouvrir la calculatrice.\"");
            ui->Calculatrice->setIconSize(QS2);
            fontC.setPointSize(fSize2);
            ui->Calculatrice->setFont(fontC);
        }
        if (watched == ui->Calculatrice && event->type() == QEvent::HoverLeave) {
            ui->Calculatrice->setIcon(QIcon(":/Images/0-Categorie/calculator.svg"));
            ui->Calculatrice->setStyleSheet("background-color: rgb(41, 182, 71);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            play=false;
            ui->Calculatrice->setIconSize(QS1);
            fontC.setPointSize(fSize1);
            ui->Calculatrice->setFont(fontC);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Email && event->type() == QEvent::HoverEnter) {
            ui->Email->setIcon(QIcon(":/Images/0-Categorie/envelope-color.svg"));
            ui->Email->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 40px;border:  16PX solid rgb(240, 195, 26);color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Ouvrir le client email.\"");
            ui->Email->setIconSize(QS2);
            fontE.setPointSize(fSize2);
            ui->Email->setFont(fontE);
        }
        if (watched == ui->Email && event->type() == QEvent::HoverLeave) {
            ui->Email->setIcon(QIcon(":/Images/0-Categorie/envelope.svg"));
            ui->Email->setStyleSheet("background-color: rgb(240, 195, 26);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            play=false;
            ui->Email->setIconSize(QS1);
            fontE.setPointSize(fSize1);
            ui->Email->setFont(fontE);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Internet && event->type() == QEvent::HoverEnter) {
            ui->Internet->setIcon(QIcon(":/Images/0-Categorie/globe-africa-color.svg"));
            ui->Internet->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 40px;border:  16PX solid rgb(156, 113, 77);color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Ouvrir le navigateur internet.\"");
            ui->Internet->setIconSize(QS2);
            fontI.setPointSize(fSize2);
            ui->Internet->setFont(fontI);
        }
        if (watched == ui->Internet && event->type() == QEvent::HoverLeave) {
            ui->Internet->setIcon(QIcon(":/Images/0-Categorie/globe-africa.svg"));
            ui->Internet->setStyleSheet("background-color: rgb(156, 113, 77);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            play=false;
            ui->Internet->setIconSize(QS1);
            fontI.setPointSize(fSize1);
            ui->Internet->setFont(fontI);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Notes && event->type() == QEvent::HoverEnter) {
            ui->Notes->setIcon(QIcon(":/Images/0-Categorie/clipboard-color.svg"));
            ui->Notes->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 40px;border:  16PX solid rgb(0, 88, 132);color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Ouvrir la suite bureautique.\"");
            ui->Notes->setIconSize(QS2);
            fontN.setPointSize(fSize2);
            ui->Notes->setFont(fontN);
        }
        if (watched == ui->Notes && event->type() == QEvent::HoverLeave) {
            ui->Notes->setIcon(QIcon(":/Images/0-Categorie/clipboard.svg"));
            ui->Notes->setStyleSheet("background-color: rgb(0, 88, 132);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            play=false;
            ui->Notes->setIconSize(QS1);
            fontN.setPointSize(fSize1);
            ui->Notes->setFont(fontN);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Discord && event->type() == QEvent::HoverEnter) {
            ui->Discord->setIcon(QIcon(":/Images/0-Categorie/discord-color.svg"));
            ui->Discord->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 40px;border:  16PX solid rgb(114, 137, 218);color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Discuter grâce à discord.\"");
            ui->Discord->setIconSize(QS2);
            fontD.setPointSize(fSize2);
            ui->Discord->setFont(fontD);
        }
        if (watched == ui->Discord && event->type() == QEvent::HoverLeave) {
            ui->Discord->setIcon(QIcon(":/Images/0-Categorie/discord.svg"));
            ui->Discord->setStyleSheet("background-color: rgb(114, 137, 218);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            play=false;
            ui->Discord->setIconSize(QS1);
            fontD.setPointSize(fSize1);
            ui->Discord->setFont(fontD);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Music && event->type() == QEvent::HoverEnter) {
            ui->Music->setIcon(QIcon(":/Images/0-Categorie/music-color.svg"));
            ui->Music->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 40px;border:  16PX solid rgb(222, 89, 144);color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Écouter de la musique avec Jamendo.\"");
            ui->Music->setIconSize(QS2);
            fontM.setPointSize(fSize2);
            ui->Music->setFont(fontM);
        }
        if (watched == ui->Music && event->type() == QEvent::HoverLeave) {
            ui->Music->setIcon(QIcon(":/Images/0-Categorie/music.svg"));
            ui->Music->setStyleSheet("background-color: rgb(222, 89, 144);border-radius: 10px;border:  8PX solid red;color : #FFFFFF;");
            player->pause();
            player->stop();
            m_process->kill();
            play=false;
            ui->Music->setIconSize(QS1);
            fontM.setPointSize(fSize1);
            ui->Music->setFont(fontM);
        }
    }
    if (!play) {
        player->pause();
        player->stop();
        player->setVolume(50);
        player->setMedia(QUrl("file:// + env.value(\"HOME\") + \"/.local/share/dvkbuntu/sonEnCours.wav\"\""));
        player->play();
        play=true;
    }
    return false;
}

void MainWindow::on_Calculatrice_clicked()
{
    KCalculatrice->start("/usr/bin/kcalc");
}

void MainWindow::on_Email_clicked()
{
    screen = QGuiApplication::primaryScreen();
    screenGeometry = screen->geometry();
    std::string height = std::to_string(screenGeometry.height());
    std::string width = std::to_string(screenGeometry.width());
    std::string cmd = "/usr/bin/thunderbird -foreground -height" + height + "-width" + width + "";
    QCMD = QString::fromStdString(cmd);
    email->start(QCMD);
}

void MainWindow::on_Notes_clicked()
{
    screen = QGuiApplication::primaryScreen();
    screenGeometry = screen->geometry();
    std::string height = std::to_string(screenGeometry.height());
    std::string width = std::to_string(screenGeometry.width());
    std::string cmd = "/usr/bin/onlyoffice-desktopeditors -foreground -height" + height + "-width" + width + "";
    QCMD = QString::fromStdString(cmd);
    office->start(QCMD);
}

void MainWindow::on_Internet_clicked()
{
    screen = QGuiApplication::primaryScreen();
    screenGeometry = screen->geometry();
    std::string height = std::to_string(screenGeometry.height());
    std::string width = std::to_string(screenGeometry.width());
    std::string cmd = "/usr/bin/firefox -foreground -new-tab file:///home/Accueil_local/index.html -height" + height + "-width" + width + "";
    QCMD = QString::fromStdString(cmd);
    web->start(QCMD);
}

void MainWindow::on_Music_clicked()
{
    music.setWindowState(Qt::WindowMaximized);
    music.setWindowTitle("EasyMenu Jamendo");
    music.show();
}

void MainWindow::on_Discord_clicked()
{
    DiscordLauncher->start("/usr/bin/discord");
}
