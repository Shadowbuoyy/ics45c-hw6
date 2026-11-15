#include "rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(Point center, std::string name, int width, int height) : Shape(center, name), width{width}, height{height} {}

double Rectangle::area() const {
	return 0.0;
}

void Rectangle::draw(std::ostream&) const {
	// stub
}

Rectangle* Rectangle::clone() const {
	return new Rectangle{*this};
}


