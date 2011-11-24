#ifndef VIDEOINPUTITEM_H
#define VIDEOINPUTITEM_H

#include "DiagramItem.h"
#include "videoinputdialog.h"

class VideoInputItem : public DiagramItem
{
public:
    VideoInputItem(QMenu *contextMenu = 0, QGraphicsItem *parent = 0, QGraphicsScene *scene = 0);
    virtual ~VideoInputItem();

    DiagramItem::DiagramType diagramType() const;
    QDialog* editDialog();

private:
    VideoInputDialog* m_dialog;

};

#endif // VIDEOINPUTITEM_H
