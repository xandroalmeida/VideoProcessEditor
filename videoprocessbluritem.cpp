#include "videoprocessbluritem.h"
#include <QPainter>

VideoProcessBlurItem::VideoProcessBlurItem(QMenu *contextMenu, QGraphicsItem *parent, QGraphicsScene *scene) :
    VideoProcessItem(contextMenu, parent, scene)
{
    QPixmap pic(48,48);

    QPainter paint(&pic);
    paint.setPen(Qt::black);
    paint.drawText(2, 5, "Blur");

    setPixmap(pic);
}

DiagramItem::DiagramType VideoProcessBlurItem::diagramType() const
{
    return DiagramItem::VideoProcessBlur;
}

QDialog* VideoProcessBlurItem::editDialog()
{
    return NULL;
}
