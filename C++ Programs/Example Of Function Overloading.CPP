#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int volume(int);
double volume(double,int);long volume(long,int,int);
main()
{
clrscr();
cout<<"\nThe Volume Of Cube Is :";
cout<<volume(10)<<endl;
cout<<"\nThe Volume Of Cuboid Is :";
cout<<volume(10l,5,7)<<endl;
cout<<"\nThe Volume Of Cylinder Is :";
cout<<volume(2.5,4)<<endl;
getch();
}
int volume(int s)
{
return(s*s*s);
}
double volume(double r,int h)
{
return(3.14*r*r*h);
}
long volume(long l,int b,int h)
{
return(l*b*h);
}