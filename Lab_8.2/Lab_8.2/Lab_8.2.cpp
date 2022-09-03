#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char seps[] = " ,";
	char* token, *token1 = NULL;
	string* Tokens1 = new string[100];
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	
	cout << "Tokens:" << endl;
	
	for (int i = 0; Tokens1[i] != "\0"; i++)
		cout << Tokens1[i];

	token = strtok_s(str, seps, &token1); 
	while (token != NULL) 
	{
		cout << " " << token << endl;
		
		token = strtok_s(NULL, seps, &token1); 
	}
	return 0;
}