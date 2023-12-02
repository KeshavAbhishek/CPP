#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual double area() = 0;
        virtual void draw() = 0;
};

class Circle : public Shape
{
    public:
        Circle(double r){
            radius = r;
        }

        double area() override
        {
            return radius * radius * 3.14;
        }

        void draw() override
        {
            cout << "Drawing a circle with radius " << radius << endl;
        }

    private:
        double radius;
};

class Rectangle : public Shape
{
    private:
        double width;
        double height;
    
    public:
        Rectangle(double w, double h){
            height = h;
            width = w;
        }

        double area() override
        {
            return width * height;
        }

        void draw() override
        {
            cout << "Drawing a rectangle with width " << width << " and height " << height << endl;
        }
};

int main()
{
    Shape *shapes[] = {new Circle(5), new Rectangle(10, 20)};

    for (int i = 0; i < 2; ++i)
    {
        cout << "Shape " << i + 1 << " area: " << shapes[i]->area() << endl;
        shapes[i]->draw();
        delete shapes[i];
    }

    return 0;
}