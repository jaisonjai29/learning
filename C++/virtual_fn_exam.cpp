#include<iostream>
using namespace std;

class base{
    public:
    int a,b;
    base(int x,int y)
    {
         a = x;
         b = y;
    }
    virtual void fun1(){cout << "base fun1" <<endl;}
    virtual void fun2(){cout << "base fun2" <<endl;}
    void fun3(){cout << "base fun3" <<endl;}
    virtual void fun4(){cout << "base fun4" <<endl;}
    void fun5(){cout << "base fun5" <<endl;}
};

class derive : public base{
    public:
    derive(int l,int m): base(l,m){}
    void fun1(){cout << "derived fun1" <<endl;}
    void fun3(){cout << "derived fun2" <<endl;}
    void fun2(){cout << "derived fun2" <<endl;}
    void fun5(){cout << "derived fun5" <<endl;}
    void fun4(int x,int y){cout << "derived fun4" <<endl;}  
};

int main()
{
    base *b;
    derive d(1,2);
    b = &d;
    b->fun1();
    b->fun2();
    b->fun3();
    b->fun4();
    b->fun5();
}
//de 1
//de 2
//base 3
//base 4
//base 5