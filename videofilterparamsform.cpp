#include "videofilterparamsform.h"
#include <QFormLayout>
#include <QLabel>


VideoFilterParamsForm::VideoFilterParamsForm(QWidget *parent) :
    QFrame(parent)
{

}

void VideoFilterParamsForm::on_filterCb_change(QString item)
{
    QFormLayout* formlayout = (QFormLayout*)layout();
    formlayout->setWidget(0, QFormLayout::LabelRole, new QLabel("Teste"));
}
