TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/Aggregate.cpp \
    ../Model/ConcreteAggregate.cpp \
    ../Model/ConcreteIterator.cpp \
    ../Model/Iterator.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/Aggregate.h \
    ../Model/ConcreteAggregate.h \
    ../Model/ConcreteIterator.h \
    ../Model/Iterator.h
