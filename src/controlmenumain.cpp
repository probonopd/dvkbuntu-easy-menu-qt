#include "controlmenumain.h"
#include "ui_controlmenumain.h"
#include "options.h"
#include "ui_options.h"
#include <QDesktopWidget>
#include <QTimer>
#include <QWindow>

ControlMenuMain::ControlMenuMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlMenuMain)
{
    ui->setupUi(this);

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
    MainWindow().music->stop();

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
    font.setPointSize(60);
    ui->Horlorge->setFont(font);
    ui->Horlorge->setText(text);
}