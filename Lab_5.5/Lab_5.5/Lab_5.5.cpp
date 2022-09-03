#include <iostream>

using namespace std;

int B(int b, int p);

int main()
{
	int b, p, m, mod;

	cout << "b = "; cin >> b;
	cout << "p = "; cin >> p;
	cout << "m = "; cin >> m;


	mod = B(b, p) % m;

	cout << "mod = " << mod;

}

int B(int b, int p)
{
	if (p == 0)
		return 1;
	if (p % 2 == 1)
		return B(b, p - 1) * b;
	else
	{
		int b1 = B(b, p / 2);
		return b1 * b1;
	}
}