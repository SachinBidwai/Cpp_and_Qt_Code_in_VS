#include "buttonclick.h"
// #include "stdafx.h"
#include <QtWidgets/QApplication>
#include <QPushButton>     //  **************** 1st Method (Display Button)  **********
// #include <QFont>
// #include<QAbstractButton>
#include <QProgressBar>    // ****************** 6th Method (Display ProgressBar and Slider also connect each other)  ***********************
#include <QSlider>         // ****************** 6th Method (Display ProgressBar and Slider also connect each other)  ***********************


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // **************** 1st Method (Display Button)  **********
   // QPushButton button("Hello world !");    
   //  button.show();
   //  ***************************************
    
   //  ****************** 2nd Method (Display Button)  ***********
   //  QPushButton button;
   //  button.setText("My text");
   // button.show();
   // *******************************************
   
   //  ****************** 3rd Method (Display Button)  ***********
   // QPushButton button1("test");
   // QPushButton button2("other", &button1);
   // button1.show();
   // *******************************************

   //  ****************** 4th Method (Display Button)  ***********
   // QWidget window;
   // window.setFixedSize(200, 200);   // void QWidget::setFixedSize(int width, int height);

   // QPushButton* button = new QPushButton("Hello World", &window);
   // button->setGeometry(20, 20, 80, 30);    // void QWidget::setGeometry(int x, int y, int width, int height);
   // window.show();
  
   // *******************************************

   //  ****************** 5th Method (Display Button)  ***********

    // buttonclick w;
    // w.show();

    // *******************************************************


    //  ****************** 6th Method (Display ProgressBar and Slider also connect each other)  ***********

    // Create a container window
    QWidget window;
    window.setFixedSize(200, 80);

    // Create a progress bar
    // with the range between 0 and 100, and a starting value of 0
    QProgressBar* progressBar = new QProgressBar(&window);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 10, 180, 30);

    // Create a horizontal slider
    // with the range between 0 and 100, and a starting value of 0
    QSlider* slider = new QSlider(&window);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);

    window.show();

    // Connection
    // This connection set the value of the progress bar
    // while the slider's value changes
    QObject::connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
   
    // *******************************************************

    return a.exec();
}
