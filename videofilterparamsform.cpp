#include "videofilterparamsform.h"
#include "filtersdata.h"

#include <QFormLayout>
#include <QLabel>
#include <QComboBox>
#include <QDebug>
#include <QSpinBox>
#include <QDoubleSpinBox>

VideoFilterParamsForm::VideoFilterParamsForm(QWidget *parent) :
    QFrame(parent)
{

}

void VideoFilterParamsForm::on_filterCb_change(QString item)
{
    static int row = 0;
    QFormLayout* formlayout = (QFormLayout*)layout();

    QLayoutItem* layoutItem;
    while (formlayout->count() > 0 ) {
        layoutItem = formlayout->takeAt(0);
        delete layoutItem->widget();
        delete layoutItem;
    }

    const Filter* filter = FiltersData::getFilter(item.toAscii());

    if (filter) {
        qDebug() << filter->name;
        for (int i = 0; i < filter->nParams; i++) {
            QLabel* label = new QLabel(filter->params[i].name);
            formlayout->setWidget(i, QFormLayout::LabelRole, label);
            QWidget* field = NULL;
            switch(filter->params[i].type) {
            case IntegerType:
                field = new QSpinBox();
                ((QSpinBox*)field)->setMaximum((int)filter->params[i].maxValue);
                ((QSpinBox*)field)->setMinimum(filter->params[i].minValue);
                break;
            case DoubleType:
                field = new QDoubleSpinBox();
                ((QDoubleSpinBox*)field)->setMaximum(filter->params[i].maxValue);
                ((QDoubleSpinBox*)field)->setMinimum(filter->params[i].minValue);
                break;
            default:
                break;
            }
            formlayout->setWidget(i, QFormLayout::FieldRole, field);
        }
    }
}
