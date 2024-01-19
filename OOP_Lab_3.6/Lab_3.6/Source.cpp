////Source.cpp

#include"D3.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B1 o0(777);
	cout << "B1 o0(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Ієрархія класу B1: " << endl;
	o0.show_B1();

	D1 o1(111, 222);
	cout << "D1 o1(111, 222);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Ієрархія класу D1: " << endl;
	o1.show_D1();

	D2 o2(1000, 2000);
	cout << "D2 o2(1000, 2000);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D2: " << endl;
	o2.show_D2();

	B2 o3(100);
	cout << "B2 o3(100);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Ієрархія класу B2: " << endl;
	o3.show_B2();

	D3 o4(1, 2, 3, 4, 5, 6);
	cout << "D3 o4(1, 2, 3, 4, 5, 6);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ієрархія класу D3: " << endl;
	o4.show_D3();



	return 0;
}