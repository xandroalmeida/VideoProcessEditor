#include "videofilterparamsdialog.h"
#include "ui_videofilterparamsdialog.h"
#include "filtersdata.h"

#include <QDebug>

VideoFilterParamsDialog::VideoFilterParamsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VideoFilterParamsDialog)
{
    ui->setupUi(this);
    try {
        FiltersData filters;
    } catch (const char* msg) {
        qDebug() << "Erro: " << msg;
    }
}

VideoFilterParamsDialog::~VideoFilterParamsDialog()
{
    delete ui;
}
