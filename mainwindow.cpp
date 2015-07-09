#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    v1.resize(101);

    //gamma values resp to temp 1500-15000K
    v1[0]=rgbs(1.00000000,0.42322816,0.10000000);
    v1[1]=rgbs(1.00000000,0.45159884,0.10000000);
    v1[2]=rgbs(1.00000000,0.47675916,0.10000000);
    v1[3]=rgbs(1.00000000,0.49923747,0.10000000);
    v1[4]=rgbs(1.00000000,0.51943421,0.10000000);
    v1[5]=rgbs(1.00000000,0.54360078,0.18679949);
    v1[6]=rgbs(1.00000000,0.56618736,0.14065513);
    v1[7]=rgbs(1.00000000,0.58734976,0.18362641);
    v1[8]=rgbs(1.00000000,0.60724493,0.22137978);
    v1[9]=rgbs(1.00000000,0.62600248,0.25591950);
    v1[10]=rgbs(1.00000000,0.64373109,0.28819679);
    v1[11]=rgbs(1.00000000,0.66052319,0.31873863);
    v1[12]=rgbs(1.00000000,0.67645822,0.34786758);
    v1[13]=rgbs(1.00000000,0.69160518,0.37579588);
    v1[14]=rgbs(1.00000000,0.70602449,0.40267128);
    v1[15]=rgbs(1.00000000,0.71976951,0.42860152);
    v1[16]=rgbs(1.00000000,0.73288760,0.45366838);
    v1[17]=rgbs(1.00000000,0.74542112,0.47793608);
    v1[18]=rgbs(1.00000000,0.75740814,0.50145662);
    v1[19]=rgbs(1.00000000,0.76888303,0.52427322);
    v1[20]=rgbs(1.00000000,0.77987699,0.54642268);
    v1[21]=rgbs(1.00000000,0.79041843,0.56793692);
    v1[22]=rgbs(1.00000000,0.80053332,0.58884417);
    v1[23]=rgbs(1.00000000,0.81024551,0.60916971);
    v1[24]=rgbs(1.00000000,0.81957693,0.62893653);
    v1[25]=rgbs(1.00000000,0.82854786,0.64816570);
    v1[26]=rgbs(1.00000000,0.83717703,0.66687674);
    v1[27]=rgbs(1.00000000,0.84548188,0.68508786);
    v1[28]=rgbs(1.00000000,0.85347859,0.70281616);
    v1[29]=rgbs(1.00000000,0.86118227,0.72007777);
    v1[30]=rgbs(1.00000000,0.86860704,0.73688797);
    v1[31]=rgbs(1.00000000,0.87576611,0.75326132);
    v1[32]=rgbs(1.00000000,0.88267187,0.76921169);
    v1[33]=rgbs(1.00000000,0.88933596,0.78475236);
    v1[34]=rgbs(1.00000000,0.89576933,0.79989606);
    v1[35]=rgbs(1.00000000,0.90198230,0.81465502);
    v1[36]=rgbs(1.00000000,0.90963069,0.82838210);
    v1[37]=rgbs(1.00000000,0.91710889,0.84190889);
    v1[38]=rgbs(1.00000000,0.92441842,0.85523742);
    v1[39]=rgbs(1.00000000,0.93156127,0.86836903);
    v1[40]=rgbs(1.00000000,0.93853986,0.88130458);
    v1[41]=rgbs(1.00000000,0.94535695,0.89404470);
    v1[42]=rgbs(1.00000000,0.95201559,0.90658983);
    v1[43]=rgbs(1.00000000,0.95851906,0.91894041);
    v1[44]=rgbs(1.00000000,0.96487079,0.93109690);
    v1[45]=rgbs(1.00000000,0.97107439,0.94305985);
    v1[46]=rgbs(1.00000000,0.97713351,0.95482993);
    v1[47]=rgbs(1.00000000,0.98305189,0.96640795);
    v1[48]=rgbs(1.00000000,0.98883326,0.97779486);
    v1[49]=rgbs(1.00000000,0.99448139,0.98899179);
    v1[50]=rgbs(1.00000000,1.00000000,1.00000000);
    v1[51]=rgbs(0.98947904,0.99348723,1.00000000);
    v1[52]=rgbs(0.97940448,0.98722715,1.00000000);
    v1[53]=rgbs(0.96975025,0.98120637,1.00000000);
    v1[54]=rgbs(0.96049223,0.97541240,1.00000000);
    v1[55]=rgbs(0.95160805,0.96983355,1.00000000);
    v1[56]=rgbs(0.94303638,0.96443333,1.00000000);
    v1[57]=rgbs(0.93480451,0.95923080,1.00000000);
    v1[58]=rgbs(0.92689056,0.95421394,1.00000000);
    v1[59]=rgbs(0.91927697,0.94937330,1.00000000);
    v1[60]=rgbs(0.91194747,0.94470005,1.00000000);
    v1[61]=rgbs(0.90488690,0.94018594,1.00000000);
    v1[62]=rgbs(0.89808115,0.93582323,1.00000000);
    v1[63]=rgbs(0.89151710,0.93160469,1.00000000);
    v1[64]=rgbs(0.88518247,0.92752354,1.00000000);
    v1[65]=rgbs(0.87906581,0.92357340,1.00000000);
    v1[66]=rgbs(0.87315640,0.91974827,1.00000000);
    v1[67]=rgbs(0.86744421,0.91604254,1.00000000);
    v1[68]=rgbs(0.86191983,0.91245088,1.00000000);
    v1[69]=rgbs(0.85657444,0.90896831,1.00000000);
    v1[70]=rgbs(0.85139976,0.90559011,1.00000000);
    v1[71]=rgbs(0.84638799,0.90231183,1.00000000);
    v1[72]=rgbs(0.84153180,0.89912926,1.00000000);
    v1[73]=rgbs(0.83682430,0.89603843,1.00000000);
    v1[74]=rgbs(0.83225897,0.89303558,1.00000000);
    v1[75]=rgbs(0.82782969,0.89011714,1.00000000);
    v1[76]=rgbs(0.82353066,0.88727974,1.00000000);
    v1[77]=rgbs(0.81935641,0.88452017,1.00000000);
    v1[78]=rgbs(0.81530175,0.88183541,1.00000000);
    v1[79]=rgbs(0.81136180,0.87922257,1.00000000);
    v1[80]=rgbs(0.80753191,0.87667891,1.00000000);
    v1[81]=rgbs(0.80380769,0.87420182,1.00000000);
    v1[82]=rgbs(0.80018497,0.87178882,1.00000000);
    v1[83]=rgbs(0.79665980,0.86943756,1.00000000);
    v1[84]=rgbs(0.79322843,0.86714579,1.00000000);
    v1[85]=rgbs(0.78988728,0.86491137,1.00000000);
    v1[86]=rgbs(0.78663296,0.86273225,1.00000000);
    v1[87]=rgbs(0.78346225,0.86060650,1.00000000);
    v1[88]=rgbs(0.78037207,0.85853224,1.00000000);
    v1[89]=rgbs(0.77735950,0.85650771,1.00000000);
    v1[90]=rgbs(0.77442176,0.85453121,1.00000000);
    v1[91]=rgbs(0.77155617,0.85260112,1.00000000);
    v1[92]=rgbs(0.76876022,0.85071588,1.00000000);
    v1[93]=rgbs(0.76603147,0.84887402,1.00000000);
    v1[94]=rgbs(0.76336762,0.84707411,1.00000000);
    v1[95]=rgbs(0.76076645,0.84531479,1.00000000);
    v1[96]=rgbs(0.75822586,0.84359476,1.00000000);
    v1[97]=rgbs(0.75574383,0.84191277,1.00000000);
    v1[98]=rgbs(0.75331843,0.84026762,1.00000000);
    v1[99]=rgbs(0.75094780,0.83865816,1.00000000);
    v1[100]=rgbs(0.74863017,0.83708329,1.00000000);


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
        val=25;
    const char* cmd= QString("sudo su -c \"echo %1 >/sys/class/backlight/intel_backlight/brightness\"").arg(val).toLatin1();
    QString str=QString::number(val/50);
    ui->lblPercent->setText(str+"%");
    system(cmd);

}



void MainWindow::on_tcontroller_actionTriggered(int action)
{

    int val=ui->tcontroller->value();
    const char* dev=QString("xrandr | grep \" connected\" | cut -d\" \" -f1 > $HOME/temp").toLatin1();

    system(dev);
    QFile file("/home/prasad/temp");
    QTextStream in(&file);

    file.open(QIODevice::ReadOnly);
    QString Data=in.readLine();

    QString temp=QString::number(1500+ui->tcontroller->value()*100);
    QString red=QString::number(v1[val].r);
    QString green=QString::number(v1[val].g);
    QString blue=QString::number(v1[val].b);

    const char* change=QString("xrandr --output %1 --gamma %2:%3:%4").arg(Data,red,green,blue).toLatin1();
    system(change);
    ui->lblTemp->setText(temp+"K");
}

void MainWindow::on_btnReset_clicked()
{
    system("xgamma -gamma 1");
}
