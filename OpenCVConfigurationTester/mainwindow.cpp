#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>

#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

#include <opencv2/highgui.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/videostab.hpp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    bPlay(false)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnOpenFile_clicked()
{
    QString strFileName = QFileDialog::getOpenFileName(this,
                                                       tr("Open Video"), "f:/Video", tr("Video Files (*.mp4 *.avi *.mpeg *.webm)"));
    if(strFileName.isEmpty()) {
        qDebug() << "Empty";
        return;
    }
    if(strFileName.isNull()) {
        qDebug() << "Null";
        return;
    }

    strVideoFileName = strFileName;
    QFileInfo file_info(strVideoFileName);

    qDebug() << "Open " << file_info.fileName();

    ui->lblFileName->setText(file_info.fileName());
    ui->rbFileSource->setChecked(true);
}

void MainWindow::on_btnPlay_clicked()
{
    if(true == bPlay) {
        qDebug() << "bPlay: true" << bPlay;
        if(vcVideo->isOpened()) {
            vcVideo->release();
        }
        bPlay = false;
    } else {
        qDebug() << "bPlay: false" << bPlay;
        if(!vcVideo->isOpened()) {
            qDebug() << "isOpened: false";
            if(ui->rbCamSource->isChecked()) {
                vcVideo->open(0);
                if(!vcVideo->isOpened()) {
                    QMessageBox::critical(this,
                                          "Video source open error",
                                          "Check Video source!");
                }
                else {
                    qDebug() << "isOpened: true";
                    bPlay = true;
                }
            } else if(ui->rbFileSource->isChecked()) {
                if(!strVideoFileName.isEmpty()) {
                    qDebug() << "strVideoFileName.isEmpty: false";
                    vcVideo->open(strVideoFileName.toStdString());
                    if(!vcVideo->isOpened()) {
                        qDebug() << "isOpened: false";
                        QMessageBox::critical(this,
                                              "Video source open error",
                                              "Check Video source!");
                    }
                    else {
                        qDebug() << "isOpened: false";
                        bPlay = true;
                    }
                }
            }
        } else {
            qDebug() << "vcVideo->isOpened(): true" << vcVideo->isOpened();

        }
    }

    qDebug() << "bPlay: " << bPlay;
}
