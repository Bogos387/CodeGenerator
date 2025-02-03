QT -= gui

CONFIG += c++17 console

DEFINES += QT_DEPRECATED_WARNINGS

TEMPLATE = app

DESTDIR = ../bin

CONFIG(debug, debug|release){
    TARGET = CodeGenerator_d
} else {
    TARGET = CodeGenerator
}

INCLUDEPATH += ./include/
HEADERS += $$files(./include/*.h)
SOURCES += $$files(./src/*.cpp)

