#ifndef VIDEOPROCESSITEM_H
#define VIDEOPROCESSITEM_H

#include "diagramitem.h"

class VideoFilterItem : public DiagramItem
{
public:
    VideoFilterItem(QMenu *contextMenu = 0, QGraphicsItem *parent = 0, QGraphicsScene *scene = 0);

    DiagramItem::DiagramType diagramType() const;
    QDialog* editDialog();

};

#endif // VIDEOPROCESSITEM_H
