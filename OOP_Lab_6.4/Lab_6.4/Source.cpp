//Source.cpp

#include <iostream>
using namespace std;

template <typename T>
bool CheckUniqueElem(T* array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] == array[j])
				return false;
		}
	}
	return true;
}

int main()
{
	const int SIZE = 10;
	int arr[SIZE];

	cout << "Enter values for array 1: \n";

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	if (CheckUniqueElem(arr, SIZE))
		cout << "ALL values are unique!" << endl;
	else
		cout << "Values are not unique!" << endl; 


	double array[SIZE];

	cout << "\nEnter values for array 2: \n";

	for (int i = 0; i < SIZE; i++)
	{
		cin >> array[i];
	}

	if (CheckUniqueElem(array, SIZE))
		cout << "ALL values are unique!" << endl;
	else
		cout << "Values are not unique!" << endl;



	return 0;
}