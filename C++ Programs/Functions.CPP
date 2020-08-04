#include<iostream.h>
#include<conio.h>
square1()
{
int a;
int b;
clrscr();
cout<<"Example Of The Function Without Argument";
cout<<"\n-----------------------------------------";
cout<<"\n\nEnter Any Number :";
cin>>a;
b=a*a;
cout<<"\nThe Square Of The Number Is :"<<b;
getch();
}
square2(int a)
{
int b;
b=a*a;
cout<<"\nThe Square Of The Number Is :"<<b;
getch();
}
square3(int a)
{
int b;
b=a*a;
return(b);
}
main()
{
int a;
clrscr();
square1();
cout<<"\n\n\nExample Of The Function With Argument And No Return Value";
cout<<"\n----------------------------------------------------------";
cout<<"\n\nEnter Any Number :";
cin>>a;
square2(a);
cout<<"\n\n\nExample Of The Function With Argument And Return Value";
cout<<"\n-------------------------------------------------------";
cout<<"\n\nEnter Any Number :";
cin>>a;
cout<<"\nThe Square Of The Number Is :"<<square3(a);
getch();
}