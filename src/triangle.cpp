#include "triangle.hpp"
#include <algorithm>
#include <iostream>

Triangle::Triangle(Point center, std::string name, int base, int height) : Shape(center, name), base{base}, height{height} {}

double Triangle::area() const {
	return 0.0;
}

void Triangle::draw(std::ostream&) const {
	//stub
}

Triangle* Triangle::clone() const {
	return new Triangle{*this};
}
