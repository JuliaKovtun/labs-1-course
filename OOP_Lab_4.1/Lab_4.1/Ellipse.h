////Ellipse.h

#pragma once
#include"Curves.h"
class Ellipse : public Curves
{
public:
	Ellipse(int valueA = 0, int valueB = 0) { SetA(valueA); SetB(valueB); }
	virtual bool IsBelong(int x, int y);
};

