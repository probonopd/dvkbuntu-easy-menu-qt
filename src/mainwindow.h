#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>
#include <QMouseEvent>
#include <QProcess>
#include <QWidget>
#include <QMessageBox>
#include <QWebEngineView>
#include <QRect>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QDesktopWidget>
#include <QSettings>
#include "controlmenu.h"
#include "controlmenumain.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QToolButton *Calculatrice;
    QToolButton *Email;
    QToolButton *Internet;
    QToolButton *Notes;
    QToolButton *Discord;
    QToolButton *Music;
    int ServiceMusique;
    QWindow* ma_fenetreG;
    QWindow* ma_fenetreC;
    QWindow* ma_fenetreE;
    QWindow* ma_fenetreI;
    QWindow* ma_fenetreN;
    QWindow* ma_fenetreD;
    QWidget *FenG;
    QWidget *FenC;
    QWidget *FenE;
    QWidget *FenI;
    QWidget *FenN;
    QWidget *FenD;
    QWidget *FenM;
    QList<QScreen*> screens;
    QScreen *screen;
    QRect screenGeometry;
    QFont fontC;
    QFont fontE;
    QFont fontI;
    QFont fontN;
    QFont fontD;
    QFont fontM;
    QSize QS1;
    int fSize1;
    QSize QS2;
    int fSize2;
    int HEIGHT;
    qreal WIDTH;
    int WIDTHCONTROL;
    int WIDTHMAIN;
    QProcess *m_process = new QProcess;
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
    QMediaPlayer *player = new QMediaPlayer;
    QMediaPlaylist *playlist = new QMediaPlaylist;
    QWidget* menuG;
    QWidget* menuC;
    QWidget* menuE;
    QWidget* menuI;
    QWidget* menuN;
    QWidget* menuD;
    QWidget* menuM;
    QProcess *KCalculatrice = new QProcess;
    QProcess *DiscordLauncher = new QProcess;
    QProcess *web = new QProcess;
    QProcess *office = new QProcess;
    QProcess *email = new QProcess;
    QWebEngineView *music = new QWebEngineView;
    QString myScale;
    QString myScale2;

private:
    Ui::MainWindow *ui;
    bool play = false;
    QString program;
    QString PIDtxt;
    QProcess WidFromPid;
    WId myWinID;
    int myPid;
    QWidget* myWidgetKCalc;
    QWidget* myWidgetemail;
    QWidget* myWidgetOffice;
    QWidget* myWidgetweb;
    QWidget* myWidgetDiscord;
    QLayout *myLayout;
    QWidget *FenApp;


private slots:
    virtual bool eventFilter(QObject* watched, QEvent* event);
    void on_Calculatrice_clicked();
    void on_Email_clicked();
    void on_Notes_clicked();
    void on_Internet_clicked();
    void on_Music_clicked();
    void on_Discord_clicked();
    static void handleStateChanged(QProcess *procss, QWidget *widget, QWidget *killtest);
};

#endif // MAINWINDOW_H
