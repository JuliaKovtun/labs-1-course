////Time_private.cpp

#include "Time_private.h"

Time_private::Time_private()
	:Triad()
{}

Time_private::Time_private(const int hour, const int minute, const int second) throw(MyException)
{
	if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >=0 && second < 60)
	{
		SetHour(hour);
		SetMinute(minute);
		SetSecond(second);
	}
	else
		throw MyException("Wrong argument!");
	

}

Time_private::Time_private(const Time_private& time)
	:Triad(time)
{}

void Time_private::HourTransform()
{
	if (GetHour() >= 24)
		SetHour(GetHour() - 24);
}

void Time_private::MinuteTransform()
{
	if (GetMinute() >= 60)
	{
		SetMinute(GetMinute() - 60);
		SetHour(GetHour() + 1);
		HourTransform();
	}
}

void Time_private::SecondTransform()
{
	if (GetSecond() >= 60)
	{
		SetSecond(GetSecond() - 60);
		SetMinute(GetMinute() + 1);
		MinuteTransform();
	}
}

void Time_private::IncreaseHour()
{
	SetHour(GetHour() + 1);
	HourTransform();
}

void Time_private::IncreaseMinute()
{
	SetMinute(GetMinute() + 1);
	MinuteTransform();
}

void Time_private::IncreaseSecond()
{
	SetSecond(GetSecond() + 1);
	SecondTransform();
}

void Time_private::ChangeMinute()
{
	int m;
	cout << "Enter number of minutes: "; cin >> m;
	SetMinute(GetMinute() + m);
	MinuteTransform();
}

void Time_private::ChangeSecond()
{
	int s;
	cout << "Enter number of seconds: "; cin >> s;
	SetSecond(GetSecond() + s);
	SecondTransform();
}

Time_private& Time_private::operator ++()
{
	SetHour(GetHour() + 1);
	if (GetHour() > 23)
		SetHour(0);

	return *this;
}

Time_private& Time_private::operator --()
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

Time_private Time_private::operator ++(int)
{
	Time_private t(*this);
	SetHour(GetHour() + 1);

	if (GetHour() > 23)
		SetHour(0);
	return t;
}

Time_private Time_private::operator --(int)
{
	Time_private t(*this);
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

Time_private::operator string() const
{
	stringstream ss;
	ss << GetHour() << " : " << GetMinute() << " : " << GetSecond() << endl;
	return ss.str();
}

Time_private& Time_private::operator =(const Time_private& t)
{
	SetHour(t.GetHour());
	SetMinute(t.GetMinute());
	SetSecond(t.GetSecond());

	return *this;
}

ostream& operator <<(ostream& out, const Time_private& t)
{
	out << string(t);
	return out;
}

istream& operator >>(istream& in, Time_private& t) throw (MyDeliveredException)
{
	int h, m, s;

	cout << "Enter hours\t"; in >> h;
	cout << endl << "Enter minutes\t"; in >> m;
	cout << endl << "Enter seconds\t"; in >> s;
	if (h > 23 || h < 0 || m > 59 || m < 0 || s > 59 || s < 0)
		throw new MyDeliveredException();
	t = Time_private(h, m, s);

	return in;
}