#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
ofstream fout("Add");
int a;
int b;
int c;
clrscr();
cout<<"Enter First Number :";
cin>>a;
cout<<"Enter Second Number :";
cin>>b;
c=a+b;
cout<<"Sum :"<<c;
fout<<a;
fout<<b;
fout<<c;
getch();
fout.close();
ifstream fin("Add");
fin>>a;
fin>>b;
fin>>c;
fin.close();
}
