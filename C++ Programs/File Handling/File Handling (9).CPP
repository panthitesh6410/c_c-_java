#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class data
{
public:
int a,b,c,d,e,p;
getval();
putval();
};
data::getval()
{
cout<<"\nEnter Your Mathematics Marks :";
cin>>a;
cout<<"\nEnter Your Physics Marks :";
cin>>b;
cout<<"\nEnter Your Chemistry Marks :";
cin>>c;
cout<<"\nEnter Your English Marks :";
cin>>d;
cout<<"\nEnter Your Physical Education Marks :";
cin>>e;
}
data::putval()
{
cout<<"\nYour Marks Details Are :";
cout<<"\n-----------------------";
cout<<"\nMathematics :"<<a;
cout<<"\nPhysics :"<<b;
cout<<"\nChemistry :"<<c;
cout<<"\nEnglish :"<<d;
cout<<"\nPhysical Education :"<<e;
p=(a+b+c+d+e)/5;
cout<<"\n\nYour Percentage :"<<p;
}
main()
{
class data obj;
clrscr();
fstream file;
file.open("Prakhar.txt",ios::in|ios::out);
obj.getval();
file.write((char*)&obj,sizeof(obj));
file.read((char*)&obj,sizeof(obj));
obj.putval();
file.close();
getch();
}