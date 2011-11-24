#include "videofilteritem.h"

VideoFilterItem::VideoFilterItem(QMenu *contextMenu, QGraphicsItem *parent, QGraphicsScene *scene)
    :DiagramItem(contextMenu, parent, scene)
{
}

DiagramItem::DiagramType VideoFilterItem::diagramType() const
{
    return DiagramItem::VideoFilter;
}

QDialog* VideoFilterItem::editDialog()
{
    return NULL;
}
