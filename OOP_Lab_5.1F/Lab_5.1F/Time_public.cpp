////Time_public.cpp

#include "Time_public.h"

Time_public::Time_public()
	:Triad()
{}

Time_public::Time_public(const int hour, const int minute, const int second) throw(invalid_argument)
{
	if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60)
	{
		SetHour(hour);
		SetMinute(minute);
		SetSecond(second);
	}
	else
		throw invalid_argument("Wrong argument!");
}

Time_public::Time_public(const Time_public& a)
{
	SetHour(a.GetHour());
	SetMinute(a.GetMinute());
	SetSecond(a.GetSecond());
}

void Time_public::HourTransform()
{
	if (GetHour() >= 24)
		SetHour(GetHour() - 24);
}

void Time_public::MinuteTransform()
{
	if (GetMinute() >= 60)
	{
		SetMinute(GetMinute() - 60);
		SetHour(GetHour() + 1);
		HourTransform();
	}
}

void Time_public::SecondTransform()
{
	if (GetSecond() >= 60)
	{
		SetSecond(GetSecond() - 60);
		SetMinute(GetMinute() + 1);
		MinuteTransform();
	}
}

void Time_public::IncreaseHour()
{
	SetHour(this->GetHour() + 1);
	HourTransform();
}

void Time_public::IncreaseMinute()
{
	SetMinute(GetMinute() + 1);
	MinuteTransform();
}

void Time_public::IncreaseSecond()
{
	SetSecond(GetSecond() + 1);
	SecondTransform();
}

void Time_public::ChangeMinute()
{
	int m;
	cout << "Enter number of minutes: "; cin >> m;
	SetMinute(GetMinute() + m);
	MinuteTransform();
}

void Time_public::ChangeSecond()
{
	int s;
	cout << "Enter number of seconds: "; cin >> s;
	SetSecond(GetSecond() + s);
	SecondTransform();
}

Time_public& Time_public::operator ++()
{
	SetHour(GetHour() + 1);
	if (GetHour() > 23)
		SetHour(0);

	return *this;
}

Time_public& Time_public::operator --()
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

Time_public Time_public::operator ++(int)
{
	Time_public t(*this);
	SetHour(GetHour() + 1);

	if (GetHour() > 23)
		SetHour(0);
	return t;
}

Time_public Time_public::operator --(int)
{
	Time_public t(*this);
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

Time_public::operator string() const
{
	stringstream ss;
	ss << GetHour() << " : " << GetMinute() << " : " << GetSecond() << endl;
	return ss.str();
}

Time_public& Time_public::operator =(const Time_public& t)
{
	SetHour(t.GetHour());
	SetMinute(t.GetMinute());
	SetSecond(t.GetSecond());

	return *this;
}

ostream& operator <<(ostream& out, const Time_public& t)
{
	out << string(t);
	return out;
}

istream& operator >>(istream& in, Time_public& t) throw (MyDeliveredException)
{
	int h, m, s;

	cout << "Enter hours\t"; in >> h;
	cout << endl << "Enter minutes\t"; in >> m;
	cout << endl << "Enter seconds\t"; in >> s;
	if (h > 23 || h < 0 || m > 59 || m < 0 || s > 59 || s < 0)
		throw new MyDeliveredException();
	t = Time_public(h, m, s);

	return in;
}
