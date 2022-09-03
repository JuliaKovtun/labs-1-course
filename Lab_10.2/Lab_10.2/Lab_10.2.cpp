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

int ProcessTXT3(char* fname) 
{ 
	ifstream fin(fname); 
	char s[100]; 
	char* w; 
	int n = 0;
	int tmp = 0;
	while (fin.getline(s, sizeof(s))) 
	{
		w = strtok(s, " .,:;!?-'"); 
		while (w != NULL) 
		{
			n = strlen(w);
			if (n > tmp)
				tmp = n;
			
			
			w = strtok(NULL, " .,:;!?-'"); 
		}
	}
	return tmp;
}

int main()
{
	
	char fname[100]; 
	cout << "enter file name 1: "; cin >> fname;
	CreateTXT(fname); 
	PrintTXT(fname); 
	cout << endl << "The length of the longest word: " << ProcessTXT3(fname) << endl;

	return 0;
}