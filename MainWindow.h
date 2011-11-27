#ifndef MAINWINDOW_H
 #define MAINWINDOW_H

 #include <QMainWindow>

 #include "diagramitem.h"

 class DiagramScene;

 class QAction;
 class QToolBox;
 class QSpinBox;
 class QComboBox;
 class QFontComboBox;
 class QButtonGroup;
 class QLineEdit;
 class QGraphicsTextItem;
 class QFont;
 class QToolButton;
 class QAbstractButton;
 class QGraphicsView;

 class MainWindow : public QMainWindow
 {
     Q_OBJECT

 public:
    MainWindow();

 private slots:
     void buttonGroupClicked(int id);
     void deleteItem();
     void editItem();
     void onEditDlgOk(QDialog* dlg);
     void pointerGroupClicked(int id);
     void bringToFront();
     void sendToBack();
     void itemInserted(DiagramItem *item);
     void textInserted(QGraphicsTextItem *item);
     void currentFontChanged(const QFont &font);
     void fontSizeChanged(const QString &size);
     void sceneScaleChanged(const QString &scale);
     void textColorChanged();
     void lineColorChanged();
     void textButtonTriggered();
     void lineButtonTriggered();
     void handleFontChange();
     void itemSelected(QGraphicsItem *item);
     void about();

 private:
     void createToolBox();
     void createActions();
     void createMenus();
     void createToolbars();
     QWidget *createBackgroundCellWidget(const QString &text,
                                         const QString &image);
     QWidget *createCellWidget(const QString &text,
                               DiagramItem::DiagramType type);
     QMenu *createColorMenu(const char *slot, QColor defaultColor);
     QIcon createColorToolButtonIcon(const QString &image, QColor color);
     QIcon createColorIcon(QColor color);

     DiagramScene *scene;
     QGraphicsView *view;

     QAction *exitAction;
     QAction *addAction;
     QAction *deleteAction;
     QAction *editAction;

     QAction *toFrontAction;
     QAction *sendBackAction;
     QAction *aboutAction;

     QMenu *fileMenu;
     QMenu *itemMenu;
     QMenu *aboutMenu;

     QToolBar *textToolBar;
     QToolBar *editToolBar;
     QToolBar *colorToolBar;
     QToolBar *pointerToolbar;

     QComboBox *sceneScaleCombo;
     QComboBox *itemColorCombo;
     QComboBox *textColorCombo;
     QComboBox *fontSizeCombo;
     QFontComboBox *fontCombo;

     QToolBox *toolBox;
     QButtonGroup *buttonGroup;
     QButtonGroup *pointerTypeGroup;
     QToolButton *fontColorToolButton;
     QToolButton *lineColorToolButton;
     QAction *boldAction;
     QAction *underlineAction;
     QAction *italicAction;
     QAction *textAction;
     QAction *lineAction;
 };

 #endif
