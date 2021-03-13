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
    QProcess *m_process = new QProcess;
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
    QMediaPlayer *player = new QMediaPlayer;
    QMediaPlaylist *playlist = new QMediaPlaylist;

private:
    Ui::MainWindow *ui;
    QString QCMD;
    QProcess *KCalculatrice = new QProcess;
    QProcess *DiscordLauncher = new QProcess;
    QProcess *web = new QProcess;
    QProcess *office = new QProcess;
    QProcess *email = new QProcess;
    QWebEngineView music;// = new QWebEngineView();
    bool play = false;
    QString program;
    QString PIDtxt;
    QProcess WidFromPid;
    WId myWinID;
    int myPid;
    QWindow *ma_fenetre;
    QWidget *myWidgetKCalc;
    QWidget *myWidgetemail;
    QWidget *myWidgetOffice;
    QWidget *myWidgetweb;
    QWidget *myWidgetDiscord;


private slots:
    virtual bool eventFilter(QObject* watched, QEvent* event);
    void on_Calculatrice_clicked();
    void on_Email_clicked();
    void on_Notes_clicked();
    void on_Internet_clicked();
    void on_Music_clicked();
    void on_Discord_clicked();
    static void handleStateChanged(QProcess *procss, QWidget *widget);
};

#endif // MAINWINDOW_H
