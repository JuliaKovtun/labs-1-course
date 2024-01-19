//Bill.cpp

#include "Bill.h"

Bill::Bill()
{
    first = 0;
    second = 0;
}

Bill::Bill(int f = 0, double s = 0)
{
    first = f;
    second = s;
}

Bill::Bill(const Bill& a) 
{
    first = a.first;
    second = a.second;
}

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

double Bill::Cost() const
{
    return first * second;
}

Bill& Bill::operator=(const Bill& a)
{
    first = a.first;
    second = a.second;

    return *this;
}

Bill::operator string () const
{
    stringstream ss;
    ss << " first = " << first << endl;
    ss << " second = " << second << endl;
    return ss.str();
}

Bill& Bill::operator ++()
{
    first++;
    return *this;
}

Bill& Bill::operator --()
{
    first--;
    return *this;
}

Bill Bill::operator ++(int)
{
    Bill a(*this);
    second++;
    return a;
}

Bill Bill::operator --(int)
{
    Bill a(*this);
    second--;
    return a;
}

ostream& operator <<(ostream& out, const Bill& a)
{
    out << string(a);
    return out;
}

istream& operator >>(istream& in, Bill& a)
{
    cout << "First = "; in >> a.first;
    cout << "Second = "; in >> a.second;
    cout << endl;

    return in;
}
