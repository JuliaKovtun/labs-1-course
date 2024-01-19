////Hyperbole.cpp

#include "Hyperbole.h"

bool Hyperbole::IsBelong(int x, int y)
{
    return (((x * x) / (a * a) - (y * y) / (b * b)) == 1);
}
