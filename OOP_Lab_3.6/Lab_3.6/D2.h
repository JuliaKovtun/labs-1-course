////D2.h

#pragma once
#include"B1.h"
class D2 : private B1
{
private:
	int d2;
public:
	D2(int x, int y) : B1(y) { d2 = x; }
	void show_D2();
};

