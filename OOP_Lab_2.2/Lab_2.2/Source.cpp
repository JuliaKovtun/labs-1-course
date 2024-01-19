/////Source.cpp

#include <iostream>
#include"Complex.h"

using namespace std;

int main()
{
	Complex a(2, 4.3);
	cout << a;
	
	Complex b;
	cin >> b;

	if (a == b)
		cout << "a is equal b" << endl;

	if (a != b)
		cout << "a is not equal b" << endl;

	if (a > b)                                    
		cout << "a > b" << endl;
	
	if (a < b)
		cout << "a < b" << endl;
	
	
	
	
	
	return 0;
}