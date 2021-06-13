#pragma once

enum class Color : unsigned char 
{
    Red,
    Green,
    Blue
};

class Shape
{
public:
    virtual ~Shape() {};
    Shape(){};
    Shape(Color color);

    Shape(const Shape& other) = default ;
    Shape(Shape&& other) = default ;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
private:
    Color color_= Color::Blue;
};
