/////Time.cpp

#include "Time.h"

Time::Time(const int hour, const int minute, const int second)
{
	if (hour < 24 && minute < 60 && second < 60) 
	{
		SetHour(hour);
		SetMinute(minute);
		SetSecond(second);
	}
}

Time::Time(const Time& a)
{
	SetHour(a.GetHour());
	SetMinute(a.GetMinute());
	SetSecond(a.GetSecond());
}

void Time::HourTransform()
{
	if (GetHour() >= 24)
		SetHour(GetHour() - 24);
}

void Time::MinuteTransform()
{
	if (GetMinute() >= 60)
	{
		SetMinute(GetMinute() - 60);
		SetHour(GetHour() + 1);
		HourTransform();
	}
}

void Time::SecondTransform()
{
	if (GetSecond() >= 60)
	{
		SetSecond(GetSecond() - 60);
		SetMinute(GetMinute() + 1);
		MinuteTransform();
	}
}

void Time::IncreaseHour()
{
	SetHour(this->GetHour() + 1);
	HourTransform();
}

void Time::IncreaseMinute()
{
	SetMinute(GetMinute() + 1);
	MinuteTransform();
}

void Time::IncreaseSecond()
{
	SetSecond(GetSecond() + 1);
	SecondTransform();
}

void Time::ChangeMinute()
{
	int m;
	cout << "Enter number of minutes: "; cin >> m;
	SetMinute(GetMinute() + m);
	MinuteTransform();
}

void Time::ChangeSecond()
{
	int s;
	cout << "Enter number of seconds: "; cin >> s;
	SetSecond(GetSecond() + s);
	SecondTransform();
}

Time& Time::operator ++()
{
	SetHour(GetHour() + 1);
	if (GetHour() > 23)
		SetHour(0);

	return *this;
}

Time& Time::operator --()
{
	SetMinute(GetMinute() - 1);
	
	if (GetMinute() < 0)
	{
		SetMinute(59);
		SetHour(GetHour() - 1);

		if (GetHour() < 0)
			SetHour(23);
	}

	return *this;
}

Time Time::operator ++(int)
{
	Time t(*this);
	SetHour(GetHour() + 1);

	if (GetHour() > 23)
		SetHour(0);
	return t;
}

Time Time::operator --(int)
{
	Time t(*this);
	SetMinute(GetMinute() - 1);
	if (GetMinute() < 0)
	{
		SetMinute(59);
		SetHour(GetHour() - 1);

		if (GetHour() < 0)
			SetHour(23);
	}

	return t;
}

Time::operator string() const
{
	stringstream ss;
	ss << GetHour() << " : " << GetMinute() << " : " << GetSecond() << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Time& t)
{
	out << string(t);
	return out;
}

istream& operator >>(istream& in, Time& t)
{
	int h, m, s;

	cout << "Enter hours\t"; in >> h;
	cout << endl << "Enter minutes\t"; in >> m;
	cout << endl << "Enter seconds\t"; in >> s;
	t = Time(h, m, s);

	return in;
}

