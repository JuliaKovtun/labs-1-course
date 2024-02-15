/////Triad.cpp

#include "Triad.h"

void Triad::SetHour(int value) throw(invalid_argument)
{
	if (abs(value) > 100)
		throw invalid_argument("value > 100 || value < 100");
	hour = value;
}

void Triad::SetMinute(int value) throw(invalid_argument)
{
	if (abs(value) > 100)
		throw invalid_argument("value > 100 || value < 100");
	minute = value;
}

void Triad::SetSecond(int value) throw(invalid_argument)
{
	if (abs(value) > 100)
		throw invalid_argument("value > 100 || value < 100");
	second = value;
}

Triad::Triad()
	: hour(0), minute(0), second(0)
{}

Triad::Triad(int h, int m, int s) throw(invalid_argument)
{
	if (abs(h) > 100 || abs(m) > 100 || abs(s) > 100)
		throw invalid_argument("value > 100 || value < 100");
	hour = h;
	minute = m;
	second = s;
}

Triad& Triad::operator ++() throw(MyException)
{
	hour++;
	if (hour == 101)
		throw MyException("value > 100");
	return *this;
}

Triad& Triad::operator --() throw(MyException)
{
	minute--;
	if (minute == -101)
		throw MyException("value < 100");
	return *this;
}

Triad Triad::operator ++(int) throw(MyException)
{
	Triad t(*this);
	hour++;
	if (hour == 101)
		throw MyException("value > 100");
	return t;
}

Triad Triad::operator --(int) throw(MyException)
{
	Triad t(*this);
	minute--;
	if(minute == -101)
		throw MyException("value < 100");
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

istream& operator >>(istream& in, Triad& t) throw(MyDeliveredException)
{
	int h, m, s;

	cout << "Enter hours\t"; in >> h;
	cout << endl << "Enter minutes\t"; in >> m;
	cout << endl << "Enter seconds\t"; in >> s;

	if (abs(h) > 100 || abs(m) > 100 || abs(s) > 100)
		throw MyDeliveredException();
	t = Triad(h, m, s);
	return in;
}