/////Source.cpp

#include<iostream>
#include "Triad.h"
#include "Time.h"
using namespace std;

int main()
{
	Triad a;
	a.Read();
	cout << endl << "Increased minute:" << endl;
	a.IncreaseMinute();
	a.Display();

	string s;
	s = a.toString();
	cout << endl << s << endl;

	Time b;
	b.Init(a);
	b.ChangeSecond();
	cout << endl <<  "Changed seconds: " << endl;
	b.Display();

	b.IncreaseMinute();
	cout << endl << "Increased minute:" << endl;
	b.Display();

	string s2;
	s2 = b.toString();
	cout << s2 << endl;

	return 0;
}
