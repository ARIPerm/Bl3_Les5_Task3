#pragma once
#include "Figure.h"
class Triangle : public Figure
{
public:
    Triangle(int ta, int tb, int tc, int tA, int tB, int tC, std::string type = "�����������") : Figure(type) {};

    void getSides();

    void getAngle();

protected:
    int a, b, c, A, B, C;

};
