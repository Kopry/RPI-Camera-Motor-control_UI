#include "mainwindow.h"
#include <QApplication>
#include <QtNetwork/QTcpSocket>
#include <VLCQtCore/Common.h>

// Debut du programme

int main(int argc, char *argv[])
{
    // Thread pour la lecture
    QCoreApplication::setAttribute(Qt::AA_X11InitThreads);
    // necessaire pour que vlc fonctionne
//    VlcCommon::setPluginPath(app.applicationDirPath() + "/plugins");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

