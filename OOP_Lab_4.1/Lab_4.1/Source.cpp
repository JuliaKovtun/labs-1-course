////Source.cpp

#include "StraightLine.h"
#include "Hyperbole.h"
#include "Ellipse.h"
#include <iostream>
#include <typeinfo>

using namespace std;

void PrintEquality(bool a)
{
	a ? cout << "Point belongs to the line" << endl : cout << "Point doesn`t belong to the line" << endl;
}

int main()
{
	Curves* a = new StraightLine;
	StraightLine(2, 6);

	cout << typeid(a).name() << endl;
	cout << typeid(*a).name() << endl;

	bool aPoint = a->IsBelong(2, 1);

	cout << "First StraightLine: ";
	PrintEquality(aPoint);

	delete a;

	cout << endl;

	StraightLine line(1, 4);
	Ellipse ellipse(1, 1);
	Hyperbole hyperbole(2, 5);

	Curves* arr[3];
	arr[0] = &line;
	arr[1] = &ellipse;
	arr[2] = &hyperbole;

	bool linePoint = line.IsBelong(1, 1);
	bool ellipsePoint = ellipse.IsBelong(1, 0);
	bool hyperbolePoint = hyperbole.IsBelong(3, 1);

	cout << "StraightLine: ";
	PrintEquality(linePoint);
	cout << "Ellipse: ";
	PrintEquality(ellipsePoint);
	cout << "Hyperbole: ";
	PrintEquality(hyperbolePoint);

	cout << typeid(arr[0]).name() << endl;
	cout << typeid(*arr[0]).name() << endl;
	cout << typeid(arr[1]).name() << endl;
	cout << typeid(*arr[1]).name() << endl;	
	cout << typeid(arr[2]).name() << endl;
	cout << typeid(*arr[2]).name() << endl;

	return 0;
}