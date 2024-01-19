////Point_public.cpp

#include "Point_public.h"

Point_public::Point_public()
	:Point_public(0,0)
{}

Point_public::Point_public(int valueX, int valueY)
{
	SetX(valueX);
	SetY(valueY);
}

Point_public::Point_public(const Point_public& p)
{
	SetX(p.GetX());
	SetY(p.GetY());
}

Point_public& Point_public::operator++()
{
	SetX(GetX() + 1);
	return *this;
}

Point_public& Point_public::operator--()
{
	SetX(GetX() - 1);
	return *this;
}

Point_public Point_public::operator++(int)
{
	Point_public a(*this);
	SetY(GetY() + 1);
	return a;
}

Point_public Point_public::operator--(int)
{
	Point_public a(*this);
	SetY(GetY() - 1);
	return a;
}

double Point_public::ToPolar()
{
	return atan(GetY() * 1.0 / GetX());
}

double Point_public::Length()
{
	return sqrt(GetX() * GetX() + GetY() * GetY());
}

bool operator==(const Point_public& a, const Point_public& b)
{

	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}

bool operator!=(const Point_public& a, const Point_public& b)
{
	return !(a == b);
}

bool IsEqual(const Point_public& a, const Point_public& b)
{
	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}

bool IsNotEqual(const Point_public& a, const Point_public& b)
{
	return !IsEqual(a, b);
}