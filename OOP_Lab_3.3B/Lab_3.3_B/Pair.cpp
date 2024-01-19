////Pair.cpp

#include "Pair.h"

Pair::Pair()
{
	x = 0;
	y = 0;
}

Pair::Pair(const int valueX, const int valueY)
{
	x = valueX;
	y = valueY;
}

Pair::Pair(const Pair& p)
{
	x = p.x;
	y = p.y;
}

Pair& Pair::operator=(const Pair& p)
{
	x = p.x;
	y = p.y;
	return *this;
}

Pair::operator string() const
{
	stringstream ss;
	ss << "X = " << x << endl;
	ss << "Y = " << y << endl;
	return ss.str();
}

bool operator==(const Pair& p1, const Pair& p2)
{
	return ((p1.x == p2.x) && (p1.y == p2.y));
}

bool operator!=(const Pair& p1, const Pair& p2)
{
	return !(p1 == p2);
}

bool operator>(const Pair& p1, const Pair& p2)
{
	return ((p1.x > p2.x) || ((p1.x == p2.x) && (p1.y > p2.y)));
}

bool operator<(const Pair& p1, const Pair& p2)
{
	return ((p1.x < p2.x) || ((p1.x == p2.x) && (p1.y < p2.y)));
}

bool operator>=(const Pair& p1, const Pair& p2)
{
	return !(p1 < p2);
}

bool operator<=(const Pair& p1, const Pair& p2)
{
	return !(p1 > p2);
}

ostream& operator<<(ostream& out, const Pair& p)
{
	out << string(p);
	return out;
}

istream& operator>>(istream& in, Pair& p)
{
	cout << "X = "; in >> p.x;
	cout << "Y = "; in >> p.y;
	cout << endl;

	return in;
}