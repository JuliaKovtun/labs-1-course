////ColorPoint.cpp

#include "ColorPoint.h"

ColorPoint::ColorPoint()
{
	SetX(0);
	SetY(0);
	R = 0;
	G = 0;
	B = 0;
}

ColorPoint::ColorPoint(const int ValueR, const int ValueG, const int ValueB)
{
	SetX(0);
	SetY(0);
	R = ValueR;
	G = ValueG;
	B = ValueB;
}

ColorPoint::ColorPoint(const int ValueX, const int ValueY, const int ValueR, const int ValueG, const int ValueB)
{
	SetX(ValueX);
	SetY(ValueY);
	R = ValueR;
	G = ValueG;
	B = ValueB;
}

ColorPoint::ColorPoint(const ColorPoint& p)
{
	SetX(p.GetX());
	SetY(p.GetY());
	R = p.R;
	G = p.G;
	B = p.B;
}

ColorPoint::operator string() const
{
	stringstream ss;
	ss << "coordinates: (" << GetX() << ", " << GetY() << ")" << endl;
	ss << "RGB (" << GetR() << ", " << GetG() << ", " << GetB() << ")" << endl;
	return ss.str();
}

void ColorPoint::ChangeColor()
{
	int r, g, b;
	cout << "R = "; cin >> r;
	cout << "G = "; cin >> g;
	cout << "B = "; cin >> b;

	SetR(r);
	SetG(g);
	SetB(b);
}

void ColorPoint::Print()
{
	cout << "coordinates: (" << GetX() << ", " << GetY() << ")" << endl;
	cout << "RGB (" << GetR() << ", " << GetG() << ", " << GetB() << ")" << endl;
}

ostream& operator<<(ostream& out, const ColorPoint& point)
{
	return out << (string)point;
}

istream& operator>>(istream& in, ColorPoint& point)
{
	int ValueX, ValueY;
	cout << "x = "; in >> ValueX;
	cout << "y = "; in >> ValueY;
	point.SetX(ValueX);
	point.SetY(ValueY);

	cout << endl;
	cout << "R = "; in >> point.R;
	cout << "G = "; in >> point.G;
	cout << "B = "; in >> point.B;
	return in;
}

