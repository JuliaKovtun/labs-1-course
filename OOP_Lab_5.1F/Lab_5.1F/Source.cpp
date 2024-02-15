////Source.cpp

#include"Time_public.h"
#include"Time_private.h"
#include"Triad.h"

using namespace std;

void _unexpected_to_bad()
{
	cerr << "bad_exception" << endl;
	throw;
}

int main()
{
	set_unexpected(_unexpected_to_bad);
	set_terminate(_unexpected_to_bad);

	Time_public t;
	try
	{
		cout << "Time_public t:\n";
		cin >> t;
		cout << t;
		cout << endl << endl;
		t.ChangeMinute();
		cout << t << endl;
	}
	catch (MyDeliveredException* a)
	{
		cerr << a->What();
	}

	try
	{
		cout << "\n\nTime_private h: " << endl;
		Time_private h(25, 45, 1);
		cout << h;
		h.IncreaseHour();
		cout << h << endl;
	}
	catch (MyException& a)
	{
		cerr << a.What() << endl;
	}

	try
	{
		cout << "\nTriad a:\n";
		Triad a;
		cin >> a;
		a++;
	}
	catch (MyDeliveredException a)
	{
		cerr << a.What() << endl;
	}
	catch (MyException a)
	{
		cerr << a.What() << endl;
	}

	return 0;
}