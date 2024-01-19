/////Source.cpp

#include<iostream>
#include "Triad.h"
#include "Time.h"
using namespace std;

int main()
{
	Triad a;
	cin >> a;
	cout << endl << "Increased minute:" << endl;
	a.IncreaseMinute();
	cout << a << endl;

	Time b;
	cin >> b;
	b.ChangeSecond();
	cout << endl << "Changed seconds: " << endl;
	cout << b << endl;



	return 0;
}
