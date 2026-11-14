#include <iostream>
#include <string>
#include "picture.hpp"
#include "circle.hpp"
//#include "rectangle.hpp"
//#include "square.hpp"
//#include "triangle.hpp"
using namespace std;

int main(int argc, char * argv[])
{
    cout << argv[argc-1] << " says Hello World\n";

	Picture collage;

	Circle circle_1(Point{1, 1}, "circle_1", 2); 
	collage.add(circle_1);
	collage.print_all(cout);
}


