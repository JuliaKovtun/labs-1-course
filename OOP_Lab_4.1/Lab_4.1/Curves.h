////Curves.h

#pragma once
#include<iostream>
using namespace std;

class Curves
{
	int a;
	int b;

public:
	Curves():a(0), b(0) {}
	Curves(int valueA, int valueB) :a(valueA), b(valueB) {}

	int GetA() const { return a; }
	void SetA(int valueA) { a = valueA; }
	int GetB() const { return b; }
	void SetB(int valueB) { b = valueB; }

	virtual bool IsBelong(int x, int y) = 0;
};

