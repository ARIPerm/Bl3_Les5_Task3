#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(int ta, int tb, int tA, int tB) : Triangle(ta, tb, ta, tA, tB, tA, "Равнобедренный треугольник") {}
};

