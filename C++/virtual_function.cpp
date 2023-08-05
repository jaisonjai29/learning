#include <iostream>
using namespace std;
class shape
{ // base class
public:
    double length, height;

    shape(double x, double y)
    {
        length = x;
        height = y;
    }

    virtual double area()
    {
        std::cout << "inside shape class area\n";
        return 0;
    }
};
class triangle : public shape
{ // derived class
public:
    triangle(double x, double y) : shape(x, y)
    {
        std::cout << "triangle constructure\n";
    }
    double area()
    {
        std::cout << "triangle area\n";
        return length * height / 2;
    }
};
int main()
{
    shape *s;
    triangle t(10.0, 20.0);
    s = &t;
    std::cout << s->area() << "\n";
}
