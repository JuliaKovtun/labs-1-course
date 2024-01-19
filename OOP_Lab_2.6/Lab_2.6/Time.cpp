/////Time.cpp

#include "Time.h"

int Time::counter = 0;
int Time::Triad::counter = 0;


Time::Time(const int hour, const int minute, const int second)
	:time(hour, minute, second)
{
	Time::counter++;
}

Time::Time(const Time& a)
{
	time = a.time;
	Time::counter++;
}

void Time::SetHour(int value)
{
	time.SetHour(time.GetHour() + value);
	HourTransform();
}

void Time::SetMinute(int value)
{
	time.SetMinute(time.GetMinute() + value);
	MinuteTransform();
}

void Time::SetSecond(int value)
{
	time.SetSecond(time.GetSecond() + value);
	SecondTransform();
}

void Time::HourTransform()
{
	if (time.GetHour() >= 24)
		time.SetHour(time.GetHour() % 24);
}

void Time::MinuteTransform()
{
	if (time.GetMinute() >= 60)
		time.SetMinute(time.GetMinute() % 60);
}

void Time::SecondTransform()
{
	if (time.GetSecond() >= 60)
		time.SetSecond(time.GetSecond() % 60);
}

void Time::Init(Triad value)
{
	this->time = value;
	HourTransform();
	MinuteTransform();
	SecondTransform();
}

void Time::Read()
{

	int h, m, s;
	cout << "Enter hours\t"; cin >> h;
	cout << endl << "Enter minutes\t"; cin >> m;
	cout << endl << "Enter seconds\t"; cin >> s;

	Triad a;
	a.Init(h, m, s);
	Init(a);
}

void Time::Display()
{
	time.Display();
}

void Time::IncreaseHour()
{
	time.SetHour(time.GetHour() + 1);
	HourTransform();
}

void Time::IncreaseMinute()
{
	time.SetMinute(time.GetMinute() + 1);
	MinuteTransform();
}

void Time::IncreaseSecond()
{
	time.SetSecond(time.GetSecond() + 1);
	SecondTransform();
}

void Time::ChangeMinute()
{
	int m;
	cout << "Enter number of minutes: "; cin >> m;
	time.SetMinute(time.GetMinute() + m);
	MinuteTransform();
}

void Time::ChangeSecond()
{
	int s;
	cout << "Enter number of seconds: "; cin >> s;
	time.SetSecond(time.GetSecond() + s);
	SecondTransform();
}

string Time::toString()
{
	return time.toString();
}

Time& Time::operator++()
{
	++time;
	if (time.GetHour() > 23)
		time.SetHour(0);

	return *this;
}

Time& Time::operator--()
{
	--time;
	if (time.GetMinute() < 0)
	{
		time.SetMinute(59);
		time.SetHour(GetHour() - 1);
		if (time.GetHour() < 0)
			time.SetHour(23);
	}

	return *this;
}

Time Time::operator++(int)
{
	Time t(*this);
	time++;

	if (time.GetHour() > 23)
		time.SetHour(0);

	return t;
}

Time Time::operator--(int)
{
	Time t(*this);
	time--;
	if (time.GetMinute() < 0)
	{
		time.SetMinute(59);
		time.SetHour(GetHour() - 1);
		if (time.GetHour() < 0)
			time.SetHour(23);
	}

	return t;
}

Time::operator string() const
{
	return string(time);
}

Time& Time::operator=(const Time& t)
{
	time = t.time;

	return *this;
}

int Time::getCounter()
{
	return Time::counter;
}

Time::Triad::Triad()
	: hour(0), minute(0), second(0)
{
	Time::Triad::counter++;
}

Time::Triad& Time::Triad::operator=(const Triad & t)
{
	hour = t.hour;
	minute = t.minute;
	second = t.second;

	return *this;
}

Time::Triad::operator string() const
{
	stringstream sout;
	sout << "( " << hour << " , " << minute << " , " << second << " )" << endl;
	return sout.str();
}

Time::Triad& Time::Triad::operator++()
{
	hour++;
	return *this;
}

Time::Triad& Time::Triad::operator--()
{
	minute--;
	return *this;
}

Time::Triad Time::Triad::operator++(int)
{
	Triad t(*this);
	hour++;
	return t;
}

Time::Triad Time::Triad::operator--(int)
{
	Triad t(*this);
	minute--;
	return t;
}


void Time::Triad::Init(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Time::Triad::Read()
{
	int h, m, s;

	cout << "Enter hours\t"; cin >> h;
	cout << endl << "Enter minutes\t"; cin >> m;
	cout << endl << "Enter seconds\t"; cin >> s;
	Init(h, m, s);

}

void Time::Triad::Display() const
{
	cout << "hours: " << hour
		<< "\nminutes: " << minute
		<< "\nseconds: " << second
		<< endl;
}

string Time::Triad::toString() const
{
	stringstream sout;
	sout << "Hours: " << hour << "\tMinutes: " << minute << "\tSeconds: " << second << endl;
	return sout.str();
}

int Time::Triad::getCounter()
{
	return Time::Triad::counter; 
}

ostream& operator<<(ostream& out, const Time::Triad& t)
{
	out << string(t);
	return out;
}

istream& operator>>(istream& in, Time::Triad& t)
{
	int h, m, s;

	cout << "Enter hours\t"; in >> h;
	cout << endl << "Enter minutes\t"; in >> m;
	cout << endl << "Enter seconds\t"; in >> s;
	t = Time::Triad(h, m, s);
	return in;
}

ostream& operator<<(ostream& out, const Time& t)
{
	out << string(t);
	return out;
}

istream& operator>>(istream& in, Time& t)
{
	cout << "Time = ? " << endl;
	in >> t.time;

	return in;
}
