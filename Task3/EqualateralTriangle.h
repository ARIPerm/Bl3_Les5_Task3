#pragma once
#include "Triangle.h"

class EqualateralTriangle : public Triangle
{
public:
    EqualateralTriangle(int ta, int tA) : Triangle(ta, ta, ta, tA, tA, tA, "Равносторонний треугольник") {};
};

