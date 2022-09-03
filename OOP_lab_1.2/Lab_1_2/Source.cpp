#include <iostream>
#include "string_of_characters.h"

using namespace std;

string_of_characters makeStr(char str[]) 
{
	string_of_characters str1;
	if (!str1.Init(str))
		cout << "Wrong string" << endl;
	return str1;
}

int main()
{
	string_of_characters firstStr;
	char str[] = "Test string";
	firstStr = makeStr(str);
	firstStr.Display();

	string_of_characters secondStr;
	secondStr.Read();
	secondStr.Display();
	secondStr.soutChar();

	if (secondStr.isFound())
		cout << "Symbol is found." << endl;
	else
		cout << "Symol is not found" << endl;

	return 0;
}