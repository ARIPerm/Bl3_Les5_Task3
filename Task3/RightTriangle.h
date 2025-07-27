#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle
{
public:
    RightTriangle(int ta, int tb, int tc, int tA, int tB) : Triangle(ta, tb, tc, tA, tB, 90, "Прямоугольный треугольник") {};
};

