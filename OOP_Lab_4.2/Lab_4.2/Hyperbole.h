////Hypebole.h

#pragma once
#include"Curves.h"
class Hyperbole : public Curves
{
private:
	int a, b;
public:
	Hyperbole(int a = 0, int b = 0) { this->a = a; this->b = b; }
	virtual bool IsBelong(int x, int y);
};

