

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double x, xp, xk, dx;
	double a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << "|"
		<< setw(5) << "F" << setw(5) << "|" << endl
		<< "---------------------" << endl;

	x = xp;

	while (x <= xk)
	{

		if (x < 0 && b != 0)
			F = -a * x * x + b;
		else
			if (x > 0 && b == 0)
				F = x / (x - c) + 5.5;
			else
				F = x / (-c);

		cout << "|" << setw(8) << setprecision(2) << x
			<< " |" << setw(8) << setprecision(2) << F
			<< " |" << endl;

		x += dx;


	}

	cout << "---------------------" << endl;

	return 0;



}

