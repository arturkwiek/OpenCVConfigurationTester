﻿#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

#include <opencv2/highgui.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
//#include <opencv2/videostab.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    
    qDebug() << "QApplication started. ";
    MainWindow w;
    w.show();
    qDebug() << "MainWindow showed.";

    while (1){
        a.processEvents();

    }
    return a.exec();
}
