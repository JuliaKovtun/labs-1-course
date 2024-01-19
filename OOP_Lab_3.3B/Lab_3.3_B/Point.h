////Point.h

#pragma once
#include"Pair.h"

class Point : public Pair
{
public:
	Point();
	Point(const int valueX, const int valueY);
	Point(const Point& p);
	~Point(){}

	Point& operator ++();
	Point& operator --();
	Point operator ++(int);
	Point operator --(int);

	double ToPolar();
	double Length();
	friend bool IsEqual(const Point& a, const Point& b);
	friend bool IsNotEqual(const Point& a, const Point& b);
};

