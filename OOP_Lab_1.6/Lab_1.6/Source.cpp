/////Source.cpp

#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time t;
	t.Read();
	t.ChangeMinute();
	t.IncreaseHour();
	t.Display();




	return 0;
}
