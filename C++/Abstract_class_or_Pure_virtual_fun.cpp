#include <iostream>
using namespace std;
class shape
{ // abstract class
public:
    double length, height;

    shape(double x, double y)
    {
        length = x;
        height = y;
    }

    virtual double area() = 0; // if we use one or more virt fn called abs class // =0 pure virtual fn
};
class triangle : public shape
{ // derived class
public:
    triangle(double x, double y) : shape(x, y)
    { // invoking shape class constructor// tri x,y pass to shape x,y//member initializer
        std::cout << "triangle constructure\n";
    }
    double area()
    { // must present inside derived class area() function
        std::cout << "triangle area\n";
        return length * height / 2;
    }
};
int main()
{
    shape *s;
    double x, y;
    cout << "enter length\n";
    cin >> x;
    cout << "enter height\n";
    cin >> y;
    triangle t(x, y);
    s = &t;
    std::cout << s->area() << "\n";
}
