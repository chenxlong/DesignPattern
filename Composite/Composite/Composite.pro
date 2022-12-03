TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/Company.cpp \
    ../Model/ConcreteCompany.cpp \
    ../Model/FinanceDepartment.cpp \
    ../Model/HRDepartment.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/Company.h \
    ../Model/ConcreteCompany.h \
    ../Model/FinanceDepartment.h \
    ../Model/HRDepartment.h
