////Point.h

#pragma once
#include<iostream>
#include <string>
#include <sstream>
#include <exception>
#include "MyException.h"
#include "MyDeliveredException.h"

using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point();
	Point(int, int) throw (invalid_argument);
	Point(const Point&);
	~Point() {}

	int GetX() const { return x; };
	int GetY() const { return y; };
	void SetX(int value) throw(invalid_argument);
	void SetY(int value) throw(invalid_argument);

	Point& operator = (const Point&);
	operator string() const;
	friend ostream& operator << (ostream&, const Point&);
	friend istream& operator >> (istream&, Point&) throw (MyDeliveredException);
};

