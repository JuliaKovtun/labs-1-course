////Exponential.h

#pragma once
#include"Series.h"
class Exponential : public Series
{
private:
	double a0, d;
public:
	Exponential(double a0, double d) { this->a0 = a0; this->d = d; }
	~Exponential(void) {}

	virtual double CountJElem(int j);
	virtual double CountSum(int j);
	virtual ostream& Print(ostream& out) const;
	virtual istream& Insert(istream& in);
};

