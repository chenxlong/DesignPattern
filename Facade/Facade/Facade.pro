TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/Facade.cpp \
    ../Model/SubSystemFour.cpp \
    ../Model/SubSystemOne.cpp \
    ../Model/SubSystemThree.cpp \
    ../Model/SubSystemTwo.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/Facade.h \
    ../Model/SubSystemFour.h \
    ../Model/SubSystemOne.h \
    ../Model/SubSystemThree.h \
    ../Model/SubSystemTwo.h
