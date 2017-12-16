#include "mainwindow.h"
#include <QApplication>


#include <OSD_Environment.hxx>

int main(int argc, char *argv[])
{
    OSD_Environment aShaderEnv("CSF_ShadersDirectory", "C:/OCE/share/oce/src/Shaders");
    aShaderEnv.Build();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
