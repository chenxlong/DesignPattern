TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/Coffee.cpp \
    ../Model/DoDrinkAbstract.cpp \
    ../Model/Tea.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/Coffee.h \
    ../Model/DoDrinkAbstract.h \
    ../Model/Tea.h
