/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QToolButton *Notes;
    QToolButton *Music;
    QToolButton *Email;
    QToolButton *Internet;
    QToolButton *Discord;
    QToolButton *Calculatrice;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 600));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        MainWindow->setPalette(palette);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("dvkbuntu-easy-menu");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(3.000000000000000);
        MainWindow->setToolTipDuration(0);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setToolTipDuration(-1);
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridWidget = new QWidget(centralwidget);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        sizePolicy.setHeightForWidth(gridWidget->sizePolicy().hasHeightForWidth());
        gridWidget->setSizePolicy(sizePolicy);
        gridWidget->setMaximumSize(QSize(1976, 991));
        gridWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setSpacing(30);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(30, 30, 30, 30);
        Notes = new QToolButton(gridWidget);
        Notes->setObjectName(QString::fromUtf8("Notes"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(Notes->sizePolicy().hasHeightForWidth());
        Notes->setSizePolicy(sizePolicy1);
        Notes->setMinimumSize(QSize(50, 50));
        QPalette palette1;
        QBrush brush4(QColor(253, 253, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush5(QColor(0, 88, 132, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush6(QColor(253, 253, 255, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        QBrush brush7(QColor(109, 109, 111, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        QBrush brush8(QColor(170, 170, 172, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Notes->setPalette(palette1);
        QFont font;
        font.setPointSize(22);
        Notes->setFont(font);
        Notes->setAutoFillBackground(false);
        Notes->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 88, 132);\n"
"border-radius: 20px;\n"
"border:  8PX solid red;\n"
"QLabel { color : white; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/0-Categorie/clipboard.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Notes->setIcon(icon1);
        Notes->setIconSize(QSize(200, 200));
        Notes->setPopupMode(QToolButton::InstantPopup);
        Notes->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Notes->setAutoRaise(true);

        gridLayout->addWidget(Notes, 2, 0, 1, 1);

        Music = new QToolButton(gridWidget);
        Music->setObjectName(QString::fromUtf8("Music"));
        sizePolicy1.setHeightForWidth(Music->sizePolicy().hasHeightForWidth());
        Music->setSizePolicy(sizePolicy1);
        Music->setMinimumSize(QSize(50, 50));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush9(QColor(212, 115, 212, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Music->setPalette(palette2);
        Music->setFont(font);
        Music->setAutoFillBackground(false);
        Music->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 115, 212);\n"
"border-radius: 20px;\n"
"border:  8PX solid red;\n"
"QLabel { color : white; }"));
        Music->setText(QString::fromUtf8("\n"
"Ecouter\n"
"de la musique\n"
"sur Jamendo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/0-Categorie/music.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Music->setIcon(icon2);
        Music->setIconSize(QSize(200, 200));
        Music->setPopupMode(QToolButton::InstantPopup);
        Music->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Music->setAutoRaise(true);

        gridLayout->addWidget(Music, 2, 2, 1, 1);

        Email = new QToolButton(gridWidget);
        Email->setObjectName(QString::fromUtf8("Email"));
        sizePolicy1.setHeightForWidth(Email->sizePolicy().hasHeightForWidth());
        Email->setSizePolicy(sizePolicy1);
        Email->setMinimumSize(QSize(50, 50));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush10(QColor(240, 120, 80, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Email->setPalette(palette3);
        Email->setFont(font);
        Email->setAutoFillBackground(false);
        Email->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 120, 80);\n"
"border-radius: 20px;\n"
"border:  8PX solid red;\n"
"QLabel { color : white; }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/0-Categorie/envelope.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Email->setIcon(icon3);
        Email->setIconSize(QSize(200, 200));
        Email->setPopupMode(QToolButton::InstantPopup);
        Email->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Email->setAutoRaise(true);

        gridLayout->addWidget(Email, 1, 1, 1, 1);

        Internet = new QToolButton(gridWidget);
        Internet->setObjectName(QString::fromUtf8("Internet"));
        Internet->setEnabled(true);
        sizePolicy1.setHeightForWidth(Internet->sizePolicy().hasHeightForWidth());
        Internet->setSizePolicy(sizePolicy1);
        Internet->setMinimumSize(QSize(50, 50));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush11(QColor(88, 70, 55, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Internet->setPalette(palette4);
        Internet->setFont(font);
        Internet->setAutoFillBackground(false);
        Internet->setStyleSheet(QString::fromUtf8("background-color: rgb(88, 70, 55);\n"
"border-radius: 20px;\n"
"border:  8PX solid red;\n"
"QLabel { color : white; }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/0-Categorie/globe-africa.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Internet->setIcon(icon4);
        Internet->setIconSize(QSize(200, 200));
        Internet->setPopupMode(QToolButton::InstantPopup);
        Internet->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Internet->setAutoRaise(true);

        gridLayout->addWidget(Internet, 1, 0, 1, 1);

        Discord = new QToolButton(gridWidget);
        Discord->setObjectName(QString::fromUtf8("Discord"));
        Discord->setEnabled(true);
        sizePolicy1.setHeightForWidth(Discord->sizePolicy().hasHeightForWidth());
        Discord->setSizePolicy(sizePolicy1);
        Discord->setMinimumSize(QSize(50, 50));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush12(QColor(114, 137, 218, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Discord->setPalette(palette5);
        Discord->setFont(font);
        Discord->setAutoFillBackground(false);
        Discord->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 137, 218);\n"
"border-radius: 20px;\n"
"border:  8PX solid red;\n"
"QLabel { color : white; }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/0-Categorie/discord.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Discord->setIcon(icon5);
        Discord->setIconSize(QSize(200, 200));
        Discord->setPopupMode(QToolButton::InstantPopup);
        Discord->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Discord->setAutoRaise(true);

        gridLayout->addWidget(Discord, 1, 2, 1, 1);

        Calculatrice = new QToolButton(gridWidget);
        Calculatrice->setObjectName(QString::fromUtf8("Calculatrice"));
        sizePolicy1.setHeightForWidth(Calculatrice->sizePolicy().hasHeightForWidth());
        Calculatrice->setSizePolicy(sizePolicy1);
        Calculatrice->setMinimumSize(QSize(50, 50));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush13(QColor(41, 182, 71, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Calculatrice->setPalette(palette6);
        Calculatrice->setFont(font);
        Calculatrice->setContextMenuPolicy(Qt::DefaultContextMenu);
        Calculatrice->setAutoFillBackground(false);
        Calculatrice->setStyleSheet(QString::fromUtf8("background-color: rgb(41, 182, 71);\n"
"border-radius: 20px;\n"
"border:  8PX solid red;\n"
"QLabel { color : white; }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/0-Categorie/calculator.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Calculatrice->setIcon(icon6);
        Calculatrice->setIconSize(QSize(200, 200));
        Calculatrice->setPopupMode(QToolButton::InstantPopup);
        Calculatrice->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Calculatrice->setAutoRaise(true);

        gridLayout->addWidget(Calculatrice, 2, 1, 1, 1);


        gridLayout_3->addWidget(gridWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 47));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EasyMenu - Acceuil", nullptr));
        Notes->setText(QApplication::translate("MainWindow", "\n"
"Texte,\n"
"Calcul ou\n"
"Pr\303\251sentation", nullptr));
        Email->setText(QApplication::translate("MainWindow", "\n"
"Gestion\n"
"Email", nullptr));
        Internet->setText(QApplication::translate("MainWindow", "\n"
"Acc\303\251der\n"
"\303\240 Internet", nullptr));
        Discord->setText(QApplication::translate("MainWindow", "\n"
"Venir discuter\n"
"sur Discord ", nullptr));
        Calculatrice->setText(QApplication::translate("MainWindow", "\n"
"Calculatrice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
