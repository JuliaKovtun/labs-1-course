////Source.cpp

#include"Time_public.h"
#include"Time_private.h"
#include"Triad.h"

using namespace std;

int main()
{
	Time_public t;
	cin >> t;
	cout << t;
	cout << endl << endl;

	Time_private h(2, 45, 1);
	cout << h;

	t.ChangeMinute();
	cout << t << endl;

	h.IncreaseHour();
	cout << h << endl;


	return 0;
}