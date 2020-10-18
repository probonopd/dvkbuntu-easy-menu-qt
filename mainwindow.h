#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>
#include <QMouseEvent>
#include <QProcess>
#include <QWidget>
#include <QMessageBox>
#include <QWebEngineView>

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
    QMessageBox  EmailWindow;
    QMessageBox  NavigateurWeb;
    QMessageBox  PriseDeNotes;


private:
    Ui::MainWindow *ui;
    QProcess *KCalculatrice = new QProcess;
    QProcess *DiscordLauncher = new QProcess;
    QWebEngineView *view = new QWebEngineView();
    QWebEngineView *music = new QWebEngineView();

private slots:
    virtual bool eventFilter(QObject* watched, QEvent* event);
    void on_Calculatrice_clicked();
    void on_Email_clicked();
    void on_Notes_clicked();
    void on_Internet_clicked();
    void on_Music_clicked();
    void on_Discord_clicked();
};
#endif // MAINWINDOW_H
