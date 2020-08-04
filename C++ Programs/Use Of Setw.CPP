#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
main()
{
clrscr();
int id[4]={11,12,13,14};
char *name[4]={"RAVI","GURDEEP","NADEEM","ASHAD"};
float fee[4]={1200.3023,1500.403232,1200.2023232,1500.1023232};
cout<<setw(15)<<"ID_NUMBER";
cout<<setw(20)<<"FEE"<<"\n";
for(int i=0;i<4;i++)
{
cout<<setw(15)<<id[i];
cout<<setw(20)<<name[i];
cout<<setw(15)<<setprecision(4)<<fee[i]<<"\n";
}
getch();
}
