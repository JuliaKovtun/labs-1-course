/////Triad.cpp

#include "Triad.h"

void Triad::Init(int h, int m, int s) 
{
	hour = h;
	minute = m;
	second = s;
}

void Triad::Read()
{
	int h, m, s;

	cout << "Enter hours\t"; cin >> h;
	cout << endl << "Enter minutes\t"; cin >> m;
	cout << endl << "Enter seconds\t"; cin >> s;
	Init(h, m, s);

}

void Triad::Display() const
{
	cout << "hours: " << hour 
		 << "\nminutes: " << minute 
		 << "\nseconds: " << second 
		 << endl;
}

string Triad::toString() const
{
	stringstream sout;
	sout << "Hours: " << hour << "\tMinutes: " << minute << "\tSeconds: " << second << endl;
	return sout.str();
}





