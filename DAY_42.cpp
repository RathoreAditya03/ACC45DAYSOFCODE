#include<iostream>      //Adding two strings
#include<string>
using namespace std;
int main()
{
    string a ="Aditya";
    string b = " Rathore";
    // string c = a + b;   //Adding two string using + operator
    string c = a.append(b);   //Adding two string using append keyword
    cout<<"Name is: "<< c;
    cout<<"\nLength is: "<<c.length();   //finding length of string using length() function
    // cout<<"\nLength is: "<<c.size();    //finding length of string using size() function
return 0;
}
