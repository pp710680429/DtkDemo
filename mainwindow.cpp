#include "mainwindow.h"

#include <DMainWindow>

DWIDGET_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    resize(500,300); //设置窗口大小

    w = new Widget;

    setCentralWidget(w);
}

MainWindow::~MainWindow()
{

}
