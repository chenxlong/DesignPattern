TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/Builder.cpp \
    ../Model/ConcreteBuilder1.cpp \
    ../Model/ConcreteBuilder2.cpp \
    ../Model/Director.cpp \
    ../Model/Product.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/Builder.h \
    ../Model/ConcreteBuilder1.h \
    ../Model/ConcreteBuilder2.h \
    ../Model/Director.h \
    ../Model/Product.h
