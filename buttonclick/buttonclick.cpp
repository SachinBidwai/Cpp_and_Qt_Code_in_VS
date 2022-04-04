#include "buttonclick.h"
#include "stdafx.h"
#include <QPushButton>    //  *******  5th Method (Display Button)
// #include <QApplication>


buttonclick::buttonclick(QWidget *parent)
    : QMainWindow(parent)
{
    // ui -> setupUi(this);
    //  ****************** 5th Method (Display Button)  ***********************
    // Set size of the window
    // setFixedSize(100, 50);

    // Create and position the button
    // m_button = new QPushButton("Hello World", this);
    //m_button->setGeometry(10, 10, 80, 30);

    // *********************************************************
    
    // *************** 5th Method (Additional effect) (While clicking on the button inside of the window, the application should quit.) 
    // NEW : Do the connection While clicking on the button inside of the window, the application should quit.
    //connect(m_button, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
    // *******************************************************

       
}








