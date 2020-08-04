#include<conio.h>
#include<iostream.h>
class set
{
int m,n;
public:
void input();
void display();
largest();
};
int set::largest()
{
if(m>=n)
return(m);
else
return(n);
}
void set::input()
{
cout<<"\n Write The Value Of m And n :";
cin>>m>>n;
}
void set::display()
{
cout<<"\n\tLarge Value Is :"<<largest()<<"\n";//Nesting Of Member Function
}
void main()
{
clrscr();
set a;
a.input();
a.display();
getch();
}