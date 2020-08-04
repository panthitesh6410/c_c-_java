#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
int change(int);
int original=10;
clrscr();
cout<<"\nThe Original Value Is :"<<original<<endl;
cout<<"\nReturn Value Of Function change() Is :"<<change(original)<<endl;
cout<<"\nThe Value After Function change() Is Over :"<<original<<endl;
getch();
}
int change(int a)
{
a=20;
return(a);
}