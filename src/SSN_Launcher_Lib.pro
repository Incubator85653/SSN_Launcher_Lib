#-------------------------------------------------
#
# Project created by QtCreator 2017-11-06T19:05:21
#
#-------------------------------------------------

QT       -= gui

TARGET = ssn_launcher_lib
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ssn_launcher_lib.cpp

HEADERS += ssn_launcher_lib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

# EliteGaming2017
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../EliteGaming2017/build/release/ -lEliteGaming2017
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../EliteGaming2017/build/debug/ -lEliteGaming2017

INCLUDEPATH += $$PWD/../../EliteGaming2017/src
DEPENDPATH += $$PWD/../../EliteGaming2017/src

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../EliteGaming2017/build/release/libEliteGaming2017.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../EliteGaming2017/build/debug/libEliteGaming2017.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../EliteGaming2017/build/release/EliteGaming2017.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../EliteGaming2017/build/debug/EliteGaming2017.lib
