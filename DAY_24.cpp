#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HelloWorld ";

int ii;  double dd; string ss;

cin>>ii;
cin>>dd;
getline(cin,ss);
getline(cin,ss);
cout<<i+ii<<endl;
cout<< fixed <<setprecision(1)<< d + dd << endl;    
cout<<s<<ss<<endl;

    return 0;
}
