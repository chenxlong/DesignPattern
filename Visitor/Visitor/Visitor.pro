TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/ActionVisitor.cpp \
    ../Model/FailVisitor.cpp \
    ../Model/Man.cpp \
    ../Model/ObjectStruct.cpp \
    ../Model/Person.cpp \
    ../Model/SuccessVisitor.cpp \
    ../Model/WaitVisitor.cpp \
    ../Model/Woman.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/ActionVisitor.h \
    ../Model/FailVisitor.h \
    ../Model/Man.h \
    ../Model/ObjectStruct.h \
    ../Model/Person.h \
    ../Model/SuccessVisitor.h \
    ../Model/WaitVisitor.h \
    ../Model/Woman.h
