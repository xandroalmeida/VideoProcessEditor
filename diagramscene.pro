QT       += xml

#LIBS += -L ../cppunit-1.12.1-bin/lib -lcppunit
#INCLUDEPATH  += ../cppunit-1.12.1-bin/include

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
    filtersdata.h
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
    filtersdata.cpp
 RESOURCES   =   diagramscene.qrc


FORMS += \
    videoinputdialog.ui \
    videofilterparamsdialog.ui

OTHER_FILES += \
    data/filters.xml

TEMPLATE = app

DEFINES += SRCDIR=\\\"$$PWD/\\\"











































