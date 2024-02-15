////Source.cpp

#include "Point.h"
#include"Point_private.h"
#include"Point_public.h"

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

	Point_private a;

	try 
	{
		cout << "A:\n";
		cin >> a;
		double r = a.Length();
		cout << "Length from A to (0, 0):  " << r << endl;
	}
	catch (MyDeliveredException ex)
	{
		cerr << ex.What() << endl;
	}

	cout << "============================================" << endl << "B: \n";

	try
	{
		Point_public b;
		cin >> b;

		b--;
		++b;
			
	}
	catch (MyDeliveredException* a)
	{
		cerr << a->What() << endl;
	}
	catch (MyException& ex)
	{
		cerr << ex.What() << endl;
	}

	return 0;
}