//Using Virtual Keyword
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Base
{
public:
virtual show()
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
b->show();//Late Binding Occurs
getch();
}



























