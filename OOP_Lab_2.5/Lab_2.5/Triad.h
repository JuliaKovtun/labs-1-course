/////Triad.h

#pragma once
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

class Triad
{
private:
	int hour;
	int minute;
	int second;

public:
	void SetHour(int value) { hour = value; }
	void SetMinute(int value) { minute = value; }
	void SetSecond(int value) { second = value; }

	int GetHour() { return hour; }
	int GetMinute() { return minute; }
	int GetSecond() { return second; }

	void IncreaseHour() { hour++; }
	void IncreaseMinute() { minute++; }
	void IncreaseSecond() { second++; }

	Triad();
	Triad(int h, int m, int s)
		:hour(h), minute(m), second(s){}

	Triad (const Triad& t)
		:Triad(t.hour, t.minute, t.second){}

	~Triad(void){}

	Triad& operator ++();
	Triad& operator --();
	Triad operator ++(int);
	Triad operator --(int);

	operator string() const;

	Triad& operator =(const Triad& t);

	friend ostream& operator <<(ostream& out, const Triad& t);
	friend istream& operator >>(istream& in, Triad& t);
};

