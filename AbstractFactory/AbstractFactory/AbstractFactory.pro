TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/AbstractFactory.cpp \
    ../Model/AccessDepartment.cpp \
    ../Model/AccessFactory.cpp \
    ../Model/AccessUser.cpp \
    ../Model/Department.cpp \
    ../Model/IDepartment.cpp \
    ../Model/IUser.cpp \
    ../Model/SqlserverDepartment.cpp \
    ../Model/SqlserverFactory.cpp \
    ../Model/SqlserverUser.cpp \
    ../Model/User.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/AbstractFactory.h \
    ../Model/AccessDepartment.h \
    ../Model/AccessFactory.h \
    ../Model/AccessUser.h \
    ../Model/Department.h \
    ../Model/IDepartment.h \
    ../Model/IUser.h \
    ../Model/SqlserverDepartment.h \
    ../Model/SqlserverFactory.h \
    ../Model/SqlserverUser.h \
    ../Model/User.h
