#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
clrscr();
cout.fill('*');
cout.setf(ios::left,ios::adjustfield);
cout.width(15);
cout<<"VALUE";
cout.setf(ios::right,ios::adjustfield);
cout.width(15);
cout<<"Square Root Of Value"<<"\n\n";
cout.fill('.');
cout.precision(4);
cout.setf(ios::showpoint);
cout.setf(ios::showpos);
cout.setf(ios::fixed,ios::floatfield);
for(int i=1;i<=20;i=i+2)
{
cout.setf(ios::internal,ios::adjustfield);
cout.width(5);
cout<<i;
cout.setf(ios::right,ios::adjustfield);
cout.width(20);
cout<<sqrt(i)<<"\n";
}
cout.setf(ios::scientific,ios::floatfield);
cout<<"\nSquare Root Of 25="<<sqrt(100)<<"\n";
getch();
}