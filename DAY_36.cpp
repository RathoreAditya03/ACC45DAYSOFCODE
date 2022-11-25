#include<iostream>
using namespace std;

class student{
    private:
    string name[20];
    int roll_no;
    int class_ ;
    char address [50];
    public:
    
    student()
    {
    roll_no=0;
    class_=0;
    }
    student(int r_n, int cl)
    {
    roll_no=r_n;
    class_=cl;
    }
      void get()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll_no : "<<roll_no<<endl;
        cout<<"Class : "<<class_<<endl;
        cout<<"Address : "<<address<<endl;
    }
    void display()
    {
     cout<<"\nThe student name is : "<<name<<endl;
     cout<<"The student roll_no is : "<<name<<endl;  
     cout<<"The student class is : "<<name<<endl;  
     cout<<"The student address is : "<<name<<endl;  
    }
    
};
class marks : public student
{
    int m1, m2,m3 ,m4 ,m5;
    float total_marks;
    public:
    marks()
    {
    total_marks=0;
    }
    marks(int E , int M , int F , int D , int C)
    {
       E=m1;
       M=m2;
       F=m3;
       D=m4;
       C=m5;
       total_marks=E+M+F+D+C;
    }
    void get()
    {
        student::get();
         cout<<"Enter the 5 subject marks : "<<m1<<m2<<m3<<m4<<m5<<endl;
       
    }
     void display()
     {
         student::display();
         total_marks=m1+m2+m3+m4+m5;
         cout<<"total marks of the student is : "<<total_marks<<endl;
     }
};
int main()
{
    student ob(10 , 12);
    marks ob(70,80,90,99,89);
    ob.get();
    ob.display();
    return 0;
}
