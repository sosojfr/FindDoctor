#-------------------------------------------------
#
# Project created by QtCreator 2019-02-18T17:28:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyDoctor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    doctorinfo.cpp \
    healthtips.cpp \
    generalinformation.cpp \
    firstaid.cpp \
    medicaldictionary.cpp \
    quickandpreciseadvice.cpp \
    about.cpp \
    finddoctorlocationandsymptoms.cpp

HEADERS  += mainwindow.h \
    doctorinfo.h \
    healthtips.h \
    generalinformation.h \
    firstaid.h \
    medicaldictionary.h \
    quickandpreciseadvice.h \
    about.h \
    finddoctorlocationandsymptoms.h

FORMS    += mainwindow.ui \
    doctorinfo.ui \
    healthtips.ui \
    generalinformation.ui \
    firstaid.ui \
    medicaldictionary.ui \
    quickandpreciseadvice.ui \
    about.ui \
    finddoctorlocationandsymptoms.ui

OTHER_FILES +=

RESOURCES += \
    MyResourceFile.qrc
