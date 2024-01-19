////Point.cpp

#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(const int ValueX, const int ValueY)
{
	x = ValueX;
	y = ValueY;
}

Point::Point(const Point& point)
{
	x = point.x;
	y = point.y;
}

Point::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}

void Point::ChangePoint()
{
	int x, y;
	cout << "X = "; cin >> x;
	cout << "Y = "; cin >> y;
	SetX(x);
	SetY(y);
}

void Point::Print()
{
	cout << "coordinates: (" << GetX() << ", " << GetY() << ")" << endl;
}

ostream& operator<<(ostream& out, const Point& point)
{
	out << "(" << point.x << ", " << point.y << ")" << endl;
	return out;
}

istream& operator>>(istream& in, Point& p)
{
	cout << "x = "; in >> p.x;
	cout << "y = "; in >> p.y;
	return in;
}
