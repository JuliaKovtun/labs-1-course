/////////Point.h

#pragma once
#include<iostream>
#include <string>
#include <sstream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	int GetX() const { return x; };
	int GetY() const { return y; };
	void SetX(int value) { x = value; };
	void SetY(int value) { y = value; };
	void Display() const;
	void Read();
	void Init(int valueX, int valueY);
	string toString() const;
	void ToPolar(double& fi);
	void Length(double& r);
	bool IsEqual();
};

