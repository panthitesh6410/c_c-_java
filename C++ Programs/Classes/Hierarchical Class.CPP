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
class C: public A
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
class D: public A
{
public:
div()
{
int a;
int b;
int c;
cout<<"\n\n\nEnter First Number :";
cin>>a;
cout<<"\nEnter Second Number :";
cin>>b;
c=a/b;
cout<<"\nDivision :"<<c;
getch();
}
};
main()
{
clrscr();
class D key4;
key4.add();
class C key3;
key3.add();
class B key2;
key2.add();
getch();
}