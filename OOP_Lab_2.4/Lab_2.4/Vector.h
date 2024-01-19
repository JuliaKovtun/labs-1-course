//Vector.h

#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Vector
{
	int size;
	int* N;

public:

	Vector(int);
	Vector(const Vector&);
	Vector& operator = (const Vector&);

	~Vector()
	{
		delete[] N;
	}

	int& operator [] (const int i)
	{
		return N[i];
	}
	const int& operator [] (const int i) const
	{
		return N[i];
	}
	friend ostream& operator << (ostream&, const Vector&);
	friend istream& operator >> (istream&, Vector&);
	operator string () const;

	friend int ScalarProd(const Vector&, const Vector&);
	friend bool operator == (const Vector&, const Vector&);
	friend int FindMax(const Vector&);
	friend int FindMin(const Vector&);
	friend int Norma(const Vector&);

};


