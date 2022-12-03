TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/BossSubject.cpp \
    ../Model/NBAObserver.cpp \
    ../Model/Observer.cpp \
    ../Model/SecretarySubject.cpp \
    ../Model/StockObserver.cpp \
    ../Model/Subject.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/BossSubject.h \
    ../Model/NBAObserver.h \
    ../Model/Observer.h \
    ../Model/SecretarySubject.h \
    ../Model/StockObserver.h \
    ../Model/Subject.h
