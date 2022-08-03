#include <iostream>
#include <fstream>
#include "../Sales_item.h"
using namespace std;

int main()
{
    ofstream logFile("logfile");
    clog.rdbuf(logFile.rdbuf());
    Sales_item item1, item2;
    cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        cout << item1 + item2 << endl;
        clog << "Successfully add two items" << endl;
    }
    else
        clog << "Input items cannot be added" << endl;

    return 0;
}