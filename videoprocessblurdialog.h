#ifndef VIDEOPROCESSBLURDIALOG_H
#define VIDEOPROCESSBLURDIALOG_H

#include <QDialog>

namespace Ui {
    class VideoProcessBlurDialog;
}

class VideoProcessBlurDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VideoProcessBlurDialog(QWidget *parent = 0);
    ~VideoProcessBlurDialog();

private:
    Ui::VideoProcessBlurDialog *ui;
};

#endif // VIDEOPROCESSBLURDIALOG_H
