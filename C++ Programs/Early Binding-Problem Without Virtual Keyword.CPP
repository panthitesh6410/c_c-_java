//Late Binding
//Virtual Functions
//Problem Without Virtual Keyword
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Base
{
public:
show()
{
cout<<"Base Class";
}
};
class Derived:public Base
{
public:
show()
{
cout<<"Derived Class";
}
};
main()
{
clrscr();
Base*b;//Base Class Pointer
Derived d;//Derived Class Object
b=&d;
b->show();//Early Binding Occurs
getch();
}