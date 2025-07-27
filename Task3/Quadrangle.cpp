#include "Quadrangle.h"

Quadrangle::Quadrangle(int ta, int tb, int tc, int td, int tA, int tB, int tC, int tD, std::string type) : Figure(type) 
{
    a = ta;
    b = tb;
    c = tc;
    d = td;
    A = tA;
    B = tB;
    C = tC;
    D = tD;
}

void Quadrangle::getSides()
{
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
}

void Quadrangle::getAngle()
{
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
