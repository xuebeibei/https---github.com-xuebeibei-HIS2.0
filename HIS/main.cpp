#include "hismainwindow.h"
#include "cliniccharge.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HISMainWindow w;
    w.show();
    return a.exec();
}
