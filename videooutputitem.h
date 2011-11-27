#ifndef VIDEOOUTPUTITEM_H
#define VIDEOOUTPUTITEM_H

#include "diagramitem.h"

class VideoOutputItem : public DiagramItem
{
public:
    VideoOutputItem(QMenu *contextMenu = 0, QGraphicsItem *parent = 0, QGraphicsScene *scene = 0);
    virtual ~VideoOutputItem();

    DiagramItem::DiagramType diagramType() const;
    QDialog* editDialog();
};

#endif // VIDEOOUTPUTITEM_H
