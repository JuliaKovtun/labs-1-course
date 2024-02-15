////Point_public.h

#pragma once
#include"Point.h"

class Point_public : public Point
{
public:
	Point_public();
	Point_public(int valueX, int valueY);
	Point_public(const Point_public&);
	~Point_public() {}

	Point_public& operator ++()throw(MyException);
	Point_public& operator --()throw(MyException);
	Point_public operator ++(int)throw(MyException);
	Point_public operator --(int)throw(MyException);

	friend bool operator == (const Point_public&, const Point_public&);
	friend bool operator != (const Point_public&, const Point_public&);

	double ToPolar();
	double Length();
	friend bool IsEqual(const Point_public& a, const Point_public& b);
	friend bool IsNotEqual(const Point_public& a, const Point_public& b);
};

