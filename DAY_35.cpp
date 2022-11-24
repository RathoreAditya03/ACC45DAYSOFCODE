#include<iostream>
using namespace std;

class A{
    private:
    int x;
    public:
    void get()
    {
        cout<<"Enter the x: ";
        cin>>x;
    }
     void display()
     {
         cout<<"The value of x is : "<<x<<endl;
     }
};
class B : public A
{
    private:
    int y;
    public:
    void get()
    {
        A::get();
        cout<<"Enter the value of y: ";
        cin>>y;
    }
     void display()
     {
         A::display();
         cout<<"The value of x is : "<<y;
     }
};
int main()
{
    B ob;
    ob.get();
    ob.display();
    return 0;
}
