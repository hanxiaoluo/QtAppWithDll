#include <QApplication>
#include "mywidget.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    MyselfWidget w;
    w.show();
    app.exec();
}

