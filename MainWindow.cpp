#include "MainWindow.h"

#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QUrl url("http://n.touchmagic.cn/");
    ui->webview->load(url);
}

MainWindow::~MainWindow()
{
    delete ui;
}
