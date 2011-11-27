QT       += xml

INCLUDEPATH  += C:\\opt\\opencv_mingw32\\install\\include\\opencv
INCLUDEPATH  += C:\\opt\\opencv_mingw32\\install\\include

LIBS += -L C:\\opt\\opencv_mingw32\\install\\lib
LIBS += -L C:\\opt\\opencv_mingw32\\install\\share\\OpenCV\\3rdparty\\lib

LIBS += -lopencv_flann231 -lopencv_imgproc231 -lopencv_highgui231
LIBS += -lopencv_ml231 -lopencv_video231 -lopencv_objdetect231 -lopencv_features2d231
LIBS += -lopencv_calib3d231 -lopencv_legacy231 -lopencv_contrib231 -lopencv_core231
LIBS += -lgdi32 -lcomctl32 -lcomdlg32 -luuid -loleaut32 -lole32 -lavifil32 -lavicap32 -lvfw32
LIBS += -lzlib -llibtiff -llibjasper -llibjpeg -llibpng

QMAKE_CXXFLAGS_RELEASE += -std=gnu++0x
QMAKE_CXXFLAGS_DEBUG += -std=gnu++0x

 HEADERS     =   mainwindow.h \
                 diagramitem.h \
                 diagramscene.h \
                 arrow.h \
                 diagramtextitem.h \
    videoinputitem.h \
    videoinputdialog.h \
    videofilteritem.h \
    videofilterssettings.h \
    videofilterparamsdialog.h \
    videofilterparamsform.h \
    filtersdata.h \
    videooutputitem.h
 SOURCES     =   mainwindow.cpp \
                 diagramitem.cpp \
                 main.cpp \
                 arrow.cpp \
                 diagramtextitem.cpp \
                 diagramscene.cpp \
    videoinputitem.cpp \
    videoinputdialog.cpp \
    videofilteritem.cpp \
    videofilterssettings.cpp \
    videofilterparamsdialog.cpp \
    videofilterparamsform.cpp \
    filtersdata.cpp \
    videooutputitem.cpp
 RESOURCES   =   VideoProcessEditor.qrc


FORMS += \
    videoinputdialog.ui \
    videofilterparamsdialog.ui

OTHER_FILES += \
    data/filters.xml

TEMPLATE = app

DEFINES += SRCDIR=\\\"$$PWD/\\\"













































