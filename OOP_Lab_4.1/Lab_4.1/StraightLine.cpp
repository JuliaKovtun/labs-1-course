////StraightLine.cpp

#include "StraightLine.h"

bool StraightLine::IsBelong(int x, int y)
{
    return (y == (GetA() * x + GetB()));
}
