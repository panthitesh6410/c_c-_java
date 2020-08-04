#include<iostream.h>
#include<conio.h>
class data
{
private://Not Accessible

public:
int a;
int b;
int c;
};
main()
{
class data obj;
clrscr();
cout<<"Enter First Number :";
cin>>obj.a;
cout<<"\nEnter Second Number :";
cin>>obj.b;
obj.c=obj.a+obj.b;
cout<<"\nSum :"<<obj.c;
getch();
}