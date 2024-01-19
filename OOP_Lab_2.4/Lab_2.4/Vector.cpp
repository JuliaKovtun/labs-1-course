//Vector.cpp

#include "Vector.h"

Vector::Vector(int n = 1)
{
	size = n;
	N = new int[size];
	for (int i = 0; i < size; i++)
		N[i] = 0;
}

Vector::Vector(const Vector& v)
{
	size = v.size;
	N = new int[size];
	for (int i = 0; i < size; i++)
	{
		N[i] = v.N[i];
	}
}

Vector& Vector::operator=(const Vector& a)
{
	if (&a == this) return *this;
	size = a.size;

	delete[] N;
	N = new int[size];

	for (int i = 0; i < size; i++)
		N[i] = a.N[i];

	return *this;
}

Vector::operator string() const
{
	stringstream ss;
	ss << *this;
	return 	ss.str();
}

ostream& operator << (ostream& out, const Vector& a)
{
	for (int i = 0; i < a.size; i++)
		out << "array[ " << i << " ] = " << a[i] << endl;
	out << endl;
	return out;
}

istream& operator >> (istream& in, Vector& a)
{
	for (int i = 0; i < a.size; i++)
	{
		cout << "array[ " << i << " ] = ? "; in >> a[i];
	}
	cout << endl;
	return in;
}

int ScalarProd(const Vector& a, const Vector& b)
{
	int res = 0;

	if (a.size == b.size) 
	{
		for (int i = 0; i < a.size; i++)
			res += a.N[i] * b.N[i];
		return res;
	}
	else
		return 0;
}

bool operator==(const Vector& a, const Vector& b)
{
	if(a.size != b.size)
		return false;
	else
	{
		for (int i = 0; i < a.size; i++) 
		{
			if (a.N[i] != b.N[i])
				return false;
		}
		return true;
	}
}

int FindMax(const Vector& v)
{
	int max = 0;
	for (int i = 0; i < v.size; i++)
	{
		if (v.N[i] > max)
			max = v.N[i];
	}
	return max;
}

int FindMin(const Vector& v)
{
	int min = v.N[0];
	for (int i = 0; i < v.size; i++)
	{
		if (v.N[i] < min)
			min = v.N[i];
	}
	return min;
}

int Norma(const Vector& v)
{
	int max = FindMax(v);
	int min = FindMin(v);

	return abs(max - min);
}
