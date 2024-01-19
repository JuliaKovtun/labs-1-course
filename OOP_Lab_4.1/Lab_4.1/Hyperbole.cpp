////Hyperbole.cpp

#include"Hyperbole.h"

bool Hyperbole::IsBelong(int x, int y)
{
    return (((x * x) / (GetA() * GetA()) - (y * y) / (GetB() * GetB())) == 1);
}
