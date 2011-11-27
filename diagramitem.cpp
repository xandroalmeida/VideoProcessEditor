#include <QtGui>

#include "diagramitem.h"
#include "videoinputitem.h"
#include "videooutputitem.h"
#include "videofilteritem.h"

#include "arrow.h"

DiagramItem::DiagramItem(QMenu *contextMenu,
                         QGraphicsItem *parent, QGraphicsScene *scene)
    : QGraphicsPixmapItem(parent, scene)
{
    myContextMenu = contextMenu;

    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsSelectable, true);
    setFlag(QGraphicsItem::ItemSendsGeometryChanges, true);
}

DiagramItem::~DiagramItem()
{

}

DiagramItem* DiagramItem::factory(DiagramType diagramType, QMenu *contextMenu) {
    DiagramItem* item = 0;
    switch (diagramType) {
    case VideoInput:
        item = new VideoInputItem(contextMenu);
        break;
    case VideoOutput:
        item = new VideoOutputItem(contextMenu);
        break;
    case VideoFilter:
        item = new VideoFilterItem(contextMenu);
        break;
    case VideoPropertie:
        item = new VideoInputItem(contextMenu);
        break;
    case VideoCrop:
        item = new VideoInputItem(contextMenu);
        break;
    default:
        break;
    }

    return item;
}

void DiagramItem::removeArrow(Arrow *arrow)
{
    int index = arrows.indexOf(arrow);

    if (index != -1)
        arrows.removeAt(index);
}

void DiagramItem::removeArrows()
{
    foreach (Arrow *arrow, arrows) {
        arrow->startItem()->removeArrow(arrow);
        arrow->endItem()->removeArrow(arrow);
        scene()->removeItem(arrow);
        delete arrow;
    }
}

void DiagramItem::addArrow(Arrow *arrow)
{
    arrows.append(arrow);
}

void DiagramItem::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    scene()->clearSelection();
    setSelected(true);
    myContextMenu->exec(event->screenPos());
}

QVariant DiagramItem::itemChange(GraphicsItemChange change,
                                 const QVariant &value)
{
    if (change == QGraphicsItem::ItemPositionChange) {
        foreach (Arrow *arrow, arrows) {
            arrow->updatePosition();
        }
    }

    return value;
}
