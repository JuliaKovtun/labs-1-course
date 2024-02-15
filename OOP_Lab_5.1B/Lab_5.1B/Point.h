/////////Point.h

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
	void SetX(int value) throw (invalid_argument);
	void SetY(int value) throw (invalid_argument);

	Point& operator = (const Point&);
	operator string() const;
	friend ostream& operator << (ostream&, const Point&);
	friend istream& operator >> (istream&, Point&) throw (MyDeliveredException);

	Point& operator ++() throw(MyException);
	Point& operator --() throw(MyException);
	Point operator ++(int) throw(MyException);
	Point operator --(int) throw(MyException);

	friend bool operator == (const Point&, const Point&);
	friend bool operator != (const Point&, const Point&);

	double ToPolar();
	double Length();
	friend bool IsEqual(const Point& a, const Point& b);
	friend bool IsNotEqual(const Point& a, const Point& b);
};


