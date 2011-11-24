 HEADERS     =   mainwindow.h \
                 diagramitem.h \
                 diagramscene.h \
                 arrow.h \
                 diagramtextitem.h \
    videoinputitem.h \
    videoinputdialog.h \
    videoprocessitem.h \
    videoprocessbluritem.h \
    videoprocessblurdialog.h
 SOURCES     =   mainwindow.cpp \
                 diagramitem.cpp \
                 main.cpp \
                 arrow.cpp \
                 diagramtextitem.cpp \
                 diagramscene.cpp \
    videoinputitem.cpp \
    videoinputdialog.cpp \
    videoprocessitem.cpp \
    videoprocessbluritem.cpp \
    videoprocessblurdialog.cpp
 RESOURCES   =   diagramscene.qrc

 # install
 target.path = $$[QT_INSTALL_EXAMPLES]/graphicsview/diagramscene
 sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS diagramscene.pro images
 sources.path = $$[QT_INSTALL_EXAMPLES]/graphicsview/diagramscene
 INSTALLS += target sources

 symbian: include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)

FORMS += \
    videoinputdialog.ui \
    videoprocessblurdialog.ui











