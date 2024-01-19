////Source.cpp

#include"Time.h"
#include"Triad.h"

using namespace std;

int main()
{
	Time t;
	cin >> t;
	cout << t;
	cout << endl << endl;

	Time h(2, 45, 1);
	cout << h;

	t.ChangeMinute();
	cout << t << endl;

	h.IncreaseHour();
	cout << h << endl;


	return 0;
}