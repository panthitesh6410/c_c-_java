//Function Call Binding With Class Objects
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Base
{
public:
show()
{
cout<<"Base Class\t";
}
};
class Derived:public Base
{
public:
show()
{
cout<<"Derived Class";
}
}
main()
{
clrscr();
Base b;//Base Class Object
Derived d;//Derived Class Object
b.show();//Early Binding Occurs
d.show();;
getch();
}



























