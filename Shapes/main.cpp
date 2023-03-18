#include <iostream>
#include <cmath>

// Define a class for a 2D point
class Point
{
public:
    double x;
    double y;

    // Constructor for the point class
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    // Method to display the point
    void display() const
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

// Define a class for a circle
class Circle
{
public:
    Point center;
    double radius;

    // Constructor for the circle class
    Circle(Point center = Point(), double radius = 0.0) : center(center), radius(radius) {}

    // Method to display the circle
    void display() const
    {
        std::cout << "Circle with center ";
        center.display();
        std::cout << " and radius " << radius << std::endl;
    }

    // Method to resize the circle
    void resize(double newRadius)
    {
        radius = newRadius;
    }

    // Method to calculate the area of the circle
    // double area() const
    // {
    //     return M_PI * radius * radius;
    // }
};

// Define a class for a line
class Line
{
public:
    Point start;
    Point end;

    // Constructor for the line class
    Line(Point start = Point(), Point end = Point()) : start(start), end(end) {}

    // Method to display the line
    void display() const
    {
        std::cout << "Line from ";
        start.display();
        std::cout << " to ";
        end.display();
    }

    // Method to calculate the length of the line
    double length() const
    {
        double dx = end.x - start.x;
        double dy = end.y - start.y;
        return sqrt(dx * dx + dy * dy);
    }
};

// Define a class for a triangle
class Triangle
{
public:
    Point a;
    Point b;
    Point c;

    // Constructor for the triangle class
    Triangle(Point a = Point(), Point b = Point(), Point c = Point()) : a(a), b(b), c(c) {}

    // Method to display the triangle
    void display() const
    {
        std::cout << "Triangle with vertices ";
        a.display();
        b.display();
        c.display();
    }

    // Method to calculate the area of the triangle
    double area() const
    {
        double dx1 = b.x - a.x;
        double dy1 = b.y - a.y;
        double dx2 = c.x - a.x;
        double dy2 = c.y - a.y;
        return abs(dx1 * dy2 - dx2 * dy1) / 2;
    }
};

int main()
{
    Line line;
    line.start =(0, 0);
    line.end = (0, 3);
    line.length();
    line.display();
}