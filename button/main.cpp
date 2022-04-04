#include "button.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    translator.load("hellotr_la");
    a.installTranslator(&translator);
    QPushButton hello(QPushButton::tr("Hello world!"));
    hello.resize(100, 30);
    hello.show();
    
    //button w;
    //w.show();
    return a.exec();
}
