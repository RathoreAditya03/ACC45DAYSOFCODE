#include<iostream>    
using namespace std;
int main()
{  
    int arr[5] = {0};       
    
    for(int i=0; i<5; i++)
    {ow m
        cout<<"\nEnter no. "<<i<<": ";
        cin>>arr[i];
    }
 
 //for max value
   int max = arr[0];

   for(int i=1; i<5; i++)
   {
      if(max < arr[i])
      {
        max = arr[i];
      }
   }
    
    cout<<"\nMinimum value is: "<<max;
    return 0;
}
