#include "mainwindow.h"
#include "ui_mainwindow.h"

/*
*    Copyright (c) 2014 eryar All Rights Reserved.
*
*           File : occQt.cpp
*         Author : eryar@163.com
*           Date : 2014-07-15 21:00
*        Version : OpenCASCADE6.8.0 & Qt5.4
*
*    Description : Qt main window for OpenCASCADE.
*/

#include "mainwindow.h"
#include "occView.h"
#include <QDebug>

#include <menu.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    myOccView = new OccView(this);
    myAIS_world = new AIS_world;
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(myOccView);

    ui.occwidget->setLayout(layout);
    //ui.centralWidget->layout()->addWidget(tree);
    actions = new Actions(myOccView);
    menu = new Menu(this, actions);
    menu->createActions();
    menu->createMenus();
    menu->createToolBars();

}

MainWindow::~MainWindow()
{
}
