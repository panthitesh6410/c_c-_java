#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
cout.fill('*');
for(int i=1;i<=10;i++)
{
cout.width(15);
cout<<i<<"\n";
}
cout<<"\n\nPadding Changed\n";
cout.fill('+');
for(i=1;i<=10;i++)
{
cout.width(15);
cout<<i<<"\n";
}
getch();
}