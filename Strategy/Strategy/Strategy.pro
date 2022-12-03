TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/CashContext.cpp \
    ../Model/CashNormal.cpp \
    ../Model/CashRebate.cpp \
    ../Model/CashReturn.cpp \
    ../Model/CashStrategy.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/CashContext.h \
    ../Model/CashNormal.h \
    ../Model/CashRebate.h \
    ../Model/CashReturn.h \
    ../Model/CashStrategy.h
