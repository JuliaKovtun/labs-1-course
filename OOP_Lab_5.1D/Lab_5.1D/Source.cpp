////Source.cpp

#include"Pair.h"
#include"Point.h"

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

	Pair FirstPair;

	try 
	{
		cout << "First pair:\n";  cin >> FirstPair;
	}
	catch(MyDeliveredException* a)
	{
		cerr << a->What() << endl;
	}
	cout << endl;

	try {
		Pair SecondPair(2, 6);
		cout << "Second pair:\n" << SecondPair << endl;

		if (FirstPair == SecondPair)
			cout << "First pair = Second pair" << endl << endl;
		else
			cout << "First pair != Second pair" << endl << endl;
	}
	catch (invalid_argument& a)
	{
		cerr << a.what() << endl;
	}

	try 
	{
		Point FirstPoint;
		cout << "First point:\n"; cin >> FirstPoint;
		double r = FirstPoint.Length();
		double fi = FirstPoint.ToPolar();
		cout << "First point in polar coordinates: (" << r << ", " << fi << ")" << endl << endl;

		FirstPoint++;
	}
	catch (MyDeliveredException* a)
	{
		cerr << a->What();
	}
	catch (MyException a)
	{
		cerr << a.What() << endl;
	}



	return 0;
}