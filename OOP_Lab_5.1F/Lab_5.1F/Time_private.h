////Time_private.h

#pragma once
#include"Triad.h"

class Time_private : private Triad
{
public:
	using Triad::GetHour;
	using Triad::GetMinute;
	using Triad::GetSecond;
	using Triad::SetHour;
	using Triad::SetMinute;
	using Triad::SetSecond;

	using Triad::Triad;

	Time_private();
	Time_private(const int h, const int m, const int s) throw(MyException);
	Time_private(const Time_private& time);

	void HourTransform();
	void MinuteTransform();
	void SecondTransform();

	void IncreaseHour();
	void IncreaseMinute();
	void IncreaseSecond();

	void ChangeSecond();
	void ChangeMinute();

	Time_private& operator++();
	Time_private& operator--();
	Time_private operator++(int);
	Time_private operator--(int);
	operator string() const;
	Time_private& operator=(const Time_private& t);

	friend ostream& operator <<(ostream& out, const Time_private& t);
	friend istream& operator >>(istream& in, Time_private& t) throw (MyDeliveredException);
};

