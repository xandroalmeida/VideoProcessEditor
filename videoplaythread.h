#ifndef VIDEOPLAYTHREAD_H
#define VIDEOPLAYTHREAD_H

#include <QThread>
#include "showvideodialog.h"

class VideoPlayThread : public QThread
{
    Q_OBJECT
public:
    explicit VideoPlayThread(ShowVideoDialog *dlg, QObject *parent = 0);
    virtual void run();

signals:

public slots:

private:
    ShowVideoDialog* m_dlg;

};

#endif // VIDEOPLAYTHREAD_H
