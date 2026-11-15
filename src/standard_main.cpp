#include <iostream>
#include <string>
#include "picture.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "square.hpp"
#include "triangle.hpp"
using namespace std;

int main() {
    Picture collage;
    
    Circle c({1, 1}, "circle_1", 2);
    Rectangle r({0, 0}, "rect_1", 3, 5);
    
    collage.add(c);
    collage.add(r);
    
    // Prints names, areas, and draws shapes based on your Step 12 logic
    collage.print_all(cout);
    
    // Must exactly match the autograder's expected format
    cout << "Total area = " << collage.total_area() << "\n";
    
    return 0;
}
