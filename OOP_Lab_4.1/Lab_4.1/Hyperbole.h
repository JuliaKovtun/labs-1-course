////Hyperbole.h

#pragma once
#include"Curves.h"
class Hyperbole : public Curves
{
public:
	Hyperbole(int valueA = 0, int valueB = 0) { SetA(valueA); SetB(valueB); }
	virtual bool IsBelong(int x, int y);
};

