// Lab_03_3.cpp
// Ковтун Юлія Олегівна
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 15

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, R1, R2, y;

	cout << "x = "; cin >> x;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

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

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;



}

