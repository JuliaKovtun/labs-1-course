#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void CreateTXT(char* fname) 
{
	ofstream fout(fname); 
	char ch;
	string s; 
	do
	{
		cin.get(); 
		cin.sync(); 
		cout << "enter line: "; getline(cin, s); 
		fout << s << endl; 
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}

void PrintTXT(char* fname) 
{
	ifstream fin(fname); 
	string s; 
	while (getline(fin, s)) 
	{
		cout << s << endl; 
	}
	cout << endl;
}

void ProcessTXT1(char* fname, int& index) 
{
	ifstream fin(fname); 
	string s; 
	int k = 0; 
	unsigned i = 0;

	while (getline(fin, s)) 
	{ 
		for ( i; i < s.length(); i++) {
			if (s[i] == ',')
				k++;
			if (k == 3)
				index = i;
		}
	}

}


int main()
{
	int index = 0;
	char fname[100]; 
	cout << "enter file name 1: "; cin >> fname;
	CreateTXT(fname); 
	PrintTXT(fname); 
	ProcessTXT1(fname, index);
	cout << "i = " << index << endl;
	return 0;
}