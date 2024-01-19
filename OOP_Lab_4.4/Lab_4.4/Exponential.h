////Exponential.h

#pragma once
#include"Series.h"
class Exponential : public Series
{
public:
	Exponential(double a0, double d) { this->SetA0(a0); this->SetD(d); }
	~Exponential(void){}

	virtual double CountJElem(int j);
	virtual double CountSum(int j);
	virtual ostream& Print(ostream& out) const;
	virtual istream& Insert(istream& in);
};

