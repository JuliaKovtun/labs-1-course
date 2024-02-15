////Point.cpp

#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int ValueX, int ValueY)
{
	if (abs(ValueX) > 100 || abs(ValueY) > 100)
		throw invalid_argument("value > 100 || value < 100");
	x = ValueX;
	y = ValueY;
}

Point::Point(const Point& a)
{
	x = a.x;
	y = a.y;
}

void Point::SetX(int value) throw(invalid_argument)
{
	if (abs(value) > 100)
		throw invalid_argument("value > 100 || value < 100");
	x = value;
}

void Point::SetY(int value) throw(invalid_argument)
{
	if (abs(value) > 100)
		throw invalid_argument("value > 100 || value < 100");
	y = value;
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

istream& operator>>(istream& in, Point& a) throw (MyDeliveredException)
{
	int valueX, valueY;
	cout << "X = "; in >> valueX;
	cout << "Y = "; in >> valueY;
	cout << endl;

	if (abs(valueX) > 100 || abs(valueY) > 100)
		throw new MyDeliveredException();

	a.x = valueX;
	a.y = valueY;

	return in;
}
