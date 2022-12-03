TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/Center.cpp \
    ../Model/ForeignCenter.cpp \
    ../Model/ForeignCenterAdapter.cpp \
    ../Model/Forwards.cpp \
    ../Model/PlayerTarget.cpp \
    ../Model/main.cpp \
    ../Model/utils.cpp

HEADERS += \
    ../Model/Center.h \
    ../Model/ForeignCenter.h \
    ../Model/ForeignCenterAdapter.h \
    ../Model/Forwards.h \
    ../Model/PlayerTarget.h \
    ../Model/utils.h
