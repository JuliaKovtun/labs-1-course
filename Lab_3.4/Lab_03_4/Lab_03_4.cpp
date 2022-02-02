// Lab_03_4.cpp
// Ковтун Юлія Олегівна
// Лабораторна робота № 3.4
// Розгалуження задане простою фігурою
// Варіант 15

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y, R;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if (((pow((x + R), 2) + pow((y - R), 2)) >= R * R && x <= 0 && y >= 0) ||
		((x * x + y * y) <= R * R && x >= 0 && y <= 0))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	cin.get();
	return 0;
	



}

