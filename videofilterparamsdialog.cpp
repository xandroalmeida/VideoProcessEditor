#include "videofilterparamsdialog.h"
#include "ui_videofilterparamsdialog.h"

VideoFilterParamsDialog::VideoFilterParamsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VideoFilterParamsDialog)
{
    ui->setupUi(this);
}

VideoFilterParamsDialog::~VideoFilterParamsDialog()
{
    delete ui;
}
