TEMPLATE = app
TARGET = First_Qt_Project

QT = core gui
greaterThan(QT_MAJOR_VERSION,4): QT += widgets

HEADERS += \
    window.h

SOURCES += \
    window.cpp \
    main.cpp
