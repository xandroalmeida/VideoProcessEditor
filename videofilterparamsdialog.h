#ifndef VIDEOFILTERPARAMSDIALOG_H
#define VIDEOFILTERPARAMSDIALOG_H

#include <QDialog>

namespace Ui {
    class VideoFilterParamsDialog;
}

class VideoFilterParamsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VideoFilterParamsDialog(QWidget *parent = 0);
    ~VideoFilterParamsDialog();

private:
    Ui::VideoFilterParamsDialog *ui;
};

#endif // VIDEOFILTERPARAMSDIALOG_H
