/////Triad.cpp

#include "Triad.h"

Triad::Triad()
	: hour(0), minute(0), second(0)
{}



Triad& Triad::operator ++()
{
	hour++;
	return *this;
}

Triad& Triad::operator --()
{
	minute--;
	return *this;
}

Triad Triad::operator ++(int)
{
	Triad t(*this);
	hour++;
	return t;
}

Triad Triad::operator --(int)
{
	Triad t(*this);
	minute--;
	return t;
}

Triad::operator string() const
{
	stringstream sout;
	sout << "( " << hour << " , " << minute << " , " << second << " )" << endl;
	return sout.str();
}

Triad& Triad::operator =(const Triad& t)
{
	hour = t.hour;
	minute = t.minute;
	second = t.second;

	return *this;
}

ostream& operator <<(ostream& out, const Triad& t)
{
	out << string(t);
	return out;
}

istream& operator >>(istream& in, Triad& t)
{
	int h, m, s;

	cout << "Enter hours\t"; in >> h;
	cout << endl << "Enter minutes\t"; in >> m;
	cout << endl << "Enter seconds\t"; in >> s;
	t = Triad(h, m, s);
	return in;
}