////Ellipse.cpp

#include "Ellipse.h"

bool Ellipse::IsBelong(int x, int y)
{
    return (((x * x) / (GetA() * GetA()) + (y * y) / (GetB() * GetB())) == 1);
}
