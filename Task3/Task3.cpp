#include <iostream>
#include <Windows.h>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EqualateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangles.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle fig1(10, 20, 30, 50, 60, 70);
    RightTriangle fig2(10, 20, 30, 50, 60);
    IsoscelesTriangle fig3(10, 20, 50, 60);
    EqualateralTriangle fig4(30, 60);
    Quadrangle fig5(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangles fig6(10, 20);
    Square fig7(20);
    Parallelogram fig8(20, 30, 30, 40);
    Rhomb fig9(30, 30, 40);

    fig1.getType();
    fig1.getSides();
    fig1.getAngle();
    std::cout << std::endl;

    fig2.getType();
    fig2.getSides();
    fig2.getAngle();
    std::cout << std::endl;

    fig3.getType();
    fig3.getSides();
    fig3.getAngle();
    std::cout << std::endl;

    fig4.getType();
    fig4.getSides();
    fig4.getAngle();
    std::cout << std::endl;

    fig5.getType();
    fig5.getSides();
    fig5.getAngle();
    std::cout << std::endl;

    fig6.getType();
    fig6.getSides();
    fig6.getAngle();
    std::cout << std::endl;

    fig7.getType();
    fig7.getSides();
    fig7.getAngle();
    std::cout << std::endl;

    fig8.getType();
    fig8.getSides();
    fig8.getAngle();
    std::cout << std::endl;

    fig9.getType();
    fig9.getSides();
    fig9.getAngle();
    std::cout << std::endl;
}
