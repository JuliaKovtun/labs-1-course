////Linear.cpp

#include "Linear.h"

double Linear::CountJElem(int j)
{
	if (j >= 0)
		return GetA0() + j * GetD();
	else
		return 0;
}

double Linear::CountSum(int j)
{
	if (j >= 0) {
		double aj = this->CountJElem(j);
		return (j + 1) * (GetA0() + aj) / 2;
	}
	else
		return 0;
}

ostream& Linear::Print(ostream& out) const
{
	out << "a0 = " << GetA0() << "\t" << "d = " << GetD() << endl << endl;
	return out;
}

istream& Linear::Insert(istream& in)
{
	double a, b;
	cout << "a0 = "; in >> a;
	cout << "d = "; in >> b;
	SetA0(a);
	SetD(b);
	return in;
}
