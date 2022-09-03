/////Time.cpp

#include "Time.h"
#include <string>
#include <sstream>

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

