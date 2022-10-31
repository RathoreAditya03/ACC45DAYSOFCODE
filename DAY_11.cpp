// Program to print the months name

#include<stdio.h>
int main()
{
enum MONTH {JAN , FEB , MAR , APR , MAY ,  JUN , JUL , AUG , SEP , OCT , NOV , DEC };
int m;
printf("ENTER THE MONTH NUMBER:");
scanf("%d",&m);
if(m == 1)
printf("MONTH IS JANUARY");
else if(m == 2)
printf("MONTH IS FEBRUARY");
else if(m == 3)
printf("MONTH IS MARCH");
else if(m == 4)
printf("MONTH IS APRIL");
else if(m == 5)
printf("MONTH IS MAY");
else if(m == 6)
printf("MONTH IS JUNE");
else if(m == 7)
printf("MONTH IS JULY");
else if(m == 8)
printf("MONTH IS AUGUST");
else if(m == 9)
printf("MONTH IS SEPTEMBER");
else if(m == 10)
printf("MONTH IS OCTOBER");
else if(m == 11)
printf("MONTH IS NOVEMBER");
else if(m == 12)
printf("MONTH IS DECEMBER");
else 
printf("IT IS NOT A MONTH");
return 0;
}
