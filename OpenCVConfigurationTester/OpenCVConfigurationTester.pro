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

# OpenCV ====================> Windows DELL Sii
INCLUDEPATH += C:\opencv\build\install\include

LIBS += -LC:\opencv\build\install\x64\mingw\bin
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_calib3d460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_core460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_features2d460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_flann460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_highgui460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_imgcodecs460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_imgproc460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_ml460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_objdetect460.dll
LIBS += C:\opencv\build\install\x64\mingw\bin\libopencv_videoio460.dll
#<OpenCV =============== Windows DELL Sii

#INCLUDEPATH += c:\opencv\build\install\include
#LIBS += -Lc:\opencv\build\bin
## For OpenCv 4.60 in Linux OS
#LIBS += -lopencv_calib3d460
#LIBS += -lopencv_core460
#LIBS += -lopencv_features2d460
#LIBS += -lopencv_flann460
#LIBS += -lopencv_highgui460
#LIBS += -lopencv_imgcodecs460
#LIBS += -lopencv_imgproc460
#LIBS += -lopencv_ml460
#LIBS += -lopencv_objdetect460
#LIBS += -lopencv_videoio460

#-------------------------------------------------
