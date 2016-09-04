#include "sharedmemorywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SharedMemoryWidget w;
    w.show();

    return a.exec();
}
