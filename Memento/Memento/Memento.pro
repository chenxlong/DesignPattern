TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/GameRole.cpp \
    ../Model/RoleStateCaretaker.cpp \
    ../Model/RoleStateMemento.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/GameRole.h \
    ../Model/RoleStateCaretaker.h \
    ../Model/RoleStateMemento.h
