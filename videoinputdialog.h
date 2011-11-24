#ifndef VIDEOINPUTDIALOG_H
#define VIDEOINPUTDIALOG_H

#include <QDialog>

namespace Ui {
    class VideoInputDialog;
}

class VideoInputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VideoInputDialog(QWidget *parent = 0);
    ~VideoInputDialog();

private:
    Ui::VideoInputDialog *ui;
};

#endif // VIDEOINPUTDIALOG_H
