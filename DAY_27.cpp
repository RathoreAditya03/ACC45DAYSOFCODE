#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length,breadth,area,perimeter;

void input()
{
  cout<<"Enter the length of rectangle: ";
  cin>>length;
  cout<<"Enter the breadth of rectangle: ";
  cin>>breadth;
}
void get()
{
area=length*breadth;
perimeter=2*(length+breadth);
}
void display()
{
    cout<<"\nThe area of the rectangle is: "<<area<<endl;
    cout<<"The perimeter of the rectangle is: "<<perimeter;
    }
};
int main()
{
    rectangle obj;

    obj.input();
    obj.get();
    obj.display();
    return 0;
}
