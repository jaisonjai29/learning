#include <iostream>
using std::cout;
using std::endl;
class cons
{
    int a, b;

public:
    cons() // default constructor
    {
        cout << "inside constructor" << endl;
    }
    cons(int a, int b) // parameterize constructor
    {
        (*this).a = a;
        (*this).b = b;
    }
    cons(cons &dis) // copy constructor
    {
        (*this).a = dis.a;
        (*this).b = dis.b;
    }
    void print()
    {
        cout << "a = " << a << endl
             << "b = " << b << endl;
    }
};
int main()
{
    //cons dis();
    cons dis(10, 20);
    cons dis1(dis);
    dis1.print();
}