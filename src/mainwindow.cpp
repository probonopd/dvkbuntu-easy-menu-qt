#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "controlmenu.h"
#include "ui_controlmenu.h"
#include "controlmenumain.h"
#include "ui_controlmenumain.h"
#include <QDesktopWidget>
#include <string>
#include <QRect>
#include <QScreen>
#include <QWindow>
#include <QTextStream>
#include <QDockWidget>
#include <QTreeWidget>
#include <map>
#include <QHBoxLayout>
#include <QGuiApplication>
#include <QSettings>

std::map<std::string, QString> QStringMap;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QMainWindow::setWindowIcon(QIcon("../Images/EasyMenu_Icone.svg"));

    ui->setupUi(this);

    screens = QGuiApplication::screens();
    screen = screens.first();
    screenGeometry = screen->geometry();
    HEIGHT = screenGeometry.height();
    WIDTH = screenGeometry.width();
    WIDTHCONTROL = int(WIDTH * 720 / 3840);
    WIDTHMAIN = WIDTH -WIDTHCONTROL;
    FenG = new QWidget;
    menuG = new ControlMenuMain();
    WId WidFromPid = this->winId();
    ma_fenetreG = QWindow::fromWinId(WidFromPid);
    FenApp = QWidget::createWindowContainer(ma_fenetreG);
    FenApp->setMinimumWidth(WIDTHMAIN);
    FenApp->setMinimumHeight(HEIGHT);
    myLayout = new QHBoxLayout(FenG);
    menuG->setMaximumWidth(WIDTHCONTROL);
    menuG->setMaximumHeight(HEIGHT);
    myLayout->addWidget(FenApp);
    myLayout->addWidget(menuG);
    FenG->showFullScreen();

    fontC = ui->Calculatrice->font();
    fontE = ui->Email->font();
    fontI = ui->Internet->font();
    fontN = ui->Notes->font();
    fontD = ui->Discord->font();
    fontM = ui->Music->font();

    double dpi = QGuiApplication::primaryScreen()->physicalDotsPerInch();
    QS1 = QSize((int)(HEIGHT*.3),(int)(HEIGHT*.3));
    fSize1 = (int)((21*HEIGHT/2160)*72/dpi);
    QS2 = QSize((int)(HEIGHT*.05),(int)(HEIGHT*.05));
    fSize2 = (int)((120*HEIGHT/2160)*72/dpi);

    QProcess GetValue;
    GetValue.start("cat \"" + env.value("HOME") +"/.easymenu/MusiqueService\"");
    GetValue.waitForFinished(-1);
    QString ServiceMusiqueString = GetValue.readAllStandardOutput();
    ServiceMusique = ServiceMusiqueString.toInt();

    QString musicText;

    switch ( ServiceMusique )
    {
        case 1:
            musicText = "Ecouter de\nla musique\nsur YouTube";
            music->load(QUrl("https://www.youtube.com/"));
            break;
        case 2:
            musicText = "Ecouter de\nla musique\nsur Deezer";
            music->load(QUrl("https://www.deezer.com/fr/"));
            break;
        default:
            musicText = "Ecouter de\nla musique\nsur Jamendo";
            music->load(QUrl("https://www.jamendo.com/start"));
    }

    QString calculatriceText = "Calculatrice";
    QString emailText = "Gestion \ne-mail";
    QString internetText = "Accédez\nà internet";
    QString notesText = "Texte,\nCalcul ou \nPrésentation";
    QString discordText = "Nous\nrejoindre\nsur Discord";

    QStringMap["Calculatrice"] = calculatriceText;
    QStringMap["Email"] = emailText;
    QStringMap["Internet"] = internetText;
    QStringMap["Notes"] = notesText;
    QStringMap["Discord"] = discordText;
    QStringMap["Music"] = musicText;

    ui->Calculatrice->setText("");
    ui->Email->setText("");
    ui->Internet->setText("");
    ui->Notes->setText("");
    ui->Discord->setText("");
    ui->Music->setText("");

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

    ui->Calculatrice->setStyleSheet("background-color: rgb(41, 182, 71);border-radius: 10px;border:  8PX solid red;color : white;");
    ui->Email->setStyleSheet("background-color: rgb(240, 120, 80);border-radius: 10px;border:  8PX solid red;color : white;");
    ui->Internet->setStyleSheet("background-color: rgb(88, 70, 55);border-radius: 10px;border:  8PX solid red;color : white;");
    ui->Notes->setStyleSheet("background-color: rgb(0, 88, 132);border-radius: 10px;border:  8PX solid red;color : white;");
    ui->Discord->setStyleSheet("background-color: rgb(114, 137, 218);border-radius: 10px;border:  8PX solid red;color : white;");
    ui->Music->setStyleSheet("background-color: rgb(212, 115, 212);border-radius: 10px;border:  8PX solid red;color : white;");

    ui->Calculatrice->installEventFilter(this);
    ui->Email->installEventFilter(this);
    ui->Internet->installEventFilter(this);
    ui->Notes->installEventFilter(this);
    ui->Discord->installEventFilter(this);
    ui->Music->installEventFilter(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject* watched, QEvent* event)
{
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Calculatrice && event->type() == QEvent::HoverEnter) {
            ui->Calculatrice->setText(QStringMap.at("Calculatrice"));
            ui->Calculatrice->setIcon(QIcon(":/Images/0-Categorie/calculator-color.svg"));
            ui->Calculatrice->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 10px;border:  16PX solid rgb(41, 182, 71);color : white;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Ouvrir la calculatrice.\"");
            ui->Calculatrice->setIconSize(QS2);
            fontC.setPointSize(fSize2);
            ui->Calculatrice->setFont(fontC);
        }
        if (watched == ui->Calculatrice && event->type() == QEvent::HoverLeave) {
            ui->Calculatrice->setText("");
            ui->Calculatrice->setIcon(QIcon(":/Images/0-Categorie/calculator.svg"));
            ui->Calculatrice->setStyleSheet("background-color: rgb(41, 182, 71);border-radius: 10px;border:  8PX solid red;color : white;");
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
            ui->Email->setText(QStringMap.at("Email"));
            ui->Email->setIcon(QIcon(":/Images/0-Categorie/envelope-color.svg"));
            ui->Email->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 10px;border:  16PX solid rgb(240, 120, 80);color : white;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Ouvrir le client email.\"");
            ui->Email->setIconSize(QS2);
            fontE.setPointSize(fSize2);
            ui->Email->setFont(fontE);
        }
        if (watched == ui->Email && event->type() == QEvent::HoverLeave) {
            ui->Email->setText("");
            ui->Email->setIcon(QIcon(":/Images/0-Categorie/envelope.svg"));
            ui->Email->setStyleSheet("background-color: rgb(240, 120, 80);border-radius: 10px;border:  8PX solid red;color : white;");
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
            ui->Internet->setText(QStringMap.at("Internet"));
            ui->Internet->setIcon(QIcon(":/Images/0-Categorie/globe-africa-color.svg"));
            ui->Internet->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 10px;border:  16PX solid rgb(88, 70, 55);color : white;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Ouvrir le navigateur internet.\"");
            ui->Internet->setIconSize(QS2);
            fontI.setPointSize(fSize2);
            ui->Internet->setFont(fontI);
        }
        if (watched == ui->Internet && event->type() == QEvent::HoverLeave) {
            ui->Internet->setText("");
            ui->Internet->setIcon(QIcon(":/Images/0-Categorie/globe-africa.svg"));
            ui->Internet->setStyleSheet("background-color: rgb(88, 70, 55);border-radius: 10px;border:  8PX solid red;color : white;");
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
            ui->Notes->setText(QStringMap.at("Notes"));
            ui->Notes->setIcon(QIcon(":/Images/0-Categorie/clipboard-color.svg"));
            ui->Notes->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 10px;border:  16PX solid rgb(0, 88, 132);color : white;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Ouvrir la suite bureautique.\"");
            ui->Notes->setIconSize(QS2);
            fontN.setPointSize(fSize2);
            ui->Notes->setFont(fontN);
        }
        if (watched == ui->Notes && event->type() == QEvent::HoverLeave) {
            ui->Notes->setText("");
            ui->Notes->setIcon(QIcon(":/Images/0-Categorie/clipboard.svg"));
            ui->Notes->setStyleSheet("background-color: rgb(0, 88, 132);border-radius: 10px;border:  8PX solid red;color : white;");
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
            ui->Discord->setText(QStringMap.at("Discord"));
            ui->Discord->setIcon(QIcon(":/Images/0-Categorie/discord-color.svg"));
            ui->Discord->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 10px;border:  16PX solid rgb(114, 137, 218);color : white;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"Discuter grâce à discord.\"");
            ui->Discord->setIconSize(QS2);
            fontD.setPointSize(fSize2);
            ui->Discord->setFont(fontD);
        }
        if (watched == ui->Discord && event->type() == QEvent::HoverLeave) {
            ui->Discord->setText("");
            ui->Discord->setIcon(QIcon(":/Images/0-Categorie/discord.svg"));
            ui->Discord->setStyleSheet("background-color: rgb(114, 137, 218);border-radius: 10px;border:  8PX solid red;color : white;");
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
            ui->Music->setText(QStringMap.at("Music"));
            ui->Music->setIcon(QIcon(":/Images/0-Categorie/music-color.svg"));
            ui->Music->setStyleSheet("background-color: rgb(0, 0, 0);border-radius: 10px;border:  16PX solid rgb(212, 115, 212);color : white;");
            player->pause();
            player->stop();
            m_process->kill();
            m_process->start("createWaveFromItem \"" + QStringMap.at("Music") + "\"");
            ui->Music->setIconSize(QS2);
            fontM.setPointSize(fSize2);
            ui->Music->setFont(fontM);
        }
        if (watched == ui->Music && event->type() == QEvent::HoverLeave) {
            ui->Music->setText("");
            ui->Music->setIcon(QIcon(":/Images/0-Categorie/music.svg"));
            ui->Music->setStyleSheet("background-color: rgb(212, 115, 212);border-radius: 10px;border:  8PX solid red;color : white;");
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

uint64_t hexToInt(QString str){
    std::string std_str = str.toUtf8().constData();
    uint64_t n=0;
    for(int i=std_str.find('x')+1; i < std_str.length(); ++i){
        char c = std_str[i];
        if('0' <= c and c <= '9') c -= '0';
        else if('a' <= c and c <= 'f') c -= 'a'-10;
        else if('A' <= c and c <= 'F') c -= 'A'-10;
        else break;
        n <<= 4;
        n |= (int)c;
    }
    return n;
}

void MainWindow::handleStateChanged(QProcess *procss, QWidget *widget, QWidget *testkill)
{
    if (procss->state() == QProcess::NotRunning)
    {
        widget->close();
        testkill->close();
    }
}

void MainWindow::on_Calculatrice_clicked()
{
    if (KCalculatrice->state() == QProcess::Running) {
        FenC->showFullScreen();
    } else {
        KCalculatrice->start("killall -f kcalc");
        KCalculatrice->waitForFinished(-1);
        KCalculatrice->start("env QT_SCALE_FACTOR=3 /usr/bin/kcalc");
        myPid = KCalculatrice->pid();
        PIDtxt = QString::number(myPid);
        program = "/usr/bin/bash -c \"/usr/bin/WidFromPid " + PIDtxt + " \"";
        QString stdout;
        do {
            WidFromPid.start(program);
            WidFromPid.waitForFinished(-1);
            stdout = WidFromPid.readAllStandardOutput();
            myWinID = hexToInt(stdout);
        } while (not myWinID);
        ma_fenetreC = QWindow::fromWinId(myWinID);
        myWidgetKCalc = QWidget::createWindowContainer(ma_fenetreC);
        myWidgetKCalc->setMinimumWidth(WIDTHMAIN);
        myWidgetKCalc->setMinimumHeight(HEIGHT);
        FenC = new QWidget;
        myLayout = new QHBoxLayout(FenC);
        myLayout->addWidget(myWidgetKCalc);
        menuC = new ControlMenu();
        menuC->setMaximumWidth(WIDTHCONTROL);
        menuC->setMaximumHeight(HEIGHT);
        myLayout->addWidget(menuC);
        FenC->showFullScreen();
    }
    connect(KCalculatrice, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus exitStatus){ handleStateChanged(KCalculatrice, myWidgetKCalc, FenC); });
}

void MainWindow::on_Email_clicked()
{
    if (email->state() == QProcess::Running) {
        FenE->showFullScreen();
    } else {
        email->start("pkill -f trojita");
        email->waitForFinished(-1);
        email->start("/usr/bin/trojita");
        myPid = email->pid();
        PIDtxt = QString::number(myPid);
        program = "/usr/bin/bash -c \"/usr/bin/WidFromPid " + PIDtxt + " \"";
        QString stdout;
        do {
            WidFromPid.start(program);
            WidFromPid.waitForFinished(-1);
            stdout = WidFromPid.readAllStandardOutput();
            myWinID = hexToInt(stdout);
        } while (not myWinID);
        ma_fenetreE = QWindow::fromWinId(myWinID);
        myWidgetemail = QWidget::createWindowContainer(ma_fenetreE);
        myWidgetemail->setMinimumWidth(WIDTHMAIN);
        myWidgetemail->setMinimumHeight(HEIGHT);
        FenE = new QWidget;
        myLayout = new QHBoxLayout(FenE);
        myLayout->addWidget(myWidgetemail);
        menuE = new ControlMenu();
        menuE->setMaximumWidth(WIDTHCONTROL);
        menuE->setMaximumHeight(HEIGHT);
        myLayout->addWidget(menuE);
        FenE->showFullScreen();
    }
    connect(email, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus exitStatus){ handleStateChanged(email, myWidgetemail, FenE); });
}

void MainWindow::on_Notes_clicked()
{
    if (office->state() == QProcess::Running) {
        FenN->showFullScreen();
    } else {
        office->start("pkill -f DesktopEditors");
        office->waitForFinished(-1);
        office->start("/usr/bin/onlyoffice-desktopeditors");
        myPid = office->pid();
        PIDtxt = QString::number(myPid);
        program = "/usr/bin/bash -c \"/usr/bin/WidFromPid " + PIDtxt + " \"";
        QString stdout;
        do {
            WidFromPid.start(program);
            WidFromPid.waitForFinished(-1);
            stdout = WidFromPid.readAllStandardOutput();
            myWinID = hexToInt(stdout);
        } while (not myWinID);
        ma_fenetreN = QWindow::fromWinId(myWinID);
        myWidgetOffice = QWidget::createWindowContainer(ma_fenetreN);
        myWidgetOffice->setMinimumWidth(WIDTHMAIN);
        myWidgetOffice->setMinimumHeight(HEIGHT);
        FenN = new QWidget;
        myLayout = new QHBoxLayout(FenN);
        myLayout->addWidget(myWidgetOffice);
        menuN = new ControlMenu();
        menuN->setMaximumWidth(WIDTHCONTROL);
        menuN->setMaximumHeight(HEIGHT);
        myLayout->addWidget(menuN);
        FenN->showFullScreen();
    }
    connect(office, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus exitStatus){ handleStateChanged(office, myWidgetOffice, FenN); });
}

void MainWindow::on_Internet_clicked()
{
    if (web->state() == QProcess::Running) {
        FenI->showFullScreen();
    } else {
        web->start("pkill -f falkon");
        //web->start("pkill -f sielo-browser");
        web->waitForFinished(-1);

        web->start("env QT_SCALE_FACTOR=2 /usr/bin/falkon -c https://doosearch.sielo.app/search.php");
        //web->start("/usr/bin/sielo-browser");
        myPid = web->pid();
        PIDtxt = QString::number(myPid);
        program = "/usr/bin/bash -c \"/usr/bin/WidFromPid " + PIDtxt + " \"";
        QString stdout;
        do {
            WidFromPid.start(program);
            WidFromPid.waitForFinished(-1);
            stdout = WidFromPid.readAllStandardOutput();
            myWinID = hexToInt(stdout);
        } while (not myWinID);
        ma_fenetreI = QWindow::fromWinId(myWinID);
        myWidgetweb = QWidget::createWindowContainer(ma_fenetreI);
        myWidgetweb->setMinimumWidth(WIDTHMAIN);
        myWidgetweb->setMinimumHeight(HEIGHT);
        FenI = new QWidget;
        myLayout = new QHBoxLayout(FenI);
        myLayout->addWidget(myWidgetweb);
        menuI = new ControlMenu();
        menuI->setMaximumWidth(WIDTHCONTROL);
        menuI->setMaximumHeight(HEIGHT);
        myLayout->addWidget(menuI);
        FenI->showFullScreen();
    }
    connect(web, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus exitStatus){ handleStateChanged(web, myWidgetweb, FenI); });
}

void MainWindow::on_Music_clicked()
{
    if (music->isVisible()) {
        FenM->showFullScreen();
    } else {
        music->setZoomFactor(3);
        music->setMinimumWidth(WIDTHMAIN);
        music->setMinimumHeight(HEIGHT);
        FenM = new QWidget;
        myLayout = new QHBoxLayout(FenM);
        myLayout->addWidget(music);
        menuM = new ControlMenu();
        menuM->setMaximumWidth(WIDTHCONTROL);
        menuM->setMaximumHeight(HEIGHT);
        myLayout->addWidget(menuM);
        FenM->showFullScreen();
    }
}

void MainWindow::on_Discord_clicked()
{
    if (DiscordLauncher->state() == QProcess::Running) {
        FenD->showFullScreen();
    } else {
        DiscordLauncher->start("pkill -f discord");
        DiscordLauncher->waitForFinished(-1);
        DiscordLauncher->start("/usr/bin/discord");
        myPid = DiscordLauncher->pid();
        PIDtxt = QString::number(myPid);
        program = "/usr/bin/bash -c \"/usr/bin/WidFromPid " + PIDtxt + " \"";
        QString stdout;
        do {
            WidFromPid.start(program);
            WidFromPid.waitForFinished(-1);
            stdout = WidFromPid.readAllStandardOutput();
            myWinID = hexToInt(stdout);
        } while (not myWinID);
        ma_fenetreD = QWindow::fromWinId(myWinID);
        myWidgetDiscord = QWidget::createWindowContainer(ma_fenetreD);
        myWidgetDiscord->showFullScreen();
        do {
            WidFromPid.start(program);
            WidFromPid.waitForFinished(-1);
            stdout = WidFromPid.readAllStandardOutput();
            myWinID = hexToInt(stdout);
        } while (myWinID);
        myWidgetDiscord->close();
        do {
            WidFromPid.start(program);
            WidFromPid.waitForFinished(-1);
            stdout = WidFromPid.readAllStandardOutput();
            myWinID = hexToInt(stdout);
        } while (not myWinID);
        ma_fenetreD = QWindow::fromWinId(myWinID);
        myWidgetDiscord = QWidget::createWindowContainer(ma_fenetreD);
        myWidgetDiscord->setMinimumWidth(WIDTHMAIN);
        myWidgetDiscord->setMinimumHeight(HEIGHT);
        FenD = new QWidget;
        myLayout = new QHBoxLayout(FenD);
        myLayout->addWidget(myWidgetDiscord);
        menuD = new ControlMenu();
        menuD->setMaximumWidth(WIDTHCONTROL);
        menuD->setMaximumHeight(HEIGHT);
        myLayout->addWidget(menuD);
        FenD->showFullScreen();
    }
    connect(DiscordLauncher, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            [=](int exitCode, QProcess::ExitStatus exitStatus){ handleStateChanged(DiscordLauncher, myWidgetDiscord, FenD); });
}