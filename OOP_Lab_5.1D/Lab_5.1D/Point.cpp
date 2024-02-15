////Point.cpp

#include "Point.h"

Point::Point()
	:Pair(0, 0)
{}

Point::Point(const int valueX, const int valueY)
	: Pair(valueX, valueY)
{}

Point::Point(const Point& p)
	: Pair(p)
{}

Point& Point::operator++() throw(MyException)
{
	if ((GetX() + 1) == 101)
		throw MyException("x > 100");
	SetX(GetX() + 1);
	return *this;
}

Point& Point::operator--() throw(MyException)
{
	if ((GetX() - 1) == -101)
		throw MyException("x < -100");
	SetX(GetX() - 1);
	return *this;
}

Point Point::operator++(int) throw(MyException)
{
	Point a(*this);
	if ((GetY() + 1) == 101)
		throw MyException("y > 100");
	SetY(GetY() + 1);
	return a;
}

Point Point::operator--(int) throw(MyException)
{
	Point a(*this);
	if ((GetY() - 1) == -101)
		throw MyException("y < -100");
	SetY(GetY() - 1);
	return a;
}

double Point::ToPolar()
{
	return atan(GetY() * 1.0 / GetX());
}

double Point::Length()
{
	return sqrt(GetX() * GetX() + GetY() * GetY());
}

bool IsEqual(const Point& a, const Point& b)
{
	return (a == b);
}

bool IsNotEqual(const Point& a, const Point& b)
{
	return !IsEqual(a, b);
}
