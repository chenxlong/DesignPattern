TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/AfternoonState.cpp \
    ../Model/EveningState.cpp \
    ../Model/ForenoonState.cpp \
    ../Model/NoonState.cpp \
    ../Model/RestState.cpp \
    ../Model/SleepingState.cpp \
    ../Model/State.cpp \
    ../Model/Work.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/AfternoonState.h \
    ../Model/EveningState.h \
    ../Model/ForenoonState.h \
    ../Model/NoonState.h \
    ../Model/RestState.h \
    ../Model/SleepingState.h \
    ../Model/State.h \
    ../Model/Work.h
