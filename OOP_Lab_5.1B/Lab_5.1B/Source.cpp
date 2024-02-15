/////////Source.cpp

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"Point.h"

using namespace std;

void _unexpected_to_bad()
{
	cerr << "bad_exception" << endl;
	throw;
}

int main()
{

	set_unexpected(_unexpected_to_bad);
	set_terminate(_unexpected_to_bad);

	cout << "Point a:\n";

	Point a;

	try 
	{
		cin >> a;
		double r = a.Length();
		cout << "Length from coordinates to (0;0) is equal:  " << r << endl;
		double fi = a.ToPolar();
		cout << "In polar coordinates:  (" << r << "; " << fi << ")" << endl;
	}
	catch (MyDeliveredException* ex)
	{
		cerr << "Exception b: " << ex->What() << endl;
	}

	cout << "========================================================" << "\nPoint b:\n";

	try
	{
		Point b(2, 24);
		cout << b << endl;
		b++;

		bool isEqual = IsEqual(a, b);
		if (isEqual)
			cout << "Elements are equal" << endl;
		else
			cout << "Elements are not equal" << endl;

	}
	catch (invalid_argument a)
	{
		cerr << "Exception b: " << a.what() << endl;
	}
	catch (MyException& ex)
	{
		cerr << ex.What() << endl;
	}



	return 0;
}
