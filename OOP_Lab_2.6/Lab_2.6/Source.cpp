//Source.cpp

#include "Time.h"

using namespace std;

int main()
{
	Time::Triad a;
	cin >> a;
	cout << endl << "Increased minute:" << endl;
	a.IncreaseMinute();
	cout << a << endl;

	Time b;
	cin >> b;
	b.ChangeSecond();
	cout << endl << "Changed seconds: " << endl;
	cout << b << endl;

	cout << "Time: " << Time::getCounter() << endl;
	cout << "Time::Triad: " << Time::Triad::getCounter() << endl;


	return 0;
}