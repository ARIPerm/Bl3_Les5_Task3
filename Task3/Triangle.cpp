#include "Triangle.h"

Triangle::Triangle(int ta, int tb, int tc, int tA, int tB, int tC, std::string type)
{
    a = ta;
    b = tb;
    c = tc;
    A = tA;
    B = tB;
    C = tC;
}

void Triangle::getSides()
{
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
}

void Triangle::getAngle()
{
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
}
