//Source.cpp

#include "Bill.h"
#include <iostream>
using namespace std;

Bill makeBill(int f, double s)
{
    Bill p;
    if (!p.Init(f, s))
        cout << "ERROR" << endl;
    return p;

}

int main()
{
    Bill p;
    p.Read();
    p.Display();
   
    cout << "Cost = " << p.Cost() << endl;
    cout << "Size = " << sizeof(p) << endl;
    cout << endl;

    int f;
    double s;
    cout << "f = ? "; cin >> f;
    cout << "s = ? "; cin >> s;
    p = makeBill(f, s);
    p.Display();

    return 0;
}