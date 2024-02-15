//Source.cpp

#include <iostream>
#include <list>
#include <Windows.h>

using namespace std;

bool SimilarEl(list<int>& l)
{
	int count = 1;
	for (auto i = l.begin(); i !=l.end();i++ ) 
	{
		auto j = l.begin();
		advance(j, count);
		for ( j; j != l.end(); j++) 
		{
			if (*i == *j)
				return true;
		}
		count++;
	}
	return false;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	list<int> l = { 6, 0, 98, 12, 5, 7, 9 };
	cout << "l = { ";
	for (int n : l) 
	{
		cout << n << ", ";
	}
	cout << "};\n";

	if (SimilarEl(l))
		cout << "Список містить елементи з однаковими значеннями" << endl;
	else
		cout << "Список не містить елементів з однаковими знаменнями" << endl;

	

	return 0;
}