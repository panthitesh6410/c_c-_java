#include<stdio.h>
#include<iostream.h>
#include<conio.h>
add()
{
int a;
int b;
int c;
cout<<"Enter First Number :";
cin>>a;
cout<<"\nEnter Second Number :";
cin>>b;
c=a+b;
cout<<"\nSum :"<<c;
getch();
}
add(int a,int b)
{
int c;
c=a+b;
cout<<"\nSum :"<<c;
getch();
}
main()
{
clrscr();
add();
int a;
int b;
cout<<"\n\nEnter First Number :";
cin>>a;
cout<<"\nEnter Second Number :";
cin>>b;
add(a,b);
}