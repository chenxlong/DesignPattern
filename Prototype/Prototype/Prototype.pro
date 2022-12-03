TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/ConcreteResume.cpp \
    ../Model/ResumePrototype.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/ConcreteResume.h \
    ../Model/ResumePrototype.h
