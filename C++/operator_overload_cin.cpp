#include<iostream>
using namespace std;

class Day{
    int date,month,year;
    public:
    friend istream &operator>>(istream &input,Day &date);
    friend ostream &operator<<(ostream &output,Day &date);
};

istream &operator>>(istream &input,Day &date)
{
    cout << "Enter date" <<endl;
    cin >> date.date;
    return input;
}

ostream &operator<<(ostream &output,Day &date)
{
    cout << "date is ";
    output << date.date << endl;
    return output;
}

int main()
{
Day date;
cin >> date;
cout << date;
}