#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
ostream & currency(ostream &output)
{
output<<"Rs.";
return output;
}
main()
{
clrscr();
cout.precision(2);
float n;
cout<<"Amount :";
cin>>n;
cout<<"\n"<<currency<<" "<<n;
getch();
}
