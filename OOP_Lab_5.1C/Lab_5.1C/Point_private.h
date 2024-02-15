////Point_private.h

#pragma once
#include"Point.h"
class Point_private : private Point
{
public:
	using Point::GetX;
	using Point::GetY;
	using Point::SetX;
	using Point::SetY;

	using Point::Point;

	Point_private();
	Point_private(int x, int y);
	Point_private(const Point_private& a);
	~Point_private() {}

	Point_private& operator ++() throw(MyException);
	Point_private& operator --() throw(MyException);
	Point_private operator ++(int) throw(MyException);
	Point_private operator --(int) throw(MyException);

	friend bool operator == (const Point_private&, const Point_private&);
	friend bool operator != (const Point_private&, const Point_private&);

	double ToPolar();
	double Length();
	friend bool IsEqual(const Point_private& a, const Point_private& b);
	friend bool IsNotEqual(const Point_private& a, const Point_private& b);

	friend ostream& operator << (ostream&, const Point_private&);
	friend istream& operator >> (istream&, Point_private&) throw (MyDeliveredException);

};

