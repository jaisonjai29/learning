#include <iostream>
using namespace std;
class operatoreover
{
    int a;

public:
    operatoreover()
    {
        a = 5;
    }
    operatoreover operator+(operatoreover &obj)
    {
        operatoreover c;
        c.a = a + obj.a;
	return c;
    }

    void print()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    operatoreover over;
    operatoreover under;
    operatoreover c = under + over;
    c.print();
    return 0;
}
