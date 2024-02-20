#include "testapp.h"

#include <QApplication>>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TestApp window;
    window.show();
    return app.exec();
}
