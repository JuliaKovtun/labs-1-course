/////Time.h

#pragma once
#include "Triad.h"

class Time
{
private:
	Triad time;

public:
	void SetHour(int value);
	void SetMinute(int value);
	void SetSecond(int value);
	int GetHour() { return time.GetHour(); }
	int GetMinute() { return time.GetMinute(); }
	int GetSecond() { return time.GetSecond(); }
	void HourTransform();
	void MinuteTransform();
	void SecondTransform();
	void Init(Triad value);
	void Read();
	void Display();
	void IncreaseHour();
	void IncreaseMinute();
	void IncreaseSecond();
	void ChangeSecond();
	void ChangeMinute();
	string toString();

};

