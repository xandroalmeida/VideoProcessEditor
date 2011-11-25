#ifndef VIDEOFILTERPARAMSFORM_H
#define VIDEOFILTERPARAMSFORM_H

#include <QFrame>

class VideoFilterParamsForm : public QFrame
{
    Q_OBJECT
public:
    explicit VideoFilterParamsForm(QWidget *parent = 0);

signals:

public slots:
    void on_filterCb_change(QString item);
};

#endif // VIDEOFILTERPARAMSFORM_H
