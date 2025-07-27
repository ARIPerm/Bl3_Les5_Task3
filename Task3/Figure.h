#pragma once
#include <iostream>
class Figure
{
public:
    Figure();

    Figure(std::string type);

    void getType();

private:
    std::string _type;
};

