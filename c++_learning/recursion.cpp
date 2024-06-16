//sumof natural numbers
#include<iostream>
using namespace std;
int sum(int n);

int main()
{
  int m = sum(5);
  cout << m ;
  return 0;
}

int sum(int n)
{
    if(n == 0)
    return 0;
    
    int r = n + sum(n-1);
    return r;
}