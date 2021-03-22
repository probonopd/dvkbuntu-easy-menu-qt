cmake_minimum_required(VERSION 3.5)

project(dvkbuntu-easy-menu-qt LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt5 COMPONENTS Core REQUIRED)
find_package(QT NAMES Qt5 COMPONENTS Gui REQUIRED)
find_package(QT NAMES Qt5 COMPONENTS Svg REQUIRED)
find_package(QT NAMES Qt5 COMPONENTS WebEngineWidgets REQUIRED)
find_package(QT NAMES Qt5 COMPONENTS Multimedia REQUIRED)
find_package(QT NAMES Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Gui REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Svg REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS WebEngineWidgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Multimedia REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
        src/main.cpp
        src/mainwindow.cpp
        src/mainwindow.h
        src/mainwindow.ui
        src/controlmenu.cpp
        src/controlmenu.h
        src/controlmenu.ui
        src/controlmenumain.cpp
        src/controlmenumain.h
        src/controlmenumain.ui
        src/options.cpp
        src/options.h
        src/options.ui
        src/resource.qrc
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(dvkbuntu-easy-menu-qt
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(dvkbuntu-easy-menu-qt SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(dvkbuntu-easy-menu-qt
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(dvkbuntu-easy-menu-qt
        PRIVATE
        Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Gui
        Qt${QT_VERSION_MAJOR}::Svg
        Qt${QT_VERSION_MAJOR}::WebEngineWidgets
        Qt${QT_VERSION_MAJOR}::Multimedia
        Qt${QT_VERSION_MAJOR}::Widgets)

