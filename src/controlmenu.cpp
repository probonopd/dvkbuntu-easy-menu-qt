#include "controlmenu.h"
#include "ui_controlmenu.h"
#include "options.h"
#include "ui_options.h"
#include <QDesktopWidget>
#include <QTimer>

ControlMenu::ControlMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlMenu)
{
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ControlMenu::showTime);
    timer->start(1000);

    showTime();
}

ControlMenu::~ControlMenu()
{
    delete ui;
}

void ControlMenu::on_Fermeture_clicked()
{
    this->parentWidget()->close();
}
void ControlMenu::on_Home_clicked() {
    this->parentWidget()->hide();
}

void ControlMenu::on_Options_clicked() {
    Options *myOptions = new Options();
    myOptions->show();
}

void ControlMenu::showTime()
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