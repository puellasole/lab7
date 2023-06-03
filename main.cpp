#include <iostream>
#include "lab7/Circle.hpp"
#include "lab7/Triangle.hpp"
#include "lab7/Rectangle.hpp"

int main() {
    sh::Circle* circle = new sh::Circle(1, 1, "red", 6);
    sh::Triangle* triangle = new sh::Triangle(2, 1, "red", 3, 4, 6);
    sh::Rectangle* rectangle = new sh::Rectangle(1, 1, "red", 3, 5);
    circle->calculateArea();
    rectangle->calculateArea();
    rectangle->printArea();
    std::cout << "Circle area: " << circle->calculateArea() << std::endl << "Triangle area: " << triangle->calculateArea();
    return 0;
}

