#pragma once
#include "Quadrangle.h"

class Rectangles : public Quadrangle
{
public:
    Rectangles(int ta, int tb) : Quadrangle(ta, tb, ta, tb, 90, 90, 90, 90, "Прямоугольник") {}
};

