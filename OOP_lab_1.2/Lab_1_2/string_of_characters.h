#pragma once
#include <iostream>

using namespace std;

class string_of_characters
{

private:
	char* str = new char[101];
public:
	void Read();
	bool Init(char* string);
	void sin() { cout << "Enter text: "; cin >> str; };
	void Display() const;
	void soutChar() const;
	bool isFound() const;
};

