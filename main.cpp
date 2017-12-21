#include "mainwindow.h"
#include <QApplication>
#include <QFile>

#include <OSD_Environment.hxx>

int main(int argc, char *argv[])
{
    OSD_Environment aShaderEnv("CSF_ShadersDirectory", "C:/OCE/share/oce/src/Shaders");
    aShaderEnv.Build();

    QApplication a(argc, argv);

    /*
    QFile File(":qdarkstyle/style.qss");
    File.open(QFile::ReadOnly);
    QString StyleSheet = QLatin1String(File.readAll());
    qApp->setStyleSheet(StyleSheet);
    */

    MainWindow w;
    QApplication::setWindowIcon(QIcon("robodesk.ico"));
    w.setIconSize(QSize(40,40));
    w.show();

    return a.exec();
}
