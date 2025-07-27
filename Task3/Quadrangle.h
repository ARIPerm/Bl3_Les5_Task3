#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle(int ta, int tb, int tc, int td, int tA, int tB, int tC, int tD, std::string type = "Четырехугольник");

    void getSides();

    void getAngle();

protected:
    int a, b, c, d, A, B, C, D;
};

