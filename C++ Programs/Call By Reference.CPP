#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
int change(int&);
int original=10;
clrscr();
cout<<"\nThe original Value Is :"<<original<<endl;
cout<<"\nReturn Value Of The Function Change() Is :"<<change(original)<<endl;
cout<<"\nThe Value After Function Change() Is Over :"<<original<<endl;
getch();
}
int change(int &a)
{
a=20;
return(a);
}