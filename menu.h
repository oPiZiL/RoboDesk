#ifndef MENU_H
#define MENU_H

#include <actions.h>

#include <QToolBar>
#include <QTreeView>
#include <QMessageBox>
#include <QDockWidget>

#include <TopoDS_Shape.hxx>
#include <AIS_InteractiveContext.hxx>
#include <QString>
#include "mainwindow.h"

class MainWindow;

class Menu : public QObject
{
Q_OBJECT
public:
    Menu();
    Menu(MainWindow* _mainwindow, Actions *_actions);
private:
    Actions* actions;
    MainWindow* mainwindow;
public:
    //! create all the actions.
    void createActions(void);

    //! create all the menus.
    void createMenus(void);

    //! create the toolbar.
    void createToolBars(void);

protected slots:
    void about(void);
    //! make box test.
    void makeBox(void);

    //! make cone test.
    void makeCone(void);



private:
    //! the exit action.
    QAction* mExitAction;

    //! the actions for the view: pan, reset, fitall.
    QAction* mViewZoomAction;
    QAction* mViewPanAction;
    QAction* mViewRotateAction;
    QAction* mViewResetAction;
    QAction* mViewFitallAction;

    //! the actions to test the OpenCASCADE modeling algorithms.
    QAction* mMakeBoxAction;
    QAction* mMakeConeAction;

    //! show the about info action.
    QAction* mAboutAction;

    //! the menus of the application.
    QMenu* mFileMenu;
    QMenu* mViewMenu;
    QMenu* mPrimitiveMenu;
    QMenu* mModelingMenu;
    QMenu* mHelpMenu;

    //! the toolbars of the application.
    QToolBar* mViewToolBar;
    QToolBar* mNavigateToolBar;
    QToolBar* mPrimitiveToolBar;
    QToolBar* mModelingToolBar;
    QToolBar* mHelpToolBar;

    // wrapped the widget for occ.
    OccView* myOccView;
};

#endif // MENU_H
