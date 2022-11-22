#include <iostream>
using namespace std;
class A
{
  private:
   int a1;
  public:
   A(int x=0)
   {
       a1=x;
   }
    friend class B;   
};
class B
{
  private:
   int b1;
  public:


   B(int x=0)
   {
       b1=x;
   }
    int sum()
    {
        A a_obj(5);
        
        int sum = a_obj.a1 + b1;
        cout<<"sum is: "<<sum;
        return sum;
    }
};
int main()
{
   B b_obj(10);
   b_obj.sum();
  return 0;
}
