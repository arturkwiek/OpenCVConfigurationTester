#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
// with OpenCV -------------------------------
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

#include <opencv2/highgui.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
//#include <opencv2/videostab.hpp>

using namespace cv;

// with OpenCV -------------------------------
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnOpenFile_clicked();
    void on_btnPlay_clicked();

private:
    Ui::MainWindow *ui;
    QString strVideoFileName;
    bool bPlay;
    VideoCapture *vcVideo;

};

#endif // MAINWINDOW_H
