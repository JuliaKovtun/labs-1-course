/////Time.h

#pragma once
#include<iostream>
#include <string>
#include <sstream>

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
		static int counter;

	public:

		Triad();
		Triad(int h, int m, int s)
			:hour(h), minute(m), second(s) {
			Time::Triad::counter++;
		}

		Triad(const Triad& t)
			:Triad(t.hour, t.minute, t.second) {
			Time::Triad::counter++;
		}

		~Triad(void) {
			Time::Triad::counter--;
		}

		Triad& operator =(const Triad& t);

		friend ostream& operator <<(ostream& out, const Triad& t);
		friend istream& operator >>(istream& in, Triad& t);

		operator string() const;

		Triad& operator ++();
		Triad& operator --();
		Triad operator ++(int);
		Triad operator --(int);

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

		static int getCounter();

	};

private:
	Triad time;
	static int counter;

public:

	Time(const int hour = 0, const int minute = 0, const int second = 0);
	Time(const Time& a);
	~Time(void) { Time::counter--; }

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

	Time& operator++();
	Time& operator--();
	Time operator++(int);
	Time operator--(int);
	operator string() const;
	Time& operator=(const Time& t);

	friend ostream& operator <<(ostream& out, const Time& t);
	friend istream& operator >>(istream& in, Time& t);

	static int getCounter();
};

