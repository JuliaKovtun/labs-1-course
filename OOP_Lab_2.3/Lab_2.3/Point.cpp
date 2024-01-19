/////////Point.cpp

#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int valueX = 0, int valueY = 0)
{
	x = valueX;
	y = valueY;
}

Point::Point(const Point& a)
{
	x = a.x;
	y = a.y;
}

Point& Point::operator=(const Point& a)
{
	x = a.x;
	y = a.y;

	return *this;
}

Point::operator string() const
{
	stringstream ss;
	ss << "X = " << x << endl;
	ss << "Y = " << y << endl;
	return ss.str();
}

Point& Point::operator++()
{
	x++;
	return *this;
}

Point& Point::operator--()
{
	x--;
	return *this;
}

Point Point::operator++(int)
{
	Point a(*this);
	y++;
	return a;
}

Point Point::operator--(int)
{
	Point a(*this);
	y--;
	return a;
}

double Point::ToPolar()
{
	return atan(y * 1.0 / x);
}

double Point::Length()
{
	return sqrt(x * x + y * y);
}

ostream& operator << (ostream& out, const Point& a)
{
	out << string(a);
	return out;
}

istream& operator >> (istream& in, Point& a)
{
	cout << "X = "; in >> a.x;
	cout << "Y = "; in >> a.y;
	cout << endl;

	return in;
}

bool operator==(const Point& a, const Point& b)
{

	return a.x == b.x && a.y == b.y;
}

bool operator!=(const Point& a, const Point& b)
{
	return a.x != b.x || a.y != b.y;
}

bool IsEqual(const Point& a, const Point& b)
{
	return a.x == b.x && a.y == b.y;
}

bool IsNotEqual(const Point& a, const Point& b)
{
	return !IsEqual(a, b);
}

