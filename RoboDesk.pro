#-------------------------------------------------
#
# Project created by QtCreator 2013-08-18T15:52:09
#
#-------------------------------------------------

QT       += core gui opengl


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RoboDesk

TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp       \
    occView.cpp \
    main.cpp \
    mainwindow.cpp \
    occView.cpp \
    menu.cpp \
    actions.cpp \
    occWorld.cpp

CONFIG += c++11

HEADERS  += \
    mainwindow.h \
    occView.h \
    menu.h \
    actions.h \
    ui_mainwindow.h \
    occWorld.h

FORMS    += \
    mainwindow.ui

RESOURCES += \
    occqt.qrc \
    qdarkstyle/style.qrc


DEFINES +=  \
        WNT
INCLUDEPATH +=  \
        "C:\OCE\include\oce"


LIBS += -L"C:\OCE\Win64\lib"
LIBS += -L"C:\OCE\Win64\bin"
LIBS +=         \
    -lTKernel   \
    -lTKMath    \
    -lTKG3d     \
    -lTKBRep    \
    -lTKGeomBase\
    -lTKGeomAlgo\
    -lTKTopAlgo \
    -lTKPrim    \
    -lTKBO      \
    -lTKBool    \
    -lTKOffset  \
    -lTKService \
    -lTKV3d     \
    -lTKOpenGl  \
    -lTKFillet  \
    -lTKIGES    \
-lTKBin \
-lTKBinL \
-lTKBinTObj \
-lTKBinXCAF \
-lTKBO \
-lTKBool \
-lTKBRep \
-lTKCAF \
-lTKCDF \
-lTKernel \
-lTKFeat \
-lTKFillet \
-lTKG2d \
-lTKG3d \
-lTKGeomAlgo \
-lTKGeomBase \
-lTKHLR \
-lTKIGES \
-lTKLCAF \
-lTKMath \
-lTKMesh \
-lTKMeshVS \
-lTKNIS \
-lTKOffset \
-lTKOpenGl \
-lTKPCAF \
-lTKPLCAF \
-lTKPrim \
-lTKPShape \
-lTKService \
-lTKShapeSchema \
-lTKShHealing \
-lTKStdLSchema \
-lTKStdSchema \
-lTKSTEP \
-lTKSTEP209 \
-lTKSTEPAttr \
-lTKSTEPBase \
-lTKSTL \
-lTKTObj \
-lTKTopAlgo \
-lTKV3d \
-lTKVoxel \
-lTKVRML \
-lTKXCAF \
-lTKXCAFSchema \
-lTKXDEIGES \
-lTKXDESTEP \
-lTKXMesh \
-lTKXml \
-lTKXmlL \
-lTKXmlTObj \
-lTKXmlXCAF \
-lTKXSBase

RC_FILE = robodesk.rc




