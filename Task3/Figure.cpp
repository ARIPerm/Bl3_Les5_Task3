#include "Figure.h"


Figure::Figure()
{
	_type = "������";
}

Figure::Figure(std::string type)
{
	_type = type;
}

void Figure::getType()
{
	std::cout << _type << ":" << std::endl;
}
