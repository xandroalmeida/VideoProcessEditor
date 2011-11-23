#ifndef EDITORAREA_H
#define EDITORAREA_H

#include <QScrollArea>

class EditorArea : public QScrollArea
{
    Q_OBJECT
public:
    explicit EditorArea(QWidget* parent=0);
    ~EditorArea();

public slots:
    void onVideoInputAction();
};

#endif // EDITORAREA_H
