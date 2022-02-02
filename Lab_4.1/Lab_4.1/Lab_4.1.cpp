

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	int N, i = 3, j =3;
	double S = 0;
	cout << "Enter N: "; cin >> N;

	while (i <= N)
	{
		S += (cos(i / 2) + sin(2 * i)) / (1 + sin(cos(i)));
		i++;
	}
	cout << S << endl;

	i = 3;
	S = 0;

	do {
		
		S += (cos(i / 2) + sin(2 * i)) / (1 + sin(cos(i)));
		i++; 
	} while (i <= N);

	cout << S << endl;

	i = 3;
	S = 0;

	for (i; i <= N; i++) 
	{
	
		S += (cos(i / 2) + sin(2 * i)) / (1 + sin(cos(i)));

	}

	cout << S << endl;


	

	S = 0;

	for (i = N; i >= j; i--)
	{

		S += (cos(i / 2) + sin(2 * i)) / (1 + sin(cos(i)));

	}

	cout << S << endl;


}

