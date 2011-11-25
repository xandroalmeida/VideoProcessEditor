#ifndef VIDEOPROCESSITEM_H
#define VIDEOPROCESSITEM_H

#include "diagramitem.h"
#include "videofilterparamsdialog.h"

class VideoFilterItem : public DiagramItem
{
public:
    VideoFilterItem(QMenu *contextMenu = 0, QGraphicsItem *parent = 0, QGraphicsScene *scene = 0);
    virtual ~VideoFilterItem();

    DiagramItem::DiagramType diagramType() const;
    QDialog* editDialog();
private:
    VideoFilterParamsDialog* m_dialog;

};

#endif // VIDEOPROCESSITEM_H
