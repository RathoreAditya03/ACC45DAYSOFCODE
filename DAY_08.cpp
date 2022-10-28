// USE OF THIS KEYWORD
#include<iostream>
using namespace std;

class A
{
    public:
    int age;
    string name;

    public:
    A(int age , string name)
    {
      this-> age = age;     //here we use this keyword to differentiate b/w the member variable & local variable
      this-> name = name;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Age: "<<age;
    }

};
int main()
{
    A a(18 , "Aditya");
    a.display();
}
