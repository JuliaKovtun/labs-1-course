/////Time.h

#pragma once
#include "Triad.h"

class Time: public Triad
{
public:

	Time(const int hour = 0, const int minute = 0, const int second = 0);
	Time(const Time& a);
	~Time(void) {}

	void HourTransform();
	void MinuteTransform();
	void SecondTransform();

	void IncreaseHour();
	void IncreaseMinute();
	void IncreaseSecond();

	void ChangeSecond();
	void ChangeMinute();

	Time& operator++();
	Time& operator--();
	Time operator++(int);
	Time operator--(int);
	operator string() const;

	friend ostream& operator <<(ostream& out, const Time& t);
	friend istream& operator >>(istream& in, Time& t);	
};

