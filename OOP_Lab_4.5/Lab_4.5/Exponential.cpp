////Exponential.cpp

#include "Exponential.h"

double Exponential::CountJElem(int j)
{
    if (j >= 0)
        return a0 * pow(d, j);
    else
        return 0;
}

double Exponential::CountSum(int j)
{
    if (j >= 0)
    {
        double aj = this->CountJElem(j);
        return (a0 - aj * d) / (1 - d);
    }
    else
        return 0;
}

ostream& Exponential::Print(ostream& out) const
{
    out << "a0 = " << a0 << "\t" << "d = " << d << endl << endl;
    return out;
}

istream& Exponential::Insert(istream& in)
{
    cout << "a0 = "; in >> a0;
    cout << "d = "; in >> d;
    return in;
}


