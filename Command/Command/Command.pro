TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/BakeChickenWingCommand.cpp \
    ../Model/BakeMuttonCommand.cpp \
    ../Model/Barbecuer.cpp \
    ../Model/Command.cpp \
    ../Model/Waiter.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/BakeChickenWingCommand.h \
    ../Model/BakeMuttonCommand.h \
    ../Model/Barbecuer.h \
    ../Model/Command.h \
    ../Model/Waiter.h
