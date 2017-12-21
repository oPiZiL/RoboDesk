#include "menu.h"

#include <QToolBar>
#include <QTreeView>
#include <QMessageBox>
#include <QDockWidget>

#include <TopoDS_Shape.hxx>
#include <AIS_InteractiveContext.hxx>
#include <QString>
#include <QObject>

#include "mainwindow.h"


Menu::Menu(MainWindow*_mainwindow, Actions* _actions)
{
actions=_actions;
mainwindow=_mainwindow;
}

Menu::Menu( void )
{
}

void Menu::createActions( void )
{
    mExitAction = new QAction("&Exit", mainwindow);
    mExitAction->setShortcut(QObject::tr("Ctrl+Q"));
    mExitAction->setIcon(QIcon(":/Resources/close.png"));
    mExitAction->setStatusTip(QObject::tr("Exit the application"));
    QObject::connect(mExitAction, SIGNAL(triggered()), actions->myOccView, SLOT(close()));

    mViewZoomAction = new QAction(QObject::tr("Zoom"), mainwindow);
    mViewZoomAction->setIcon(QIcon(":/Resources/Zoom.png"));
    mViewZoomAction->setStatusTip(QObject::tr("Zoom the view"));
   QObject::connect(mViewZoomAction, SIGNAL(triggered()), actions->myOccView, SLOT(zoom()));

    mViewPanAction = new QAction(QObject::tr("Pan"), mainwindow);
    mViewPanAction->setIcon(QIcon(":/Resources/Pan.png"));
    mViewPanAction->setStatusTip(QObject::tr("Pan the view"));
   QObject::connect(mViewPanAction, SIGNAL(triggered()), actions->myOccView, SLOT(pan()));

    mViewRotateAction = new QAction(QObject::tr("Rotate"), mainwindow);
    mViewRotateAction->setIcon(QIcon(":/Resources/Rotate.png"));
    mViewRotateAction->setStatusTip(QObject::tr("Rotate the view"));
   QObject::connect(mViewRotateAction, SIGNAL(triggered()), actions->myOccView, SLOT(rotate()));

    mViewResetAction = new QAction(QObject::tr("Reset"), mainwindow);
    mViewResetAction->setIcon(QIcon(":/Resources/Home.png"));
    mViewResetAction->setStatusTip(QObject::tr("Reset the view"));
   QObject::connect(mViewResetAction, SIGNAL(triggered()), actions->myOccView, SLOT(reset()));

    mViewFitallAction = new QAction(QObject::tr("Fit All"), mainwindow);
    mViewFitallAction->setIcon(QIcon(":/Resources/FitAll.png"));
    mViewFitallAction->setStatusTip(QObject::tr("Fit all "));
   QObject::connect(mViewFitallAction, SIGNAL(triggered()), actions->myOccView, SLOT(fitAll()));

    mMakeBoxAction = new QAction(QObject::tr("Box"), mainwindow);
    mMakeBoxAction->setIcon(QIcon(":/Resources/robot.ico"));
    mMakeBoxAction->setStatusTip(QObject::tr("Make a box"));
   QObject::connect(mMakeBoxAction, SIGNAL(triggered()), this, SLOT(makeBox()));

    mMakeConeAction = new QAction(QObject::tr("Cone"), mainwindow);
    mMakeConeAction->setIcon(QIcon(":/Resources/coordinates.svg"));
    mMakeConeAction->setStatusTip(QObject::tr("Make a cone"));
   QObject::connect(mMakeConeAction, SIGNAL(triggered()), this, SLOT(makeCone()));

 }

void Menu::createMenus( void )
{
    mFileMenu = mainwindow->menuBar()->addMenu(QObject::tr("&File"));
    mFileMenu->addAction(mExitAction);

    mViewMenu = mainwindow->menuBar()->addMenu(QObject::tr("&View"));
    mViewMenu->addAction(mViewZoomAction);
    mViewMenu->addAction(mViewPanAction);
    mViewMenu->addAction(mViewRotateAction);
    mViewMenu->addSeparator();
    mViewMenu->addAction(mViewResetAction);
    mViewMenu->addAction(mViewFitallAction);

    mPrimitiveMenu = mainwindow->menuBar()->addMenu(QObject::tr("&Primitive"));
    mPrimitiveMenu->addAction(mMakeBoxAction);
    mPrimitiveMenu->addAction(mMakeConeAction);


    mModelingMenu = mainwindow->menuBar()->addMenu(QObject::tr("&Modeling"));

    mModelingMenu->addSeparator();


    mHelpMenu = mainwindow->menuBar()->addMenu(QObject::tr("&Help"));
    mHelpMenu->addAction(mAboutAction);
}

void Menu::createToolBars( void )
{
    mNavigateToolBar = mainwindow->addToolBar(QObject::tr("&Navigate"));
    mNavigateToolBar->addAction(mViewZoomAction);
    mNavigateToolBar->addAction(mViewPanAction);
    mNavigateToolBar->addAction(mViewRotateAction);

    mViewToolBar = mainwindow->addToolBar(QObject::tr("&View"));
    mViewToolBar->addAction(mViewResetAction);
    mViewToolBar->addAction(mViewFitallAction);

    mPrimitiveToolBar = mainwindow->addToolBar(QObject::tr("&Primitive"));
    mPrimitiveToolBar->addAction(mMakeBoxAction);
    mPrimitiveToolBar->addAction(mMakeConeAction);

    mModelingToolBar = mainwindow->addToolBar(QObject::tr("&Modeling"));

    mModelingToolBar->addSeparator();


    mHelpToolBar = mainwindow->addToolBar(QObject::tr("Help"));
    mPrimitiveToolBar->addAction(mAboutAction);
}

void Menu::about()
{

}

void Menu::makeBox(void)
{
    actions->makeBox();
}

void Menu::makeCone(void)
{
    actions->makeCone();
}


