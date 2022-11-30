//printing the martix of 2 by 2 order

#include<iostream>
using namespace std;
int main()
{
    int  matOne[2][2] , matTwo[2][2] , matThree[2][2];
    int i, j, k, sum=0;


    cout<<"Enter the Elements for First Matrix: ";


    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cin>>matOne[i][j];
    }


    cout<<"\nEnter the Elements for Second Matrix: ";


    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cin>>matTwo[i][j];
    }


    // Multiplying two matrices...

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum=0;
            for(k=0; k<2; k++)
                sum = sum + (matOne[i][k] * matTwo[k][j]);
            matThree[i][j] = sum;
        }
    }


    cout<<"\nMultiplication Result:\n";


    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cout<<matThree[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
