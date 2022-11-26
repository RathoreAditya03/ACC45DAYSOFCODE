//INLNE FUNCTION

#include<iostream>
using namespace std;

inline int square(int x)
{
    return x*x;
}
int main()
{
  int a=5;
  cout<<"Enter a number : "<< a <<endl;
  cout<<"It's square is : "<<square(a);
  return 0;
}
