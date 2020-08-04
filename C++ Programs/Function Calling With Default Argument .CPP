#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
clrscr();
float p,amount,interest(float,int,float r=0.1);//Default Argument
int t;
cout<<"\nEnter Amount :";
cin>>p;
cout<<"\nEnter Time :";
cin>>t;
amount=interest(p,t);
cout<<"\nAmount With Interest Is :"<<amount<<"\n";
getch();
}
float interest(float p,int t,float r)
{
int y=1;
float sum=p;
while(y<=t)
{
sum=sum*(1+r);
y=y+1;
}
return(sum);
}
