////Series.h

#pragma once
#include <ostream>
#include<iostream>
using namespace std;

class Series
{
public:
	virtual double CountJElem(int j) = 0;
	virtual double CountSum(int j) = 0;
	virtual ostream& Print(ostream& out) const = 0;
	virtual istream& Insert(istream& in) = 0;

};

