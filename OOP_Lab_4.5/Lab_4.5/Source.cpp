////Source.cpp

#include"Series.h"
#include<typeinfo>
#include<iostream>
#include "Linear.h"
#include"Exponential.h"

using namespace std;

ostream& operator << (ostream& out, const Series& r)
{
	return r.Print(out);
}
istream& operator >> (istream& in, Series& r)
{
	return r.Insert(in);
}

int main()
{
	Linear r(2, 1);
	cout << "5th element = " << r.CountJElem(5) << endl;
	cout << r;

	Series* a = new Exponential(1, 2);
	cout << "Sum = " << a->CountSum(3) << endl;
	cout << typeid(a).name() << endl;
	cout << typeid(*a).name() << endl;

	delete a;

	return 0;
}