////D3.h

#pragma once
#include"D1.h"
#include"D2.h"
#include"B2.h"

class D3 : public D1, public D2, public B2
{
private:
	int d3;
public:
	D3(int x, int y, int z, int i, int j, int k) 
		:D1(y, z), D2(i, j), B2(k) 
	{ d3 = x; }
	void show_D3();
};

