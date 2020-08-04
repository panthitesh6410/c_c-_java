#include<iostream.h>
#include<conio.h>
main()
{
int a;
int b;
int i;
clrscr();
cout<<"Enter Table Value :";
cin>>a;
cout<<"\nTable Of "<<a<<" Is :\n\n";
for(i=1;i<=10;i++)
{
b=a*i;
cout<<b;
cout<<"\n";
}
getch();
}
