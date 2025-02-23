#include<iostream>
using namespace std;

class H{
    int feet,inch;
    public:
    friend istream &operator>>(istream &in,H &d)
    {
      cout << "Enter feet and inch" <<endl;
      in >> d.feet >> d.inch;
      //cout << "Entered data " << d.feet << " feet " << d.inch << " inch "<<endl;
      return in;
    }
    friend ostream &operator<<(ostream &out,H &d)
    {
      out << d.feet << " feet " << d.inch << " inch \n";
      return out;
    }

    H operator+(H d)
    {
        H tmp;
        tmp.feet = this->feet + d.feet;
        tmp.inch = this->inch + d.inch;
        while(tmp.inch >= 12)
        {
            tmp.feet++;
            tmp.inch -= 12;
        }
        return tmp;
    }

    bool operator<(H d)
    {
       if(this->feet < d.feet)
        return 1;
       if(this->feet == d.feet && this->inch < d.inch)
        return 1;
       return 0;
    }

};

int main()
{
    H d1,d2;
    cin >> d1;
    cin >> d2;

    /* cout << d1;
    cout << d2; */

    H d3 = d1 + d2;
    cout << d3;
    bool out = d1 < d2;
    cout << "d2 is big or not compared to d1 " << out <<endl;
}