#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
char* Insert(char* str, const char* substr, char c1)
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

	strncpy(tmp, str, i);
	tmp[i-1] = '\0';
	strcat(tmp, substr);
	strcat(tmp, str + i);
	strcpy(str, tmp);
	return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char substr[] = "**";

	cout << Insert(str, substr, ',') << endl;
	return 0;
}

