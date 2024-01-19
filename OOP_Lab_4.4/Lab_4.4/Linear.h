////Linear.h

#pragma once
#include"Series.h"

class Linear : public Series
{
public:
	Linear(double a0, double d) { this->SetA0(a0); this->SetD(d); }
	~Linear(void){}

	virtual double CountJElem(int j);
	virtual double CountSum(int j);
	virtual ostream& Print(ostream& out) const;
	virtual istream& Insert(istream& in);
};

