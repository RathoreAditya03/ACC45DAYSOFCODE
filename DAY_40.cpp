#include<iostream>       //table of any number using do-while loop.
using namespace std;
int main()
{
    int value;
    int i=1;
    cout<<"Enter the number for table: ";
    cin>>value;

    do    //In do-while loop first code is executed then condition is checked
    {
        cout<<"\n"<<value<<" x "<<i<<" = "<<value*i;
        i++;  //or you can use i+=1;
    }
    while(i<=10);
return 0;
}
