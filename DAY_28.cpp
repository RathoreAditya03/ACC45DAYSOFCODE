#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no. of elements in array: ";
    cin>>n;
    int arr[n];
    int i ;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    for(i=(n-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
