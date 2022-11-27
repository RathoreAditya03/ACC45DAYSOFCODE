#include<iostream>       //table of any number using for loop.
using namespace std;
int main()
{
    int value;
    cout<<"Enter the number for table: ";
    cin>>value;

    for(int i=1; i<=10; i++)
    {
        cout<<"\n"<<value<<" x "<<i<<" = "<<value*i;
    }
return 0;
}
