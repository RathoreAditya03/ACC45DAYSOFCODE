// FUNCTION INSIDE THE CLASS
#include <iostream>
using namespace std;

class Bike
{
    private:
    
    char Bike_model [10];
    int Bike_number;
    
    public:
     
     void get()
     {
         cout<<" Enter the model name: ";
         cin>>Bike_model;
         cout<<"Enter the bike number: ";
         cin>>Bike_number;
     }
     void display()
     {
         cout<<"\nBIKE MODEL IS: "<<Bike_model<<endl;
         cout<<"BIKE NUMBER IS: "<<Bike_number;
     }
};
int main()
{
    Bike b1;
    b1.get();
    b1.display();

    return 0;
}
