////Triad.h

#pragma once
#include<iostream>
#include <string>
#include <sstream>
#include <exception>
#include "MyException.h"
#include "MyDeliveredException.h"

using namespace std;

class Triad
{
private:
	int hour;
	int minute;
	int second;

public:
	void SetHour(int value) throw(invalid_argument);
	void SetMinute(int value) throw(invalid_argument);
	void SetSecond(int value) throw(invalid_argument);

	int GetHour() const { return hour; }
	int GetMinute() const { return minute; }
	int GetSecond() const { return second; }

	void IncreaseHour() { hour++; }
	void IncreaseMinute() { minute++; }
	void IncreaseSecond() { second++; }

	Triad();
	Triad(int h, int m, int s) throw(invalid_argument);
		

	Triad(const Triad& t)
		:Triad(t.hour, t.minute, t.second) {}

	~Triad(void) {}

	Triad& operator ++() throw(MyException);
	Triad& operator --() throw(MyException);
	Triad operator ++(int) throw(MyException);
	Triad operator --(int) throw(MyException);

	operator string() const;

	Triad& operator =(const Triad& t);

	friend ostream& operator <<(ostream& out, const Triad& t);
	friend istream& operator >>(istream& in, Triad& t) throw(MyDeliveredException);
};

