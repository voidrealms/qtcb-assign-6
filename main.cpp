#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 0;

    qInfo() << "Enter a maximum";

    cin >> max;

    if(max <= 0) {
        qInfo() << "You did not enter a valid number!";
    } else {
        for(int i = 1; i <= max; i++) {
            qInfo() << i << "Hello";
        }
    }


    return a.exec();
}
