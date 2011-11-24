#ifndef DIAGRAMITEM_H
 #define DIAGRAMITEM_H

 #include <QGraphicsPixmapItem>
 #include <QList>

 class QPixmap;
 class QGraphicsItem;
 class QGraphicsScene;
 class QTextEdit;
 class QGraphicsSceneMouseEvent;
 class QMenu;
 class QGraphicsSceneContextMenuEvent;
 class QPainter;
 class QStyleOptionGraphicsItem;
 class QWidget;
 class QPolygonF;

 class Arrow;

 class DiagramItem : public QGraphicsPixmapItem
 {
 public:
     enum { Type = UserType + 15 };
     enum DiagramType { VideoOutput, VideoInput, StartEnd, VideoProcess, VideoPropertie, VideoCrop };

     DiagramItem(DiagramType diagramType, QMenu *contextMenu,
         QGraphicsItem *parent = 0, QGraphicsScene *scene = 0);

     void removeArrow(Arrow *arrow);
     void removeArrows();
     DiagramType diagramType() const
         { return myDiagramType; }
     void addArrow(Arrow *arrow);
     int type() const
         { return Type;}

     int width() const
        { return pixmap().width(); }

     int height() const
        { return pixmap().height(); }


 protected:
     void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
     QVariant itemChange(GraphicsItemChange change, const QVariant &value);

 private:
     DiagramType myDiagramType;
     QMenu *myContextMenu;
     QList<Arrow *> arrows;
 };

 #endif
