/////Time.cpp

#include "Time.h"

Time::Time(const int hour, const int minute, const int second)
	:time(hour, minute, second)
{}

Time::Time(const Time& a)
{
	time = a.time;
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
		time.SetHour(time.GetHour() - 24);
}

void Time::MinuteTransform()
{
	if (time.GetMinute() >= 60) 
	{
		time.SetMinute(time.GetMinute() - 60);
		time.SetHour(time.GetHour() + 1);
		HourTransform();
	}
}

void Time::SecondTransform()
{
	if (time.GetSecond() >= 60)
	{
		time.SetSecond(time.GetSecond() - 60);
		time.SetMinute(time.GetMinute() + 1);
		MinuteTransform();
	}
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

Time& Time::operator ++()
{
	++time;
	if (time.GetHour() > 23)
		time.SetHour(0);

	return *this;
}

Time& Time::operator --()
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

Time Time::operator ++(int)
{
	Time t(*this);
	time++;

	if (time.GetHour() > 23)
		time.SetHour(0);
	return t;
}

Time Time::operator --(int)
{
	Time t(*this);
	time--;
	if (time.GetMinute() < 0)
	{
		time.SetMinute(59);
		time.SetHour(GetHour() - 1);
		if(time.GetHour() < 0)
			time.SetHour(23);
	}

	return t;
}

Time::operator string() const
{
	return string(time);
}

Time& Time::operator =(const Time& t)
{
	time = t.time;

	return *this;
}

ostream& operator <<(ostream& out, const Time& t)
{
	out << string(t);
	return out;
}

istream& operator >>(istream& in, Time& t)
{
	cout << "Time = ? " << endl;
	in >> t.time;

	return in;
}










