#include "controlmenumain.h"
#include "ui_controlmenumain.h"
#include "options.h"
#include "ui_options.h"
#include <QDesktopWidget>
#include <QTimer>
#include <QWindow>
#include <QGuiApplication>
#include <QRect>
#include <QScreen>
#include <string>
#include <QTextStream>
#include <QDockWidget>
#include <QTreeWidget>
#include <map>
#include <QSettings>

ControlMenuMain::ControlMenuMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlMenuMain)
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

    ui->Fermeture->setMaximumWidth(sizeButton);
    ui->Fermeture->setMaximumHeight(sizeButton);
    ui->Fermeture->setIconSize(QSize(sizeButton, sizeButton));

    ui->Home->setMaximumWidth(sizeButton);
    ui->Home->setMaximumHeight(sizeButton);
    ui->Home->setIconSize(QSize(sizeButton, sizeButton));

    ui->Options->setMaximumWidth(sizeButton);
    ui->Options->setMaximumHeight(sizeButton);
    ui->Options->setIconSize(QSize(sizeButton, sizeButton));

    ui->PowerOff->setMaximumWidth(sizeButton);
    ui->PowerOff->setMaximumHeight(sizeButton);
    ui->PowerOff->setIconSize(QSize(sizeButton, sizeButton));

    int Size = (int)((1920 * 1920 * dpi) / WIDTH);

    ui->Horlorge->setMaximumWidth(Size);

    ui->gridLayout->setColumnMinimumWidth(1,Size);

    WIDTHCONTROL = int(WIDTH * 720 / 3840 - 50);

    ui->gridWidget->resize(WIDTHCONTROL, HEIGHT - 50);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ControlMenuMain::showTime);
    timer->start(1000);

    showTime();
}

ControlMenuMain::~ControlMenuMain()
{
    delete ui;
}

void ControlMenuMain::on_Fermeture_clicked()
{
    QProcess *killMeThat = new QProcess;

    killMeThat->start("pkill -f DesktopEditors");
    killMeThat->waitForFinished(-1);
    killMeThat->start("pkill -f trojita");
    killMeThat->waitForFinished(-1);
    killMeThat->start("pkill -f kcalc");
    killMeThat->waitForFinished(-1);
    killMeThat->start("pkill -f falkon");
    killMeThat->waitForFinished(-1);
    killMeThat->start("pkill -f discord");
    killMeThat->waitForFinished(-1);

    MainWindow().ma_fenetreC->destroy();
    MainWindow().ma_fenetreE->destroy();
    MainWindow().ma_fenetreI->destroy();
    MainWindow().Music->close();
    MainWindow().ma_fenetreN->destroy();
    MainWindow().ma_fenetreD->destroy();
    MainWindow().ma_fenetreG->destroy();
    MainWindow().FenC->close();
    MainWindow().FenE->close();
    MainWindow().FenI->close();
    MainWindow().FenM->close();
    MainWindow().FenN->close();
    MainWindow().FenD->close();
    MainWindow().FenG->close();
}

void ControlMenuMain::on_Home_clicked() {

}

void ControlMenuMain::on_Options_clicked() {
    Options *myOptions = new Options();
    myOptions->show();
}

void ControlMenuMain::on_PowerOff_clicked() {
    QProcess Extinction;
    Extinction.startDetached("shutdown -P now");
}

void ControlMenuMain::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    QFont font;
    font.setPointSize(fSize2);

    ui->Horlorge->setFont(font);
    ui->Horlorge->setText(text);
}