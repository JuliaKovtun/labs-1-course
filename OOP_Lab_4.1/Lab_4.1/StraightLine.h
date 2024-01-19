////StraightLine.h

#pragma once
#include"Curves.h"
class StraightLine : public Curves
{
public:
	StraightLine(int valueA = 0, int valueB = 0) { SetA(valueA); SetB(valueB); }
	virtual bool IsBelong(int x, int y);
};

