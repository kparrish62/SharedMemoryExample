#include "sharedmemorywidget.h"
#include "ui_sharedmemorywidget.h"

SharedMemoryWidget::SharedMemoryWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SharedMemoryWidget)
{
    ui->setupUi(this);
}

SharedMemoryWidget::~SharedMemoryWidget()
{
    delete ui;
}
