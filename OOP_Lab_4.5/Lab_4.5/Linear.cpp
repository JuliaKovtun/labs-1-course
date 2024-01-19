////Linear.cpp

#include "Linear.h"

double Linear::CountJElem(int j)
{
	if (j >= 0)
		return a0 + j * d;
	else
		return 0;
}

double Linear::CountSum(int j)
{
	if (j >= 0) {
		double aj = this->CountJElem(j);
		return (j + 1) * (a0 + aj) / 2;
	}
	else
		return 0;
}

ostream& Linear::Print(ostream& out) const
{
	out << "a0 = " << a0 << "\t" << "d = " << d << endl << endl;
	return out;
}

istream& Linear::Insert(istream& in)
{
	cout << "a0 = "; in >> a0;
	cout << "d = "; in >> d;
	return in;
}
