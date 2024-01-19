////Point.h

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
	Point();
	Point(int, int);
	Point(const Point&);
	~Point() {}

	int GetX() const { return x; };
	int GetY() const { return y; };
	void SetX(int value) { x = value; };
	void SetY(int value) { y = value; };

	Point& operator = (const Point&);
	operator string() const;
	friend ostream& operator << (ostream&, const Point&);
	friend istream& operator >> (istream&, Point&);
};

