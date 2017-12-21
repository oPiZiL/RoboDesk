#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "ui_mainwindow.h"
#include <AIS_InteractiveContext.hxx>
#include <actions.h>
#include <menu.h>
#include <occWorld.h>

class OccView;
class Menu;

//! Qt main window which include OpenCASCADE for its central widget.
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //! constructor/destructor.
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow ui;
    OccView* myOccView;
    Actions * actions;
    Menu* menu;
    AIS_world* myAIS_world;
};

#endif // MAINWINDOW_H

