/////Complex.cpp

#include "Complex.h"
#include <sstream>

Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double r = 0, double i = 0)
{
	re = r;
	im = i;
}

Complex::Complex(const Complex& r)
{
	re = r.re;
	im = r.im;
}

void Complex::SetRe(double r)
{
	re = r;
}

void Complex::SetIm(double i)
{
	im = i;
}

double Complex::GetRe() const
{
	return re;
}

double Complex::GetIm() const
{
	return im;
}

Complex& Complex::operator = (const Complex& r)
{
	re = r.re;
	im = r.im;
	return *this;
}

Complex::operator string () const
{
	stringstream ss;
	ss << " Re = " << re << endl;
	ss << " Im = " << im << endl;
	return ss.str();
}

bool operator != (const Complex& x, const Complex& y)
{
	if (x.im != y.im && x.re != y.re)
		return true;
	else
		return false;
}

bool operator == (const Complex& x, const Complex& y)
{
	if (x.im == y.im && x.re == x.re)
		return true;
	else
		return false;
}

bool operator > (const Complex& x, const Complex& y)
{
	if (x.im > y.im && x.re > y.re)
		return true;
	else
		return false;
}

bool operator < (const Complex& x, const Complex& y)
{
	if (x.im < y.im && x.re < y.re)
		return true;
	else
		return false;
}

bool operator >= (const Complex& x, const Complex& y)
{
	if (x.im >= y.im && x.re >= y.re)
		return true;
	else
		return false;
}

bool operator <= (const Complex& x, const Complex& y)
{
	if (x.im <= y.im && x.re <= y.re)
		return true;
	else
		return false;
}

ostream & operator << (ostream & out, const Complex & r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Complex& r)
{
	cout << " Re = "; in >> r.re;
	cout << " Im = "; in >> r.im;
	cout << endl;
	return in;
}


