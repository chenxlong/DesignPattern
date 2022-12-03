TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/Colleague.cpp \
    ../Model/ConcreteColleague1.cpp \
    ../Model/ConcreteColleague2.cpp \
    ../Model/ConcreteMediator.cpp \
    ../Model/Mediator.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/Colleague.h \
    ../Model/ConcreteColleague1.h \
    ../Model/ConcreteColleague2.h \
    ../Model/ConcreteMediator.h \
    ../Model/Mediator.h
