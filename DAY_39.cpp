//table of any number using while loop.
#include<iostream>       
using namespace std;
int main()
{
    int value;
    int i=1;
    cout<<"Enter the number for table: ";
    cin>>value;

    while(i<=10)     //In while loop first coondition is checked then code is executed
    {
        cout<<"\n"<<value<<" x "<<i<<" = "<<value*i;
        i++;  //or you can use i+=1;
    }
return 0;
}
