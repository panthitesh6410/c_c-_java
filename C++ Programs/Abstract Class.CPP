#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Base //Abstract Base Class
{
public:
virtual void show()=0;//Pure Virtual Function
};
class Derived:public Base
{
public:
void show()
{
cout<<"Implementation Of Virtual Function In Derived Class";
}
};
main()
{
clrscr();
//Base obj;//Compile Time Error
Base *b;
Derived d;
b=&d;
b->show();
getch();
}