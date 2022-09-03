/////Time.h

#pragma once
#include <string>
#include <iostream>
using namespace std;

class Time
{
public:
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
	void Init(Time::Triad value);
	void Read();
	void Display();
	void IncreaseHour();
	void IncreaseMinute();
	void IncreaseSecond();
	void ChangeSecond();
	void ChangeMinute();
	string toString();

};

