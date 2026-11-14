#include "circle.hpp"
#include <iostream>
#include <numbers>

Circle::Circle(Point center, std::string name, int radius) : Shape(center, name), radius{radius} {}

double Circle::area() const {
	return 0.0;
}

void Circle::draw(std::ostream& out) const {
	return;
}

Circle Circle::clone() const {
	return new Circle{*this};	
}


