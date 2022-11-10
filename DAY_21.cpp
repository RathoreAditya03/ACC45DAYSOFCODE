 #include<iostream>
using namespace std;
int main()
{
    int n,x,i,sum=0;
    cin>>x;
    for(i=0;i<x;i++)
    {
      cin>>n;
      sum=sum+n;
    }
    cout<<sum;
    return 0;
}
