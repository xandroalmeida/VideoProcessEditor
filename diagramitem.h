#ifndef DIAGRAMITEM_H
#define DIAGRAMITEM_H

#include <QGraphicsPixmapItem>
#include <QList>
#include <QMenu>
#include <QAction>

class QPixmap;
class QGraphicsItem;
class QGraphicsScene;
class QTextEdit;
class QGraphicsSceneMouseEvent;
class QGraphicsSceneContextMenuEvent;
class QPainter;
class QStyleOptionGraphicsItem;
class QWidget;
class QPolygonF;

class Arrow;

class DiagramItem : public QGraphicsPixmapItem
{

public:
    enum DiagramType { VideoOutput = UserType + 15, VideoInput, StartEnd, VideoFilter, VideoPropertie, VideoCrop };

    DiagramItem(QMenu *contextMenu, QGraphicsItem *parent = 0, QGraphicsScene *scene = 0);
    virtual ~DiagramItem();

    void removeArrow(Arrow *arrow);
    void removeArrows();
    void addArrow(Arrow *arrow);

    int type()
        { return diagramType(); }

    virtual DiagramItem::DiagramType diagramType() const = 0;
    virtual QDialog* editDialog() = 0;

    int width() const
        { return pixmap().width(); }

    int height() const
        { return pixmap().height(); }

    static DiagramItem* factory(DiagramType diagramType, QMenu *contextMenu = 0);

protected:
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);

private:
    QMenu *myContextMenu;
    QList<Arrow *> arrows;
};

#endif
