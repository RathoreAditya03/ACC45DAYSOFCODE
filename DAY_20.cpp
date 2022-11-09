//cpp program to print the sum of given inputs by the user

#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,x,i,sum=0;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<x;i++)
    {
      sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}
