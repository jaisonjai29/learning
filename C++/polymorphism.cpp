#include <iostream>
using namespace std;
class base
{
protected:
    string name;

public:
    void set_name(string n)
    {
        name = n;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "name is : " << name << endl;
    }
};
int main()
{
    derived dev;
    base *boom = &dev;//creating pointer to base class and assign dev object
    boom->set_name("Jaison its me!!!!!!!!!");
    dev.print();
    return 0;
}