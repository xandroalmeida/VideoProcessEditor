#ifndef VIDEOPROCESSBLURITEM_H
#define VIDEOPROCESSBLURITEM_H

#include "videoprocessitem.h"

class VideoProcessBlurItem : public VideoProcessItem
{
public:
    VideoProcessBlurItem(QMenu *contextMenu = 0, QGraphicsItem *parent = 0, QGraphicsScene *scene = 0);

    DiagramItem::DiagramType diagramType() const;
    QDialog* editDialog();
};

#endif // VIDEOPROCESSBLURITEM_H
