#include <iostream>
#include <cmath>
using namespace std;


double g(double a, double b);

int main()
{
	double s, t;

	cout << "s = ";
	cin >> s;
	cout << endl << "t = ";
	cin >> t;

	double c = (g(2, s) + pow((1 + g(t, 1) * g(t, 1)), 3)) / sqrt(1 + g(s, t) * g(s, t));

	cout << endl << "c = " << c << endl;
}

double g(double a, double b)
{
	return (a * b) / (a * a + b * b);
}
