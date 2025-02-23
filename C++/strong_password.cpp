#include<iostream>
using namespace std;

bool isStrongPsw(string);
int main()
{
    string password;
    cout << "1.Should be size of 8 or more" <<endl;
    cout << "2.Should be 1 Upper case" <<endl;
    cout << "3.Should be 1 lower case" <<endl;
    cout << "4.Should be 1 symbol" <<endl;
    cout << "\nEnter strong password\n";
    cin >> password;
    if(isStrongPsw(password))
        cout << "Strong Password"<<endl;
    else
        cout << "Weak Password"<<endl;
    return 0;
}

bool isStrongPsw(string s)
{
    bool upper = false,lower = false, special = false;
    for(auto c:s)
    {
        if (isupper(c))
            upper = true;
        if (islower(c))
            lower = true;
        if (ispunct(c))
            special = true;
    }
    if(upper && lower && special && s.size() >= 8)
            return true;
    return false;
}