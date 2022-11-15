#include<iostream>
#include<conio.h>
using namespace std;

class student
{
   public:
   char name[10];
   int roll;
   public:
virtual void getdata()
{
   cout<<"\n\nEnter the name : ";
   cin>>name;
   cout<<"\nEnter the roll number : ";
   cin>>roll;
}
virtual void showdata()
{  
   cout<<"\nName : "<<name<<"\t"<<"Roll No : "<<roll;    
}
virtual void dept()=0;
};

class engineering: public student
{
   public:
   char dep[10];
   public:
      void dept()
      {
      getdata();
      cout<<"\nEnter the department : ";
      cin>>dep;
      }
      void showdata()
      {
      cout<<"\nDetails of engg class : ";
      student::showdata();
      cout<<"\t"<<"Department : "<<dep;
      }
};
class medicine: public student
{
      public:
      char dep[10];
   public:
      void dept()
      {
         getdata();;
         cout<<"\nEnter the department : ";
         cin>>dep;
      }
      void showdata()
      {
         cout<<"\nDetails of medical class : ";
         student::showdata();
         cout<<"\t"<<"Department : "<<dep;
      }
};
class science: public student
{
      public:
      char dep[10];
   public:
      void dept()
       {
         getdata();
         cout<<"\nEnter the department : ";
         cin>>dep;
      }
      void showdata()
      {
         cout<<"\nDetails of science class : ";
         student::showdata();
         cout<<"\t"<<"Department : "<<dep;
      }
};
int main()
{
   student *ptr;
   engineering e; medicine m; science s;
   ptr = &e; ptr->dept(); ptr->showdata();
   ptr = &m; ptr->dept(); ptr->showdata();
   ptr = &s; ptr->dept(); ptr->showdata();
   //getch();
   return 0;
}
