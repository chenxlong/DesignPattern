TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += \
    ../Model/threadpool.h

SOURCES += \
    ../Model/main.cpp \
    ../Model/threadpool.cpp


