#include<iostream.h>
#include<conio.h>
main()
{
int a;
int b;
int c;
int d;
int e;
float f;
int *p1;
int *p2;
int *p3;
int *p4;
int *p5;
float *p6;
clrscr();
p1=&a;
p2=&b;
p3=&c;
p4=&d;
p5=&e;
p6=&f;
cout<<"\nEnter First Number :";
cin>>*p1;
cout<<"\nEnter Second Number :";
cin>>*p2;
*p3=*p1 + *p2;
*p4=*p1 - *p2;
*p5=*p1 * *p2;
*p6=(float)*p1 / *p2;
cout<<"\nAddition :"<<*p3;
cout<<"\nSubtraction :"<<*p4;
cout<<"\nMultiplication :"<<*p5;
cout<<"\nDivision :"<<*p6;
getch();
}