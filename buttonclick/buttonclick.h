// #pragma once

#ifndef BUTTONCLICK_H                  //  *******  5th Method (Display Button) 
#define BUTTONCLICK_H                  //  *******  5th Method (Display Button)

#include <QtWidgets/QMainWindow>
#include "ui_buttonclick.h"

class QPushButton;                //  *******  5th Method (Display Button)

class buttonclick : public QMainWindow
{
    Q_OBJECT

public:
    explicit buttonclick(QWidget *parent = Q_NULLPTR);   //  *******  5th Method (Display Button)  added only " explicit "
    
private:
    QPushButton* m_button;               //  *******  5th Method (Display Button) 
    // Ui::buttonclickClass *ui;
};

#endif // BUTTONCLICK_H                  //  *******  5th Method (Display Button) 