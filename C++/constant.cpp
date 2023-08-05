#include <iostream>
using namespace std;
// Note constant obj can call constant functions
class constant
{
    int a;

public:
    constant()
    {
        a = 10;
    }
    void print() const // constant function
    {
        cout << "a == " << a << endl;
    }
};
int main()
{
    constant con;
    const constant c1; // constant object
    c1.print();
    return 0;
}