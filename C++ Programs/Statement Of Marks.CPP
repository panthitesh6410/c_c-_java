#include<iostream.h>
#include<conio.h>
main()
{
int a;
int b;
int c;
int d;
int e;
int p;
clrscr();
cout<<"Statement Of Marks :";
cout<<"\n-------------------";
cout<<"\n\nEnter Your Mathematics Marks :";
cin>>a;
cout<<"\nEnter Your Physics Marks :";
cin>>b;
cout<<"\nEnter Your Chemistry Marks :";
cin>>c;
cout<<"\nEnter Your English Marks :";
cin>>d;
cout<<"\nEnter Your Physical Education Marks :";
cin>>e;
cout<<"\n\nYour Marks Details Are :";
cout<<"\n----------------------";
cout<<"\n\nMathematics :"<<a;
cout<<"\n\nPhysics :"<<b;
cout<<"\n\nChemistry :"<<c;
cout<<"\n\nEnglish :"<<d;
cout<<"\n\nPhysical Education :"<<e;
p=(a+b+c+d+e)/5;
cout<<"\n\n\nPercentage Is :"<<p;
cout<<"\n-------------";
getch();
}