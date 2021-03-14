/********************************************************************************
** Form generated from reading UI file 'controlmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLMENU_H
#define UI_CONTROLMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlMenu
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *Fermeture;
    QLabel *Horlorge;
    QSpacerItem *verticalSpacer;
    QToolButton *Home;
    QToolButton *Options;

    void setupUi(QWidget *ControlMenu)
    {
        if (ControlMenu->objectName().isEmpty())
            ControlMenu->setObjectName(QString::fromUtf8("ControlMenu"));
        ControlMenu->resize(400, 300);
        verticalLayoutWidget = new QWidget(ControlMenu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 391, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Fermeture = new QToolButton(verticalLayoutWidget);
        Fermeture->setObjectName(QString::fromUtf8("Fermeture"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/1-NavigateurWeb/close-alt.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Fermeture->setIcon(icon);

        verticalLayout->addWidget(Fermeture);

        Horlorge = new QLabel(verticalLayoutWidget);
        Horlorge->setObjectName(QString::fromUtf8("Horlorge"));

        verticalLayout->addWidget(Horlorge);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Home = new QToolButton(verticalLayoutWidget);
        Home->setObjectName(QString::fromUtf8("Home"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/1-NavigateurWeb/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setIcon(icon1);

        verticalLayout->addWidget(Home);

        Options = new QToolButton(verticalLayoutWidget);
        Options->setObjectName(QString::fromUtf8("Options"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/2-Calculatrice/cogs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Options->setIcon(icon2);

        verticalLayout->addWidget(Options);


        retranslateUi(ControlMenu);

        QMetaObject::connectSlotsByName(ControlMenu);
    } // setupUi

    void retranslateUi(QWidget *ControlMenu)
    {
        ControlMenu->setWindowTitle(QApplication::translate("ControlMenu", "Form", nullptr));
        Fermeture->setText(QApplication::translate("ControlMenu", "...", nullptr));
        Horlorge->setText(QApplication::translate("ControlMenu", "TextLabel", nullptr));
        Home->setText(QApplication::translate("ControlMenu", "...", nullptr));
        Options->setText(QApplication::translate("ControlMenu", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlMenu: public Ui_ControlMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLMENU_H
