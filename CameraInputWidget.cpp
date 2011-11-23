#include "CameraInputWidget.h"
#include <QLabel>
#include <QVBoxLayout>

CameraInputWidget::CameraInputWidget(QWidget *parent) :
    DraggableWidget(parent)
{
    QVBoxLayout* layout = new QVBoxLayout();

    QLabel *lbl = new QLabel("Teste 123", this);
    layout->addWidget(lbl);
    lbl->show();

    QLabel *lb = new QLabel("Teste 13", this);
    layout->addWidget(lb);
    lb->show();

    this->setLayout(layout);
}
