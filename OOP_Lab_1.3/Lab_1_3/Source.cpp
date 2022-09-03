/////////Source.cpp

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"Point.h"
using namespace std;

int main()
{
	Point a;
	double r = 0;
	double fi = 0;
	bool isEqual;

	a.Read();
	a.Length(r);
	cout << "Length from coordinates to (0;0) equals  " << r << endl;
	a.ToPolar(fi);
	cout << "In polar coordinates:  (" << r << "; " << fi << ")" << endl;
	isEqual = a.IsEqual();
	if (isEqual)
		cout << "Elements are equal" << endl;
	else
		cout << "Elements are not equal" << endl;

	string s;
	s = a.toString();
	cout << s << endl;

	return 0;
}
