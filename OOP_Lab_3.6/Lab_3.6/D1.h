////D1.h

#pragma once
#include"B1.h"

class D1 : public B1
{
private:
	int d1;

public:
	D1(int x, int y) :B1(y) { d1 = x; }
	void show_D1();
};

