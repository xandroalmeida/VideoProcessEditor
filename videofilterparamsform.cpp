#include "videofilterparamsform.h"
#include <QXmlStreamReader>

VideoFilterParamsForm::VideoFilterParamsForm(QWidget *parent) :
    QFrame(parent)
{
    QXmlStreamReader xml(":data/filters.xml");


}
