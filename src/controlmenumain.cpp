#include "controlmenumain.h"
#include "ui_controlmenumain.h"
#include <QDesktopWidget>
#include <QTimer>

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
    MainWindow().QuitApp();
}
void ControlMenuMain::on_Home_clicked() {

}

void ControlMenuMain::on_Options_clicked() {

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