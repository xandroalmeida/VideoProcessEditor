#include "videoinputitem.h"

VideoInputItem::VideoInputItem(QMenu *contextMenu, QGraphicsItem *parent, QGraphicsScene *scene)
    :DiagramItem(contextMenu, parent, scene), m_dialog(NULL)
{
    setPixmap(QPixmap(":/images/video_input"));
}

VideoInputItem::~VideoInputItem()
{
    if (m_dialog) {
        delete m_dialog;
    }
}

QDialog* VideoInputItem::editDialog()
{
    if (!m_dialog) {
        m_dialog = new VideoInputDialog();
    }

    return m_dialog;
}

DiagramItem::DiagramType VideoInputItem::diagramType() const
{
    return DiagramItem::VideoInput;
}
