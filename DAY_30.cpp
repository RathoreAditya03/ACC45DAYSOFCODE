#include<iostream>                
using namespace std;
int main()
{  
    int arr[5] = {0};       
    
    for(int i=0; i<5; i++)
    {
        cout<<"\nEnter no. "<<i<<": ";
        cin>>arr[i];
    }
 
 //for min value
   int min = arr[0];

   for(int i=1; i<5; i++)
   {
      if(min > arr[i])
      {
        min = arr[i];
      }
   }
    
    cout<<"\nMinimum value is: "<<min;
    return 0;
}
