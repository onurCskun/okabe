TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    veri/urun.cpp \
    veri/kategori.cpp \
    veri/alis.cpp \
    veri/satis.cpp

HEADERS += \
    veri/urun.h \
    veri/kategori.h \
    veri/alis.h \
    veri/satis.h

