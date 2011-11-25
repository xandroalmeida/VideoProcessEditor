#include "videofilteritem.h"

VideoFilterItem::VideoFilterItem(QMenu *contextMenu, QGraphicsItem *parent, QGraphicsScene *scene)
    :DiagramItem(contextMenu, parent, scene), m_dialog(0)
{
    setPixmap(QPixmap(":/images/video_process"));
}

VideoFilterItem::~VideoFilterItem()
{
    if (!m_dialog)
        delete m_dialog;
}

DiagramItem::DiagramType VideoFilterItem::diagramType() const
{
    return DiagramItem::VideoFilter;
}

QDialog* VideoFilterItem::editDialog()
{
    if (!m_dialog) {
        m_dialog = new VideoFilterParamsDialog();
    }

    return m_dialog;
}
