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
	void Init(int h, int m, int s);
	void Read();
	void Display() const;
	void IncreaseHour() { hour++; }
	void IncreaseMinute() { minute++; }
	void IncreaseSecond() { second++; }
	string toString() const;

};

