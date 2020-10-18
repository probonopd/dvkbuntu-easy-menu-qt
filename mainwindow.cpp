#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QMainWindow::setWindowIcon(QIcon("Image/EasyMenu_Icone.svg"));
    ui->setupUi(this);
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
            ui->Calculatrice->setIconSize(QSize(100,100));
            QFont font = ui->Calculatrice->font();
            font.setPointSize(30);
            ui->Calculatrice->setFont(font);
        }
        if (watched == ui->Calculatrice && event->type() == QEvent::HoverLeave) {
            ui->Calculatrice->setIconSize(QSize(200,200));
            QFont font = ui->Calculatrice->font();
            font.setPointSize(22);
            ui->Calculatrice->setFont(font);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Email && event->type() == QEvent::HoverEnter) {
            ui->Email->setIconSize(QSize(100,100));
            QFont font = ui->Email->font();
            font.setPointSize(30);
            ui->Email->setFont(font);
        }
        if (watched == ui->Email && event->type() == QEvent::HoverLeave) {
            ui->Email->setIconSize(QSize(200,200));
            QFont font = ui->Email->font();
            font.setPointSize(22);
            ui->Email->setFont(font);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Internet && event->type() == QEvent::HoverEnter) {
            ui->Internet->setIconSize(QSize(100,100));
            QFont font = ui->Internet->font();
            font.setPointSize(30);
            ui->Internet->setFont(font);
        }
        if (watched == ui->Internet && event->type() == QEvent::HoverLeave) {
            ui->Internet->setIconSize(QSize(200,200));
            QFont font = ui->Internet->font();
            font.setPointSize(22);
            ui->Internet->setFont(font);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Notes && event->type() == QEvent::HoverEnter) {
            ui->Notes->setIconSize(QSize(100,100));
            QFont font = ui->Notes->font();
            font.setPointSize(30);
            ui->Notes->setFont(font);
        }
        if (watched == ui->Notes && event->type() == QEvent::HoverLeave) {
            ui->Notes->setIconSize(QSize(200,200));
            QFont font = ui->Notes->font();
            font.setPointSize(22);
            ui->Notes->setFont(font);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Discord && event->type() == QEvent::HoverEnter) {
            ui->Discord->setIconSize(QSize(100,100));
            QFont font = ui->Discord->font();
            font.setPointSize(30);
            ui->Discord->setFont(font);
        }
        if (watched == ui->Discord && event->type() == QEvent::HoverLeave) {
            ui->Discord->setIconSize(QSize(200,200));
            QFont font = ui->Discord->font();
            font.setPointSize(22);
            ui->Discord->setFont(font);
        }
    }
    if (event->type() != QEvent::WindowDeactivate) {
        if (watched == ui->Music && event->type() == QEvent::HoverEnter) {
            ui->Music->setIconSize(QSize(100,100));
            QFont font = ui->Music->font();
            font.setPointSize(30);
            ui->Music->setFont(font);
        }
        if (watched == ui->Music && event->type() == QEvent::HoverLeave) {
            ui->Music->setIconSize(QSize(200,200));
            QFont font = ui->Music->font();
            font.setPointSize(22);
            ui->Music->setFont(font);
        }
    }
}

void MainWindow::on_Calculatrice_clicked()
{
    KCalculatrice->start("/usr/bin/kcalc");
}

void MainWindow::on_Email_clicked()
{
    EmailWindow.setText("La fonctionnalité de gestion des Emails n'est pas encore fonctionnelle.");
    EmailWindow.exec();
}

void MainWindow::on_Notes_clicked()
{
    PriseDeNotes.setText("La fonctionnalité de prise de notes n'est pas encore fonctionnelle.");
    PriseDeNotes.exec();
}

void MainWindow::on_Internet_clicked()
{
    //view->setAttribute(Qt::WA_DeleteOnClose);
    view->load(QUrl("http://google.com/"));
    view->show();
    //setCentralWidget(view);
}

void MainWindow::on_Music_clicked()
{
    //music->setAttribute(Qt::WA_DeleteOnClose);
    music->load(QUrl("https://www.jamendo.com/start"));
    music->show();
    //setCentralWidget(music);
}

void MainWindow::on_Discord_clicked()
{
    DiscordLauncher->start("/usr/bin/discord");
}
