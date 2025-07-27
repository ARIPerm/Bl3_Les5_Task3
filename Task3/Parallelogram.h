#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int ta, int tb, int tA, int tB) : Quadrangle(ta, tb, ta, tb, tA, tB, tA, tB, "Параллелограм")
};

