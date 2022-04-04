#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ageApplication.h"

class ageApplication : public QMainWindow
{
    Q_OBJECT

public:
    ageApplication(QWidget *parent = Q_NULLPTR);

private:
    Ui::ageApplicationClass ui;
};
