/////////Point.cpp

#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int valueX = 0, int valueY = 0) throw (invalid_argument)
{
	if (abs(valueX) > 100 || abs(valueY) > 100)
		throw invalid_argument("value > 100 || value < 100");
	x = valueX;
	y = valueY;
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

Point& Point::operator++() throw(MyException)
{
	x++;
	if (x == 101)
		throw MyException("x > 100");
	return *this;
}

Point& Point::operator--() throw(MyException)
{
	x--;
	if (x == -101)
		throw MyException("x < -100");
	return *this;
}

Point Point::operator++(int) throw(MyException)
{
	Point a(*this);
	y++;
	if (y == 101)
		throw MyException("y > 100");
	return a;
}

Point Point::operator--(int) throw(MyException)
{
	Point a(*this);
	y--;
	if (y == -101)
		throw MyException("y < -100");
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

istream& operator >> (istream& in, Point& a) throw (MyDeliveredException)
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

bool operator==(const Point& a, const Point& b)
{

	return a.x == b.x && a.y == b.y;
}

bool operator!=(const Point& a, const Point& b)
{
	return !(a == b);
}

bool IsEqual(const Point& a, const Point& b)
{
	return a.x == b.x && a.y == b.y;
}

bool IsNotEqual(const Point& a, const Point& b)
{
	return !IsEqual(a, b);
}

