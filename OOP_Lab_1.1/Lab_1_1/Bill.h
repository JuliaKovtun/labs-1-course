//Bill.h

#pragma once

class Bill
{
private:
	int first;
	double second;

public:
	int GetFirst() const;
	double GetSecond() const;
	void SetFirst(int value);
	void SetSecond(double value);

	bool Init(int first, double second);
	void Read();
	void Display();
	double Cost();
};