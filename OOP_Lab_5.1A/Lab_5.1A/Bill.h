//Bill.h
#pragma once
#include <sstream>
#include <iostream>
#include <string>
#include <exception>
#include "MyException.h"
#include "MyDeliveredException.h"

using namespace std;

class Bill
{
private:
	int first;
	double second;

public:
	Bill();
	Bill(int, double) throw (invalid_argument);
	Bill(const Bill&);
	~Bill() {}

	int GetFirst() const;
	double GetSecond() const;
	void SetFirst(int value) throw(invalid_argument);
	void SetSecond(double value) throw(MyException);

	double Cost() const;

	Bill& operator = (const Bill&);
	operator string() const;
	friend ostream& operator << (ostream&, const Bill&);
	friend istream& operator >> (istream&, Bill&) throw (invalid_argument);

	Bill& operator ++();
	Bill& operator --()throw(MyDeliveredException);
	Bill operator ++(int);
	Bill operator --(int)throw(MyDeliveredException);

};