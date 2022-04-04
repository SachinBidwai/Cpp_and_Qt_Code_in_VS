#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_button.h"

class button : public QMainWindow
{
    Q_OBJECT

public:
    button(QWidget *parent = Q_NULLPTR);

private:
    Ui::buttonClass ui;
};
