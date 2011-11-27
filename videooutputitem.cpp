#include "videooutputitem.h"

VideoOutputItem::VideoOutputItem(QMenu *contextMenu, QGraphicsItem *parent, QGraphicsScene *scene)
    :DiagramItem(contextMenu, parent, scene)
{
     setPixmap(QPixmap(":/images/video_output"));
}

VideoOutputItem::~VideoOutputItem()
{

}

DiagramItem::DiagramType VideoOutputItem::diagramType() const
{
    return DiagramItem::VideoOutput;
}

QDialog* VideoOutputItem::editDialog()
{
    return NULL;
}
