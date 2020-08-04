#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
main()
{
clrscr();
int factorial(int);
int num,fact;
cout<<"\nEnter Number :";
cin>>num;
if(num==0)
{
cout<<"Factorial Of 0 Is :0";
}
while(num>0)
{
fact=factorial(num);
cout<<"\nThe Factorial Of "<<num<<" Is :"<<fact;
cout<<"\n";
getch();
exit(0);
}
getch();
}
int factorial(int num)
{
int a;
if(num==0)
return(1);
else
a=num*factorial(num-1);
return(a);
}