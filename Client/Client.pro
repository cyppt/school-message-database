QT       += core gui sql
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cglobal.cpp \
    main.cpp \
    mainwindow.cpp \
    search.cpp \
    widget_change.cpp \
    widget_resign.cpp \
    widget_upload.cpp

HEADERS += \
    cglobal.h \
    mainwindow.h \
    search.h \
    widget_change.h \
    widget_resign.h \
    widget_upload.h

FORMS += \
    mainwindow.ui \
    search.ui \
    widget_change.ui \
    widget_resign.ui \
    widget_upload.ui

TRANSLATIONS += \
    version1_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    login.qrc
