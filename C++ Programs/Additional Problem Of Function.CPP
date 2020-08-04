#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
change(int,char);
main()
{
clrscr();
char a;
int temp;
do
{
cout<<"\nEnter Temperature And Grade :";
cin>>temp>>a;
if(a=='c'||a=='C'||a=='f'||a=='F')
{
change(temp,a);
break;
}
else
{
cout<<"\nInvalide Input";
continue;
}
}while(a);
getch();
}
change(int temp,char gra)
{
float val;
if(gra=='c'||gra=='C')
{
val=(temp*1.8)+3.2;
cout<<"\nFahrenheit :"<<setw(9)<<setprecision(2)<<val;
}
else
{
val=(temp-32)/1.8;
cout<<"\nCelsius :"<<setw(9)<<setprecision(2)<<val;
}
getch();
}
