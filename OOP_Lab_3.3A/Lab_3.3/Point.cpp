////Point.cpp

#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int ValueX, int ValueY)
{
	x = ValueX;
	y = ValueY;
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

ostream& operator<<(ostream& out, const Point& a)
{
	out << string(a);
	return out;
}

istream& operator>>(istream& in, Point& a)
{
	cout << "X = "; in >> a.x;
	cout << "Y = "; in >> a.y;
	cout << endl;

	return in;
}
