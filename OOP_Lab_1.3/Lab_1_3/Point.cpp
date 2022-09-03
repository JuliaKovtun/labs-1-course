/////////Point.cpp

#include "Point.h"

void Point::Display() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

void Point::Read()
{
	int valueX, valueY;

	cout << "Enter coordinates:" << endl;
	cout << "x = "; cin >> valueX;
	cout << "y = "; cin >> valueY;
	Init(valueX, valueY);
}

void Point::Init(int valueX, int valueY)
{
	x = valueX;
	y = valueY;
}

string Point::toString() const
{
	stringstream sout;
	sout << "x = " << x << "\ty = " << y << endl; 	
	return sout.str(); 
}

void Point::ToPolar(double& fi)
{
	const double PI = 3.14159265;
	fi = (atan(y * 1.0 / x) * 180) / PI;
}

void Point::Length(double& r)
{
	r = pow((x * x + y * y), 0.5);
}

bool Point::IsEqual()
{
	if (x == y)
		return true;
	else
		return false;
}

