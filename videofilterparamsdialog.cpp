#include "videofilterparamsdialog.h"
#include "ui_videofilterparamsdialog.h"
#include "filtersdata.h"

#include <QDebug>

VideoFilterParamsDialog::VideoFilterParamsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VideoFilterParamsDialog)
{
    ui->setupUi(this);

    ui->filterCb->clear();
    ui->filterCb->insertItems(0, FiltersData::filtersName());
}

VideoFilterParamsDialog::~VideoFilterParamsDialog()
{
    delete ui;
}
