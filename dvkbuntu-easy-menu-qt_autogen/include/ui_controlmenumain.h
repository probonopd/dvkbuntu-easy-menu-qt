/********************************************************************************
** Form generated from reading UI file 'controlmenumain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLMENUMAIN_H
#define UI_CONTROLMENUMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlMenuMain
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QToolButton *Options;
    QToolButton *Home;
    QSpacerItem *verticalSpacer;
    QLabel *Horlorge;
    QToolButton *Fermeture;

    void setupUi(QWidget *ControlMenuMain)
    {
        if (ControlMenuMain->objectName().isEmpty())
            ControlMenuMain->setObjectName(QString::fromUtf8("ControlMenu"));
        ControlMenuMain->resize(739, 1149);
        gridLayoutWidget = new QWidget(ControlMenuMain);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 708, 1121));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Options = new QToolButton(gridLayoutWidget);
        Options->setObjectName(QString::fromUtf8("Options"));
        Options->setMinimumSize(QSize(200, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/2-Calculatrice/cogs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Options->setIcon(icon);
        Options->setIconSize(QSize(180, 180));

        gridLayout_2->addWidget(Options, 4, 2, 1, 1);

        Home = new QToolButton(gridLayoutWidget);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setMinimumSize(QSize(200, 200));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/1-NavigateurWeb/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon1);
        Home->setIconSize(QSize(180, 180));

        gridLayout_2->addWidget(Home, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(200, 800, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 2, 1, 1);

        Horlorge = new QLabel(gridLayoutWidget);
        Horlorge->setObjectName(QString::fromUtf8("Horlorge"));
        Horlorge->setMinimumSize(QSize(200, 200));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        Horlorge->setFont(font);
        Horlorge->setStyleSheet(QString::fromUtf8("color: red;"));
        Horlorge->setScaledContents(false);
        Horlorge->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Horlorge, 0, 0, 1, 1);

        Fermeture = new QToolButton(gridLayoutWidget);
        Fermeture->setObjectName(QString::fromUtf8("Fermeture"));
        Fermeture->setMinimumSize(QSize(200, 200));
        Fermeture->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/1-NavigateurWeb/close-alt.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Fermeture->setIcon(icon2);
        Fermeture->setIconSize(QSize(180, 180));

        gridLayout_2->addWidget(Fermeture, 0, 2, 1, 1);


        retranslateUi(ControlMenuMain);

        QMetaObject::connectSlotsByName(ControlMenuMain);
    } // setupUi

    void retranslateUi(QWidget *ControlMenuMain)
    {
        ControlMenuMain->setWindowTitle(QApplication::translate("ControlMenuMain", "Form", nullptr));
        Options->setText(QApplication::translate("ControlMenuMain", "...", nullptr));
        Home->setText(QApplication::translate("ControlMenuMain", "...", nullptr));
        Horlorge->setText(QApplication::translate("ControlMenuMain", "TextLabel", nullptr));
        Fermeture->setText(QApplication::translate("ControlMenuMain", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlMenuMain: public Ui_ControlMenuMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLMENUMAIN_H
