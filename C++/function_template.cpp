#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    int n;
    cout << "enter 1.int 2.float " << endl;
    cin >> n;
    if (n == 1)
    {
        int a, b;
        cout << "enter a and b value" << endl;
        cin >> a >> b;
        cout << endl
             << "total : " << add(a, b) << endl;
    }
    if (n == 2)
    {
        float a, b;
        cout << "enter a and b value" << endl;
        cin >> a >> b;
        cout << endl
             << "total : " << add(a, b) << endl;
    }
}