#include "string_of_characters.h"

void string_of_characters::Read()
{
	char* s = new char;
	do {
		cout << "Enter string: "; cin.getline(s, 100);
	} while (!(Init(s)));
}

bool string_of_characters::Init(char* value)
{
	if (strlen(value) < 101)
	{
		str = value;
		return true;
	}
	else
		return false;
}

void string_of_characters::Display() const
{
	for (int i = 0; i < strlen(str); i++)
		cout << str[i];

	cout << endl;
}

void string_of_characters::soutChar() const
{
	int i;
	cout << "Enter number of position: "; cin >> i;
	if (i > 0 && i < 101 && i <= strlen(str))
		cout << "Symbol:  " << str[i - 1] << endl;
	else
		cout << "Wrong number." << endl;
}

bool string_of_characters::isFound() const
{
	char c;
	cout << "Enter symbol: "; cin >> c;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == c)
			return true;
	}
	return false;
}


