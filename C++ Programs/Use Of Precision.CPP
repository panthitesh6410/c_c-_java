#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int id[4]={11,12,13,14};
char *name[4]={"RAVI","GURDEEP","NADEEM","ARSGHAD"};
float fee[4]={1200.3023,1500.403232,1200.2023232,1500.1023232};
cout<<"\nSetting Precision 3.\n\n";
cout.width(15);
cout<<"ID_NUMBER";
cout.width(20);
cout<<"NAME";
cout.width(15);
cout<<"FEE"<<"\n";
cout.precision(3);
for(int i=0;i<4;i++)
{
cout.width(15);
cout<<id[i];
cout.width(20);
cout<<name[i];
cout.width(15);
cout<<fee[i]<<"\n";
}
cout<<"\n";
cout<<"\nAfter Setting Precision 5.\n\n";
cout.precision(5);
for(i=0;i<4;i++)
{
cout.width(15);
cout<<id[i];
cout.width(20);
cout<<name[i];
cout.width(15);
cout<<fee[i]<<"\n";
}
getch();
}