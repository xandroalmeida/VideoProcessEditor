#include "videofilterparamsform.h"
#include <QFormLayout>
#include <QLabel>
#include <QComboBox>
#include <QDebug>

VideoFilterParamsForm::VideoFilterParamsForm(QWidget *parent) :
    QFrame(parent)
{

}

void VideoFilterParamsForm::on_filterCb_change(QString item)
{
    static int row = 0;
    QFormLayout* formlayout = (QFormLayout*)layout();
    qDebug() << "layout()->objectName(): " << layout()->objectName();
    QLayoutItem *child;

    while (formlayout->count() > 0) {
        child = formlayout->takeAt(0);
        qDebug() << "delete child " << child->widget()->objectName();
        delete child;
    }
    qDebug() << "count: " << formlayout->count();

    formlayout->update();
    formlayout->setWidget(row, QFormLayout::LabelRole, new QLabel(item));
    formlayout->setWidget(row++, QFormLayout::FieldRole, new QComboBox());
}
