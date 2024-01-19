/////////Source.cpp

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"Point.h"
using namespace std;

int main()
{
	Point a(2, 5);
	Point b;
	cin >> b;

	cout << endl << "A: \n" << a;
	cout << endl << "B: \n" << b;

	double r = a.Length();
	cout << "Length from coordinates to (0;0) is equal:  " << r << endl;

	double fi = a.ToPolar();
	cout << "In polar coordinates:  (" << r << "; " << fi << ")" << endl;

	bool isEqual = IsEqual(a, b);
	if (isEqual)
		cout << "Elements are equal" << endl;
	else
		cout << "Elements are not equal" << endl;

	if (a != b)
		cout << "a is not equal b" << endl;
	 

	return 0;
}
