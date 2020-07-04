#-------------------------------------------------
#
# Project created by QtCreator 2020-06-14T10:54:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenCVConfigurationTester
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

#-------------------------------------------------
# OpenCV Configuration

INCLUDEPATH += c:\opencv320_build\include
LIBS += -Lc:\opencv320_build\bin

LIBS += -lopencv_calib3d320
LIBS += -lopencv_core320
LIBS += -lopencv_features2d320
LIBS += -lopencv_flann320
LIBS += -lopencv_highgui320
LIBS += -lopencv_imgcodecs320
LIBS += -lopencv_imgproc320
LIBS += -lopencv_ml320
LIBS += -lopencv_objdetect320
LIBS += -lopencv_videoio320

#-------------------------------------------------
