#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class A
{
public:
add()
{
int a;
int b;
int c;
cout<<"\n\n\nEnter First Number :";
cin>>a;
cout<<"\nEnter First Number :";
cin>>b;
c=a+b;
cout<<"\nSum :"<<c;
getch();
}
};
class B: public A
{
public:
sub()
{
int a;
int b;
int c;
cout<<"\n\n\nEnter First Number :";
cin>>a;
cout<<"\nEnter Second Number :";
cin>>b;
c=a-b;
cout<<"\nDifference :"<<c;
getch();
}
};
class C: public B
{
public:
mul()
{
int a;
int b;
int c;
cout<<"\n\n\nEnter First Number :";
cin>>a;
cout<<"\nEnter Second Number :";
cin>>b;
c=a*b;
cout<<"\nMultiplication :"<<c;
getch();
}
};
main()
{
clrscr();
class C key3;
key3.mul();
key3.sub();
key3.add();

getch();
}