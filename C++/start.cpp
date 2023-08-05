#include <iostream>
using namespace std;
class jaison
{
public:
    int age;
    int height;
    string name;
    string native;
    string job;
    void set_profile(int a, int h, string n, string nat, string j)
    {
        age = a;
        height = h;
        name = n;
        native = nat;
        job = j;
    }
    void print()
    {
        cout << "age =" << age << endl
             << "height =" << height << endl
             << "name =" << name << endl
             << "native =" << native << endl
             << "job =" << job << endl;
    }
};
int main()
{
    jaison jai;
    jai.set_profile(27, 171, "Jaison", "kanyakumari", "softwar Dev");
    jai.print();
}