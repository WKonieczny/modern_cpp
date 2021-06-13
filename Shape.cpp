#include "Shape.hpp"
#include <iostream>

void Shape::print() const
{
    std::cout << "Unknown Shape" << std::endl;
}

Shape::Shape(Color color) : color_(color){}