TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/ConcreteFlyweight.cpp \
    ../Model/Flyweight.cpp \
    ../Model/FlyweightFactory.cpp \
    ../Model/UnsharedFlyweight.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/ConcreteFlyweight.h \
    ../Model/Flyweight.h \
    ../Model/FlyweightFactory.h \
    ../Model/UnsharedFlyweight.h
