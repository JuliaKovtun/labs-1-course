//Bill.h

#pragma once
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Bill
{
private:
	int first;
	double second;

public:
	Bill();
	Bill(int, double);
	Bill(const Bill&);
	~Bill() {}

	int GetFirst() const;
	double GetSecond() const;
	void SetFirst(int value);
	void SetSecond(double value);

	double Cost() const;

	Bill& operator = (const Bill&);
	operator string() const;
	friend ostream& operator << (ostream&, const Bill&);
	friend istream& operator >> (istream&, Bill&);

	Bill& operator ++();
	Bill& operator --();
	Bill operator ++(int);
	Bill operator --(int);

};