QT       += core gui svg webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    dvkbuntu-easy-menu-qt_fr_FR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Images/0-Categorie/calculator.svg \
    Images/0-Categorie/clipboard.svg \
    Images/0-Categorie/discord.svg \
    Images/0-Categorie/envelope.svg \
    Images/0-Categorie/globe-africa.svg \
    Images/0-Categorie/music.svg \
    Images/1-NavigateurWeb/arrow-left.svg \
    Images/1-NavigateurWeb/arrow-right.svg \
    Images/1-NavigateurWeb/home.svg \
    Images/1-NavigateurWeb/print.svg \
    Images/1-NavigateurWeb/star.svg \
    Images/1-NavigateurWeb/sync-alt.svg \
    Images/2-Calculatrice/cogs.svg \
    Images/2-Calculatrice/euro-sign.svg \
    Images/3-PriseDeNotes/copy.svg \
    Images/3-PriseDeNotes/file-alt.svg \
    Images/3-PriseDeNotes/file-export.svg \
    Images/3-PriseDeNotes/file-import.svg \
    Images/3-PriseDeNotes/file.svg \
    Images/3-PriseDeNotes/pen.svg \
    Images/3-PriseDeNotes/plus-square.svg \
    Images/3-PriseDeNotes/print.svg \
    Images/4-Courriel/envelope-open-text.svg \
    Images/4-Courriel/envelope-open.svg \
    Images/4-Courriel/envelope.svg \
    Images/4-Courriel/print.svg \
    Images/EasyMenu_Icone.svg

RESOURCES += \
    resource.qrc
