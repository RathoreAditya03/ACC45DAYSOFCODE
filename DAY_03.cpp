//SWITCH CASE PROGRAM
#include <iostream>
 using namespace std;
 int Cases()
 {
    cout<<"HERE ARE NUMBERS OF PROGRAMS: \n";
    cout << "\n 1. Armstrong Number"
         << "\n 2. Fibonacci Series"
         << "\n 3. Pallindrome Number"
         << "\n 4. Leap Year"
         << "\n 5. Swapping without using 3rd variable\n";
    int n;
    cout << "\n Which program do you want to execute: ";
    cin >>n;

    
    switch (n)
    {

    case 1:

        int num, dn, temp, d;
        cout << "Enter the number to check for Armstrong Number\n";
        cin >> num;
        dn = num;
        temp = 0;
        while (dn != 0)
        {
            d = dn % 10;
            temp = temp + (d * d * d);
            dn = dn / 10;
        }
        if (num == temp)
        {
            cout << num << " Is an Armstrong Number\n";
        }
        else
        {
            cout << num << " Is not an Armstrong Number\n";
        }
        break;

    case 2:       
        int fibo_0, fibo_1, fibo, number, i;
        cout << "Enter the number till where you want the Fibonacci series\n";
        cin >> number;
        
        fibo_0 = 0;
        fibo_1 = 1;
        cout << "The Fibonacci Series is given below\n";
        cout << endl
             << fibo_0 << endl
             << fibo_1;

        for (i = 1; i <= number - 2; i++)
        {
            fibo = fibo_0 + fibo_1;
            cout << endl
                 << fibo;
            fibo_0 = fibo_1;
            fibo_1 = fibo;
        }
        break;
    

    case 3:
        int numb, pal, temporary, def;
        cout << "Enter the number to check whether it is Palindrome or not\n";
        cin >> numb;
        pal = numb;
        temporary=0;

        while (pal != 0)
        {
            def = pal % 10;
            temporary = (temporary * 10) + def;
            pal = pal / 10;
        }
        if (numb == temporary)
        {
            cout << numb << " Is a Palindrome number\n";
        }
        else
        {
            cout << numb << " Is not a Palindrome number\n";
        }
        break;

    case 4:
        int year;
    cout << "Enter Year: ";
    cin >> year;
    if(year % 4 == 0 and year % 100 != 0)
    {
        cout << "Leap Year";
    }
    else if(year % 400 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }
    break;
    
    case 5:
        int a,b;
        cout<<"Enter 'a' and 'b': ";
        cin>>a>>b;
        cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
        a=a+b;     
        b=a-b;     
        a=a-b;    
        cout<<"After swap a= "<<a<<" b= "<<b<<endl;    
        break;
    default:
        cout << "*Invalid Choice*";
        break;
    }
    return 0;
 }

 int loop()
 {
    char cont;
    do
    {
        cout << "\n\n---------------------------------\n";
        cout << "\nDo you want to continue ??\n"
             << "For YES 'y'"
             << " For NO 'n'" << endl;
        cin >> cont;
        if (cont == 'y')
        {
            Cases();
        }
        else
        {
            cout << "\n**Thank You**\n";
        }
    } while (cont == 'y');
    return 0;
 }

int main()
 {
    cout << "\n\n** Welcome User **\n";
    Cases();
    loop();
    return 0;
 }
