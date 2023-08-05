#include <iostream>
using namespace std;
class NR
{
    string name;
    friend string change_name(NR &n);//declare friend keyword with function prototype
};
string change_name(NR &n)
{
    n.name = "JIO";
    return n.name;
}
int main()
{
    NR _5g;
    cout << "name is : " << change_name(_5g)<< endl;
    return 0;
}