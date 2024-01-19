//Source.cpp

#include "Bill.h"
#include <iostream>
using namespace std;

Bill makeBill(int f, double s)
{
    Bill b(f, s);
    return b;
 }

int main()
{
    Bill p;
    cin >> p;
    cout << "Cost = " << p.Cost() << endl;
    cout << "Size = " << sizeof(p) << endl;
    cout << endl;

    cout << "Bill p1: \n";
    Bill p1(p);
    cout << p1 << endl;

    Bill h;
    int f;
    double s;
    cout << "f = ? "; cin >> f;
    cout << "s = ? "; cin >> s;
    h = makeBill(f, s);
    cout << h << endl;

    return 0;
}