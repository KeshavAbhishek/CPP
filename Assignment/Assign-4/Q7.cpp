#include <iostream>
using namespace std;
// Base class
class Shape {
public:
    // Constructor
    Shape() {
        cout << "Shape constructor called." << endl;
    }

    // Virtual function for calculating the area
    virtual float area() const {
        cout << "Shape area" << endl;
        return 0.0;
    }
};

// Derived class 1: Circle
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor
    Circle(float r) : radius(r) {
        cout << "Circle constructor called." << endl;
    }

    // Override the area() function
    float area() const override {
        cout << "Circle area" << endl;
        return 3.14 * radius * radius;
    }
};

// Derived class 2: Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle(float l, float w) : length(l), width(w) {
        cout << "Rectangle constructor called." << endl;
    }

    // Override the area() function
    float area() const override {
        cout << "Rectangle area" << endl;
        return length * width;
    }
};

// Function to calculate area using a Shape reference
float calculateArea(const Shape& shape) {
    return shape.area();
}

int main() {
    // Create objects of the derived classes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Call the calculateArea function with objects of the derived classes
    cout << "Area of Circle: " << calculateArea(circle) << endl;
    cout << "Area of Rectangle: " << calculateArea(rectangle) << endl;

    return 0;
}