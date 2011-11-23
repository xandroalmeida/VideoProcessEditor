#include "EditorArea.h"
#include "CameraInputWidget.h"
#include <QLabel>
#include <QDebug>
#include <QLayout>

EditorArea::EditorArea(QWidget* parent) : QScrollArea(parent)
{

}

EditorArea::~EditorArea()
{

}

void EditorArea::onVideoInputAction()
{
    qDebug() << "EditorArea::onVideoInputAction " << this->widget()->objectName();
    DraggableWidget* w = new CameraInputWidget(this->widget());
    w->show();
}
