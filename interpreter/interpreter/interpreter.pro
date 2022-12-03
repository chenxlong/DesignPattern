TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/AbstractExpression.cpp \
    ../Model/Note.cpp \
    ../Model/PlayContext.cpp \
    ../Model/Scale.cpp \
    ../Model/Speed.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/AbstractExpression.h \
    ../Model/Note.h \
    ../Model/PlayContext.h \
    ../Model/Scale.h \
    ../Model/Speed.h
