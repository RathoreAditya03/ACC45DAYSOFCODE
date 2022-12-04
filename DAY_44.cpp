#include<iostream>    //WAP to take Address , first & second name from user and print fullname and address.
#include<string>
using namespace std;
int main()
{
    string a,b,address;
   
    cout<<"\nEnter Address: ";
    getline(cin,address);      //using getline() function
    cout<<"Enter firtsname: ";
    cin>>a;
    cout<<"Enter secondname: ";
    cin>>b;

    string c = a.append(b);
    cout<<"\nFull name is: "<<c;
    cout<<"\nAddress is: "<<address;
    return 0;
}
