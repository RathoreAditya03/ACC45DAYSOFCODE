// INLINE FUNCTION

#include<iostream>
using namespace std;
inline int square(int x) //using inline function
{
 return x*x;
}
int main()
{
 int a=5;
 cout<<"\nEnter a number : "<< a <<endl;
 cout<<"It's square is : "<<square(a);
 return 0;
}
