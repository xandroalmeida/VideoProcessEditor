#include "videoplaythread.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <QDebug>
#include <QImage>

VideoPlayThread::VideoPlayThread(ShowVideoDialog *dlg, QObject *parent) :
    QThread(parent)
{
    m_dlg = dlg;
}

void VideoPlayThread::run()
{
    cv::VideoCapture cap;
    if (!cap.open(0)) {
        qDebug() << "Erro ao abrir camera.";
        return;
    }

    if( cap.isOpened() ) {
        qDebug() << "Video " << 0 <<
                    ": width=" << cap.get(CV_CAP_PROP_FRAME_WIDTH) <<
                    ", height=" << cap.get(CV_CAP_PROP_FRAME_HEIGHT) <<
                    ", nframes=" << cap.get(CV_CAP_PROP_FRAME_COUNT) <<
                    ", fps=" << cap.get(CV_CAP_PROP_FPS) <<
                    ", format=" << cap.get(CV_CAP_PROP_FORMAT) <<
                    ", mode=" << cap.get(CV_CAP_PROP_MODE) <<
                    ", ratio=" << cap.get(CV_CAP_PROP_POS_AVI_RATIO);
    } else {
        qDebug() << "Could not initialize capturing...\n";
        return ;
    }

    int i = 0;
    for(;;) {
        cv::Mat frame;
        cap >> frame;

        if (frame.empty())
            break;

        //qDebug() << "cols: " << frame.cols << " rows: " << frame.rows << " total: " << frame.total();
        cvtColor(frame, frame, CV_BGR2RGB);
        //qDebug() << "cols: " << frame.cols << " rows: " << frame.rows << " total: " << frame.total();
        //QImage img((uchar*)frame.data, frame.cols, frame.rows, QImage::Format_RGB32);
        //img.save(QString("frame.jpg"));


       // QPixmap::fromImage(img);

        qDebug() << i++;

        imshow("Original", frame);
        int c = cv::waitKey(30);
        if( c == 'q' || c == 'Q' || (c & 255) == 27 )
            break;
    }
    cap.release();
}
