////Point_private.cpp

#include "Point_private.h"

Point_private::Point_private()
	:Point_private(0, 0)
{}

Point_private::Point_private(int valueX, int valueY)
{
	SetX(valueX);
	SetY(valueY);
}

Point_private::Point_private(const Point_private& p)
{
	SetX(p.GetX());
	SetY(p.GetY());
}

Point_private& Point_private::operator++()
{
	SetX(GetX() + 1);
	return *this;
}

Point_private& Point_private::operator--()
{
	SetX(GetX() - 1);
	return *this;
}

Point_private Point_private::operator++(int)
{
	Point_private a(*this);
	SetY(GetY() + 1);
	return a;
}

Point_private Point_private::operator--(int)
{
	Point_private a(*this);
	SetY(GetY() - 1);
	return a;
}

double Point_private::ToPolar()
{
	return atan(GetY() * 1.0 / GetX());
}

double Point_private::Length()
{
	return sqrt((GetX() * GetX()) + (GetY() * GetY()));
}

bool operator==(const Point_private& a, const Point_private& b)
{
	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}

bool operator!=(const Point_private& a, const Point_private& b)
{
	return !(a == b);
}

bool IsEqual(const Point_private& a, const Point_private& b)
{
	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}

bool IsNotEqual(const Point_private& a, const Point_private& b)
{
	return !IsEqual(a, b);
}

ostream& operator<<(ostream& out, const Point_private& a)
{
	out << string(a);
	return out;
}

istream& operator>>(istream& in, Point_private& a)
{
	int valueX, valueY;
	cout << "X = "; in >> valueX;
	cout << "Y = "; in >> valueY;
	a.SetX(valueX);
	a.SetY(valueY);

	return in;
}