#include "Circle.hpp"
#include <math.h>
#include <iostream>

Circle::Circle(double r) : r_(r)
 , Shape::Shape(Color::Green){}

// Circle::Circle(double r, Color color )
//     : r_(r),
//      Shape::Shape(color){}
// }

Circle::Circle(const Circle & other)
: Shape(other)
{
    r_ = other.getRadius();
}

double Circle::getArea() const
{
    return M_PI * r_ * r_;
}

double Circle::getPerimeter() const
{
    // static_assert(M_PI==3.14);
    return 2 * M_PI * r_;
}

double Circle::getRadius() const
{
    return r_;
}

void Circle::print() const
{
    std::cout << "Circle: radius: " << getRadius() << std::endl
              << "          area: " << getArea() << std::endl
              << "     perimeter: " << getPerimeter() << std::endl;
}
