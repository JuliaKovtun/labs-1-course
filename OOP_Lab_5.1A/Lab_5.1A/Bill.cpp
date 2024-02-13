//Bill.cpp

#include "Bill.h"

Bill::Bill()
{
    first = 0;
    second = 0;
}

Bill::Bill(int f = 0, double s = 0) throw(invalid_argument)
{
    if (f < 0 || s < 0)
        throw invalid_argument("first < 0 || second < 0");
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

void Bill::SetFirst(int value) throw(invalid_argument)
{
    if (value < 0)
        throw invalid_argument("value < 0");
    first = value;
}

void Bill::SetSecond(double value) throw(MyException)
{
    if (value < 0)
        throw MyException("value < 0");
    second = value;
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

Bill& Bill::operator --() throw(MyDeliveredException)
{
    first--;
    if (first == 0)
        throw new MyDeliveredException();
    return *this;
}

Bill Bill::operator ++(int)
{
    Bill a(*this);
    second++;
    return a;
}

Bill Bill::operator --(int) throw(MyDeliveredException)
{
    Bill a(*this);
    second--;
    if (second == 0)
        throw MyDeliveredException();
    return a;
}

ostream& operator <<(ostream& out, const Bill& a)
{
    out << string(a);
    return out;
}

istream& operator >>(istream& in, Bill& a) throw (invalid_argument)
{
    int f;
    double s;

    cout << "First = "; in >> f;
    cout << "Second = "; in >> s;
    cout << endl;

    if (f < 0 || s < 0)
        throw invalid_argument("first < 0 || second < 0");

    a.first = f;
    a.second = s;

    return in;
}
