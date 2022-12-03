TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ../Model/AddOperator.cpp \
        ../Model/Operator.cpp \
        ../Model/OperatorFactory.cpp \
        ../Model/SubOperator.cpp \
        ../Model/main.cpp

HEADERS += \
    ../Model/AddOperator.h \
    ../Model/Operator.h \
    ../Model/OperatorFactory.h \
    ../Model/SubOperator.h
