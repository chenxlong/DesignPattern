TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/AddressListSoftImp.cpp \
    ../Model/GameSoftImp.cpp \
    ../Model/HandsetBrandAbstracttion.cpp \
    ../Model/HandsetBrandM.cpp \
    ../Model/HandsetBrandN.cpp \
    ../Model/HandsetSoftImplementor.cpp \
    ../Model/main.cpp

HEADERS += \
    ../Model/AddressListSoftImp.h \
    ../Model/GameSoftImp.h \
    ../Model/HandsetBrandAbstracttion.h \
    ../Model/HandsetBrandM.h \
    ../Model/HandsetBrandN.h \
    ../Model/HandsetSoftImplementor.h
