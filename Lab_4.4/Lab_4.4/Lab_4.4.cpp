

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

	double xp, xk, dx;
	double x, R1, R2, y;

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

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

		if (x <= -6)
			y = R2 / 2;
		else
			if (x > -6 && x <= -2 * R2)
				y = (-R2 * (x + 4 * R2)) / (4 * (3 - R2));
			else
				if (x < -2 * R2 && x <= 0)
					y = sqrt(R2 * R2 - pow((x + 2), 2));
				else
					if (x >= 0 && x <= 2 * R1)
						y = -sqrt(R1 * R1 - pow((x - 1), 2));
					else
						y = R1 * x - 2 * R1 * R1;

		cout << "|" << setw(8) << setprecision(2) << x
			<< " |" << setw(8) << setprecision(2) << y
			<< " |" << endl;

		x += dx;


	}

	cout << "---------------------" << endl;

	return 0;





}

