#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class data
{
public:
add();
sub();
};
data::add()
{
int a;
int b;
int c;
clrscr();
cout<<"Addition Of Two Numbers";
cout<<"\n------------------------";
cout<<"\nEnter First Number :";
cin>>a;
cout<<"\nEnter Second Number :";
cin>>b;
c=a+b;
cout<<"\nRequired Sum :"<<c;
getch();
}
data::sub()
{
int a;
int b;
int c;
cout<<"\n\n\nFinding Difference Of Two Numbers";
cout<<"\n----------------------------------";
cout<<"\nEnter First Number :";
cin>>a;
cout<<"\nEnter Second Number :";
cin>>b;
c=a-b;
cout<<"\nRequired Difference :"<<c;
getch();
}
main()
{
class data obj;
obj.add();
obj.sub();
}