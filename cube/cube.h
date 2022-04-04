#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_cube.h"

class cube : public QMainWindow
{
    Q_OBJECT

public:
    cube(QWidget *parent = Q_NULLPTR);

private:
    Ui::cubeClass ui;
};
