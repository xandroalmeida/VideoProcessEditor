#include <QtGui>

#include "mainwindow.h"

int main(int argv, char *args[])
{
    Q_INIT_RESOURCE(VideoProcessEditor);
    QApplication app(argv, args);

    MainWindow mainWindow;
    mainWindow.setGeometry(100, 100, 800, 500);
    mainWindow.show();

    return app.exec();
}
