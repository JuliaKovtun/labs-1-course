#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double j(const double x);
int main()
{
	double kp, kf, z;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kf = "; cin >> kf;
	cout << "n = "; cin >> n;
	double dk = (kf - kp) / n;
	double k = kp;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "k" << " |"
		 << setw(7) << "j" << " |"
		 << endl;
	cout << "-------------------------------------------------" << endl;


	while (k <= kf)
	{
		z = j(1 + k + j(k)) + j(1 + k * k) * j(1 + k * k);


		cout << "|" << setw(7) << setprecision(2) << k << " |"
			<< setw(10) << setprecision(5) << z << " |"
			<< endl;

		k += dk;
	}
	return 0;
}
double j(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + exp(-fabs(x))) / (cos(x) * cos(x) + 1);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = (x * x) / ((2 * i + 1) * 2 * i);
			a *= R;
			S += a;
		} while (i < 5);
		return S;
	}
}
