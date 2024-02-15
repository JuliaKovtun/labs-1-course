////Time_public.h

#pragma once
#include"Triad.h"

class Time_public : public Triad
{
public:
	Time_public();
	Time_public(const int hour, const int minute, const int second) throw(invalid_argument);
	Time_public(const Time_public& a);
	~Time_public(void) {}

	void HourTransform();
	void MinuteTransform();
	void SecondTransform();

	void IncreaseHour();
	void IncreaseMinute();
	void IncreaseSecond();

	void ChangeSecond();
	void ChangeMinute();

	Time_public& operator++();
	Time_public& operator--();
	Time_public operator++(int);
	Time_public operator--(int);

	operator string() const;
	Time_public& operator=(const Time_public& t);
	friend ostream& operator <<(ostream& out, const Time_public& t);
	friend istream& operator >>(istream& in, Time_public& t);
};

