
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{

	double x, R, y;

	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (((pow((x + R), 2) + pow((y - R), 2)) >= R * R && x <= 0 && y >= 0) ||
			((x * x + y * y) <= R * R && x >= 0 && y <= 0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;

		if (((pow((x + R), 2) + pow((y - R), 2)) >= R * R && x <= 0 && y >= 0) ||
			((x * x + y * y) <= R * R && x >= 0 && y <= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;

}

