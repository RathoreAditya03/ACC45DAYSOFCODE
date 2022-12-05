#include<iostream>
#include<string>
using namespace std;

struct person    //defination of structure
{
  string name;
  int age;
  float height;
  float weight;
  double salary;
};

int main()
{
    person p;
    p.name = "Aditya";
    p.age = 8;
    p.weight = 54.6f;
    p.height = 5.4f;
    p.salary = 0;

    cout<<endl<<"Name: "<<p.name;
    cout<<endl<<"Age: "<<p.age;
    cout<<endl<<"Height: "<<p.height;
    cout<<endl<<"Weight: "<<p.weight;
    cout<<endl<<"Salary: "<<p.salary;
    return 0;
  }
