#include<conio.h>
#include<iostream.h>
class rest
{
int id;
static int count;
public:
void setid()
{
id=++count;
}
void showid()
{
cout<<"\nObject Number :";
cout<<id<<"\n";
}
static void showcount()
{
cout<<"\nCount :"<<count;
}
};
int rest::count;
void main()
{
rest r1,r2;
clrscr();
r1.setid();
r2.setid();
rest::showcount();
rest r3;
r3.setid();
rest::showcount();
r1.showid();
r2.showid();
r3.showid();
getch();
}