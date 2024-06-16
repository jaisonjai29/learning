#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> array = {10,20,30,40};
  for(int i = 0;i < array.size(); i++)
  {
    cout << i << " " << array[i] <<endl;
  }
  vector<string> str;
  string word;
  for(int i = 0;i < 2; i++)
  {
    cin >> word;
    str.push_back(word);
  }
  str.push_back("END");
  for(int i = 0;i < str.size(); i++)
  {
    cout << i << " " << str[i] <<endl;
  }

}