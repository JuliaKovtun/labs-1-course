////Source.cpp

#include "Point.h"
#include"Point_private.h"
#include"Point_public.h"

using namespace std;

int main()
{
	Point_private a;
	cin >> a;
	double r = a.Length();
	cout << "Length from A to (0, 0):  " << r << endl;

	Point_public b;
	cin >> b;
	double fi = a.ToPolar();
	cout << "B in polar coordinates: (" << r << ", " << fi << ")";

	
	return 0;
}