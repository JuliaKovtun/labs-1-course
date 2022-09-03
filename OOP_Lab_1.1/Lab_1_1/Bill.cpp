//Bill.cpp

#include "Bill.h"
#include <iostream>
using namespace std;

int Bill::GetFirst() const
{
    return first;
}

double Bill::GetSecond() const
{
    return second;
}

void Bill::SetFirst(int value)
{
    if (value > 0)
        first = value;
    else
        first = 0;
}

void Bill::SetSecond(double value)
{
    if (value > 0)
        second = value;
    else
        second = 0;
}

bool Bill::Init(int f, double s)
{
    if (f > 0 && s > 0)
    {
        SetFirst(f);
        SetSecond(s);
        return true;
    }
    else
        return false;
}

void Bill::Read()
{
    int f;
    double s;
    do
    {
        cout << "first  = ? "; cin >> f;
        cout << "second = ? "; cin >> s;
    } while (!Init(f, s));
}

void Bill::Display()
{
    cout << "first  = " << first << endl;
    cout << "second = " << second << endl;
}

double Bill::Cost()
{
    return first * second;
}