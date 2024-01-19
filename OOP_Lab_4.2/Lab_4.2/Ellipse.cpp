////Ellipse.cpp

#include "Ellipse.h"

bool Ellipse::IsBelong(int x, int y)
{
    return (((x * x) / (a * a + (y * y) / (b * b)) == 1));
}
