#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int id[4]={11,12,13,14};
char *name[4]={"RAVI","GURDEEP","NADEEM","ARSHAD"};
float fee[4]={1200,1500,1200,1500};
cout.width(15);
cout<<"ID_NUMBER";
cout.width(20);
cout<<"NAME";
cout.width(15);
cout<<"FEE"<<"\n";
for(int i=0;i<4;i++)
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