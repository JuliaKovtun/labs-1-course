
#include <iostream>
using namespace std;

int main()
{
	double a;
	double b;
	char c;
	int i;


	do {
		cout << "Enter first number: "; cin >> a;
		cout << endl << "Enter second number: "; cin >> b;
		cout << endl << "Enter the operation: "; cin >> c;

		if (c == '+')
			cout << a + b << endl;

		if (c == '-')
			cout << a - b << endl;

		if (c == '*')
			cout << a * b << endl;

		if (c == '/')
			cout << a / b << endl;

		cout << "If you want to calculate once again enter: 1. If not - enter 0." << endl;
		cin >> i;


	} while (i == 1);

	return 0;
}
