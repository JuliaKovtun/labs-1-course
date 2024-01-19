////Point.h

#pragma once
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	void SetX(int ValueX) { x = ValueX; }
	void SetY(int ValueY) { y = ValueY; }
	int GetX() const { return x; }
	int GetY() const { return y; }

	Point();
	Point(const int x, const int y);
	Point(const Point&);
	~Point(void){}

	friend ostream& operator << (ostream& out, const Point&);
	friend istream& operator >> (istream& in, Point&);

	operator string() const;
	void ChangePoint();
	void Print();
};

