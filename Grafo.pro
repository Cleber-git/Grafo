QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Grafos/Fábrica/fabricadegrafos.cpp \
    Grafos/grafo.cpp \
    Grafos/grafomultigrafo.cpp \
    Grafos/grafondirecionado.cpp \
    main.cpp \
    ui/mainwindow.cpp

HEADERS += \
    Grafos/Abstract/abstract_grafo.h \
    Grafos/Fábrica/fabricadegrafos.h \
    Grafos/grafo.h \
    Grafos/grafomultigrafo.h \
    Grafos/grafondirecionado.h \
    ui/mainwindow.h

FORMS += \
    ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
