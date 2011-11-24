#include "videoprocessblurdialog.h"
#include "ui_videoprocessblurdialog.h"

VideoProcessBlurDialog::VideoProcessBlurDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VideoProcessBlurDialog)
{
    ui->setupUi(this);
}

VideoProcessBlurDialog::~VideoProcessBlurDialog()
{
    delete ui;
}
