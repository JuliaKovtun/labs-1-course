////ColorPoint.h

#pragma once
#include"Point.h"

class ColorPoint : public Point
{
private:
	int R;
	int G;
	int B;
public:
	void SetR(int ValueR) { R = ValueR; }
	void SetG(int ValueG) { G = ValueG; }
	void SetB(int ValueB) { B = ValueB; }
	int GetR() const { return R; }
	int GetG() const { return G; }
	int GetB() const { return B; }

	ColorPoint();
	ColorPoint(const int ValueR, const int ValueG, const int ValueB);
	ColorPoint(const int ValueX, const int ValueY, const int ValueR, const int ValueG, const int ValueB);
	ColorPoint(const ColorPoint&);
	~ColorPoint() {}

	friend ostream& operator << (ostream& out, const ColorPoint&);
	friend istream& operator >> (istream& in, ColorPoint&);
	operator string() const;

	void ChangeColor();
	void Print();

};

