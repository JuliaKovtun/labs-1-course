////Series.h

#pragma once
#include <ostream>
#include<iostream>
using namespace std;

class Series
{
private:
	double a0, d;

public:
	void SetA0(double a0) { this->a0 = a0; }
	double GetA0() const { return a0; }
	void SetD(double d) { this->d = d; }
	double GetD() const { return d; }

	virtual double CountJElem(int j) = 0;
	virtual double CountSum(int j) = 0;
	virtual ostream& Print(ostream& out) const = 0;
	virtual istream& Insert(istream& in) = 0;

};

