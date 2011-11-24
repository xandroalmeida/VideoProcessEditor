QT       += xml

 HEADERS     =   mainwindow.h \
                 diagramitem.h \
                 diagramscene.h \
                 arrow.h \
                 diagramtextitem.h \
    videoinputitem.h \
    videoinputdialog.h \
    videofilteritem.h \
    videofilterparamsform.h
 SOURCES     =   mainwindow.cpp \
                 diagramitem.cpp \
                 main.cpp \
                 arrow.cpp \
                 diagramtextitem.cpp \
                 diagramscene.cpp \
    videoinputitem.cpp \
    videoinputdialog.cpp \
    videofilteritem.cpp \
    videofilterparamsform.cpp
 RESOURCES   =   diagramscene.qrc


FORMS += \
    videoinputdialog.ui

OTHER_FILES += \
    data/filters.xml

TEMPLATE = app

DEFINES += SRCDIR=\\\"$$PWD/\\\"


























