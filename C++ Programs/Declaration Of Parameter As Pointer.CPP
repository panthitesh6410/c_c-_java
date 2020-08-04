#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
int num[10],i;
void display(int a[]);
clrscr();
cout<<"\n\t\tEnter Elements :\n";
for(i=0;i<10;i++)
cin>>num[i];
display(num);
getch();
}
void display(int *a)//The Pointer Is Used In The Form Of Argument
//It Works As An Array
{
cout<<"\n";
for(int i=0;i<10;i++)
cout<<a[i]<<"\t";
}