#include<iostream.h>
#include<conio.h>
#include<stdio.h>
inline float mul(float x,float y)\\Inline Is Used To Save Memory In Small Functions Only
{
return(x*y);
}
void main()
{
float a,b;
clrscr();
cout<<"\nEnter two Values :\n";
cin>>a>>b;
cout<<"\na="<<a<<"\tb="<<b;
cout<<"\n\nMultiplication Is :";
cout<<mul(a,b);
getch();
}