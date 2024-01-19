////Linear.h

#pragma once
#include"Series.h"

class Linear : public Series
{
private:
	double a0, d;
public:
	Linear(double a0, double d) { this->a0 = a0; this->d = d; }
	~Linear(void) {}

	virtual double CountJElem(int j);
	virtual double CountSum(int j);
	virtual ostream& Print(ostream& out) const;
	virtual istream& Insert(istream& in);
};

