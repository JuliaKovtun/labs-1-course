////Source.cpp

#include"Pair.h"
#include"Point.h"

using namespace std;

int main()
{
	Pair FirstPair;
	cout << "First pair:\n";  cin >> FirstPair;

	cout << endl;

	Pair SecondPair(2, 6);
	cout << "Second pair:\n" << SecondPair << endl;
	
	if (FirstPair == SecondPair)
		cout << "First pair = Second pair" << endl << endl;
	else
		cout << "First pair != Second pair" << endl << endl;

	Point FirstPoint;
	cout << "First point:\n"; cin >> FirstPoint;
	double r = FirstPoint.Length();
	double fi = FirstPoint.ToPolar();
	cout << "First point in polar coordinates: (" << r << ", " << fi << ")" << endl;




	return 0;
}