//Source.cpp

#include "Vector.h"

int main()
{

	Vector a(3);
	cout << "A:" << endl;
	cin >> a;

	Vector b(3);
	cout << "B:" << endl;
	cin >> b;

	cout << "\n" << "Scalar product of a and b:\t" << ScalarProd(a, b) << endl;
	
	if (a == b)
		cout << "a is equal b" << endl;
	else
		cout << "a is not equal b" << endl;

	cout << "Vector A norm:\t" << Norma(a) << endl;

	cout << string(a) << endl;








	return 0;
}