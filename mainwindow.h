#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QProcess>
#include <QDebug>
#include <QTextCodec>
#include <QFile>
#include <QTextStream>

namespace Ui {
class MainWindow;
}


class rgbs
{
    public:
        double r,g,b;
        rgbs()
        {}
        rgbs(double x,double y,double z)
        {
          r=x;g=y;b=z;
        }
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVector<rgbs> v1;


private slots:
    void on_bcontroller_actionTriggered(int action);

    void on_tcontroller_actionTriggered(int action);

    void on_btnReset_clicked();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
