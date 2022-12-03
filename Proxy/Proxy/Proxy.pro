TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/Girl.cpp \
    ../Model/IGiveGift.cpp \
    ../Model/Proxy.cpp \
    ../Model/Pursuit.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/Girl.h \
    ../Model/IGiveGift.h \
    ../Model/Proxy.h \
    ../Model/Pursuit.h
