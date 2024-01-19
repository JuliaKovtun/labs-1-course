////Exponential.cpp

#include "Exponential.h"

double Exponential::CountJElem(int j)
{
    if (j >= 0)
        return GetA0() * pow(GetD(), j);
    else
        return 0;
}

double Exponential::CountSum(int j)
{
    if (j >= 0)
    {
        double aj = this->CountJElem(j);
        return (GetA0() - aj * GetD()) / (1 - GetD());
    }else
       return 0;
}

ostream& Exponential::Print(ostream& out) const
{
    out << "a0 = " << GetA0() << "\t" << "d = " << GetD() << endl << endl;
    return out;
}

istream& Exponential::Insert(istream& in)
{
    double a, b;
    cout << "a0 = "; in >> a;
    cout << "d = "; in >> b;
    SetA0(a);
    SetD(b);
    return in;
}


