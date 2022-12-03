TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/AddFactory.cpp \
    ../Model/AddOperator.cpp \
    ../Model/InterfaceFactory.cpp \
    ../Model/Operator.cpp \
    ../Model/SubFactory.cpp \
    ../Model/SubOperator.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/AddFactory.h \
    ../Model/AddOperator.h \
    ../Model/InterfaceFactory.h \
    ../Model/Operator.h \
    ../Model/SubFactory.h \
    ../Model/SubOperator.h
