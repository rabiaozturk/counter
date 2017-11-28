#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>



namespace Ui {
class Widget;
}

class QSystemTrayIcon;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:


    void display();

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_clicked();

private:


  //  QSystemTrayIcon *mSystemTrayIcon;




   int value;
    Ui::Widget *ui;
};

#endif // WIDGET_H
