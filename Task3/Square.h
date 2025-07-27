#pragma once
#include "Quadrangle.h"

class Square : public Quadrangle
{
public:
    Square(int ta) : Quadrangle(ta, ta, ta, ta, 60, 60, 60, 60, " вадрат") {}
};

