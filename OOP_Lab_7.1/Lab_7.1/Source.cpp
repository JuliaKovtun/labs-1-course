//Source.cpp

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime> 

using namespace std;

int RandomNumber() { return (std::rand() % 100); }

int main()
{
	srand(unsigned(time(0)));
	int n;
	cout << "n = ? "; cin >> n;
	vector<int> v(n);
	generate(v.begin(), v.end(), RandomNumber);

	for (int& y : v)
		cout << y << "  ";
	cout << endl;

	int min = *min_element(v.begin(), v.begin() + n);
	int max = *max_element(v.begin(), v.begin() + n);

	cout << "Min number: " << min << endl << "Max number: " << max << endl;
	cout << "Sum:" << (min + max) << endl;
	return 0;
}


