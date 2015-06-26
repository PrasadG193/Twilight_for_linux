#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bcontroller_actionTriggered(int action)
{

    // /sys/class/backlight/intel_backlight/brightness
    //        max=4882
    //        min=478
    int val=ui->bcontroller->value()*50;
    if(val>=4882)
        val=4882;
    if(val<=50)
        val=50;
    const char* cmd= QString("sudo su -c \"echo %1 >/sys/class/backlight/intel_backlight/brightness\"").arg(val).toLatin1();
    QString str=QString::number(val/50);
    ui->lblPercent->setText(str+"%");
    system(cmd);

}
