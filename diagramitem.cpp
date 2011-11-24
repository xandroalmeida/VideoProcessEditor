#include <QtGui>

#include "diagramitem.h"
#include "arrow.h"

DiagramItem::DiagramItem(DiagramType diagramType, QMenu *contextMenu,
                         QGraphicsItem *parent, QGraphicsScene *scene)
    : QGraphicsPixmapItem(parent, scene)
{
    myDiagramType = diagramType;
    myContextMenu = contextMenu;

    switch (myDiagramType) {
    case StartEnd:
        setPixmap(QPixmap(":/images/video_input"));
        break;
    case VideoInput:
        setPixmap(QPixmap(":/images/video_input"));
        break;
    case VideoOutput:
        setPixmap(QPixmap(":/images/video_output"));
        break;
    case VideoProcess:
        setPixmap(QPixmap(":/images/video_process"));
        break;
    case VideoPropertie:
        setPixmap(QPixmap(":/images/video_propertie"));
        break;
    case VideoCrop:
        setPixmap(QPixmap(":/images/video_crop"));
        break;
    default:
        setPixmap(QPixmap(":/images/video_input"));
        break;
    }
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsSelectable, true);
    setFlag(QGraphicsItem::ItemSendsGeometryChanges, true);
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
