#ifndef SHAREDMEMORYWIDGET_H
#define SHAREDMEMORYWIDGET_H

#include <QMainWindow>

namespace Ui {
class SharedMemoryWidget;
}

class SharedMemoryWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit SharedMemoryWidget(QWidget *parent = 0);
    ~SharedMemoryWidget();

private:
    Ui::SharedMemoryWidget *ui;
};

#endif // SHAREDMEMORYWIDGET_H
