TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/CommonManager.cpp \
    ../Model/GeneralManager.cpp \
    ../Model/Majordomo.cpp \
    ../Model/Manager.cpp \
    ../Model/Request.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/CommonManager.h \
    ../Model/GeneralManager.h \
    ../Model/Majordomo.h \
    ../Model/Manager.h \
    ../Model/Request.h
