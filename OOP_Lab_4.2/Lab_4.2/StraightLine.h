////StraightLine.h

#pragma once
#include"Curves.h"
class StraightLine : public Curves
{
private:
	int a, b;
public:
	StraightLine(int a = 0, int b = 0) { this->a = a; this->b = b; }
	virtual bool IsBelong(int x, int y);
};

