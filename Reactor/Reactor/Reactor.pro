TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Model/CEpollEventDemultiplexer.cpp \
    ../Model/CEventDemultiplexer.cpp \
    ../Model/CEventHandler.cpp \
    ../Model/CReactor.cpp \
    ../Model/CRequestHandler.cpp \
    ../Model/CSelectEventDemuliplexer.cpp \
    ../Model/CTimeClient.cpp \
    ../Model/CTimeServer.cpp \
    ../Model/reactor_client_test_main.cpp \
    ../Model/reactor_server_test_main.cpp


HEADERS += \
    ../Model/CEpollEventDemultiplexer.h \
    ../Model/CEventDemultiplexer.h \
    ../Model/CEventHandler.h \
    ../Model/CReactor.h \
    ../Model/CRequestHandler.h \
    ../Model/CSelectEventDemuliplexer.h \
    ../Model/CTimeClient.h \
    ../Model/CTimeServer.h

