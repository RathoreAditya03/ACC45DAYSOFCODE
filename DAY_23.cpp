#include<iostream>
using namespace std;
int main()
{
    int arr1[3],arr2[3],i,j,n,x,y,ascore=0,bscore=0;
    cin>>x;
    cin>>y;
     for(i=0;i<x;i++)
    {
        cin>>arr1[i];
    }
     for(j=0;j<y;j++)
    {
        cin>>arr2[i];
    }
   if(arr1[i]>arr2[j])
   {
    ascore=ascore+1;
   }
   else
   {
    if(arr1[i]<arr2[j])
    {
        bscore=bscore+1;
    }
   }
   cout<<ascore<<" "<<bscore;
    return 0;
}
