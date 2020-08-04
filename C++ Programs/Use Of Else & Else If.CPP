#include<iostream.h>
#include<conio.h>
main()
{
float p;
clrscr();
cout<<"Enter Your Pecentage :";
cin>>p;
cout<<"\nYour Percentage Is :"<<p;
if(p>90)
{
cout<<"\n\nFirst Division";
cout<<"\nCongratulations...";
}
else if(p>80)
cout<<"\n\nSecond Division";
else if(p>70)
cout<<"\n\nThird Division";
else if(p>60)
cout<<"\n\nFourth Division";
else
cout<<"\n\nFail";
cout<<"\nNeeds Improvement;
getch();
}