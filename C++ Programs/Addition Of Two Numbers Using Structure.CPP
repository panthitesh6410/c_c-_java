#include<iostream.h>
#include<conio.h>
struct data
{
int a;
int b;
int c;
};
main()
{
struct data key;
clrscr();
cout<<"Enter First Number :";
cin>>key.a;
cout<<"\nEnter Second Number :";
cin>>key.b;
key.c=key.a+key.b;
cout<<"\nSum :"<<key.c;
getch();
}