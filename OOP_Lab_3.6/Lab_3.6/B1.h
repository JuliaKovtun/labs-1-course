////B1.h

#pragma once
#include<iostream>
using namespace std;

class B1
{
private:
	int b1;
public:
	B1() :b1(0) {}
	B1(int x) { b1 = x; }

	void show_B1();
};

