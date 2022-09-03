#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int** a, const int n, const int Low, const int High);
void Print(int** a, const int n);
int SearchMin(int** a, const int n);
int SearchMax(int** a, const int n);

int main()
{
	srand((unsigned)time(NULL));

	int Low = 0;
	int High = 100;

	int n;
	cout << "n = "; cin >> n;

	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];

	Create(a, n, Low, High);
	Print(a, n);

	int minimum = SearchMin(a, n);
	cout << "Minimum = " << minimum << endl;

	int maximum = SearchMax(a, n);
	cout << "Maximum = " << maximum << endl;

	int sum = minimum + maximum;
	cout << "Sum = " << sum << endl;

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;

	return 0;

}

void Create(int** a, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}

void Print(int** a, const int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}

int SearchMin(int** a, const int n)
{
	int k = 2;
	int j;
	int min = a[0][0];

	for (int i = 0; i <= (n - 2); i++) 
	{
		j = n - k;
		for (j; j >= 0; j--)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
		k++;
	}
	return min;
}

int SearchMax(int** a, const int n)
{
	int k = n - 1;
	int j;
	int max = a[n - 1][n - 1];

	for (int i = 1; i <= (n - 1); i++)
	{
		j = n - 1;
		for (j; j >= k; j--)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
		k--;
	}
	return max;
}