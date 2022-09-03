#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;


char* Insert(char* str, const char* substr, const char c1);


int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	
	char cs[] = "**";
	cout << Insert(str, cs, ',') << endl;
	return 0;
}

char* Insert(char* str, const char* substr, const char c1)
{
	char* tmp = new char[strlen(str) + strlen(substr)];
	int i;
	int c = 0;

	for (i = 0; c < 3; i++) 
	{
		tmp[i] = str[i];
		if (str[i] == c1)
			c++;
	}

	int k = i;
	int n = i - 1;
	for (int j = 0; substr[j] != '\0'; j++)
	{
		tmp[n] = substr[j];
		n = j + i;
	}
	
	for (i = k; str[i] != '\0'; i++)
	{
		tmp[n++] = str[i];
	}

	tmp[n] = '\0';
	strcpy_s(str, 100, tmp);
	return tmp;
}

