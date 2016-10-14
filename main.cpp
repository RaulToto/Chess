#include "chess.h"
#include <QApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chess w;
    w.show();
    cout << "hello world";

    return a.exec();
}
