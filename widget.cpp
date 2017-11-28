#include "widget.h"
#include "ui_widget.h"
#include<QLCDNumber>
#include<QtWidgets>
#include<QSystemTrayIcon>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    value=1;
    ui->setupUi(this);
   // mSystemTrayIcon =new QSystemTrayIcon(this);

    connect(ui->pushButton,SIGNAL(clicked()), this, SLOT(display()));
    setWindowTitle(tr("Intern HW Başlığı"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::display()
{
     ui->lcdNumber->display(value);
//     for(int value=1;value<100;)
//         value=value+1;
//     value++;

     ++value;
}

void Widget::on_horizontalSlider_valueChanged(int value)
{
    ui->lcdNumber->display(value);

}

void Widget::on_pushButton_clicked()
{
   /* if(pushButton=clicked)
    {
       for(int value=0; value<100;)
        {
           int sayac;
         value=value+1;

         sayac=value;
         value++;

ui->lcdNumber->display(sayac);
 sayac=0;*/
}





