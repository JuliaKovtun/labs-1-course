

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double x, xp, xk, dx, A, B, y;
	
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << "|"
		<< setw(5) << "y" << setw(5) << "|" << endl
		<< "---------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		
		A = pow(x, 3) + 2;

		if (x < 4)
			B = 5 * pow(x, 8) + pow(x, 6) - x * x + 3;

		else
			if (x >= 4 && x < 7)
				B = atan(fabs((x + 3) / 2)) + 7 * x;

			else
				B = log10(x) * (2 * x + exp(5 * x + 5));

		y = A + B;

		cout << "|" << setw(8) << setprecision(2) << x
			<< " |" << setw(8) << setprecision(2) << y
			<< " |" << endl;

		x += dx;

		
	}

	cout << "---------------------" << endl;

	return 0;
}

