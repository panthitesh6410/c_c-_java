#include<iostream.h>
#include<conio.h>
main()
{
char a;
int b;
int c;
char d;
clrscr();
do
{
cout<<"Job Selection,Please Enter Your Details :";
cout<<"\n---------------------------------------";
cout<<"\n\nEnter Your Gender :";
cin>>a;
cout<<"\nEnter Your Age :";
cin>>b;
cout<<"\nEnter Your Percentage :";
cin>>c;
cout<<"\n\nYour Details Are :";
cout<<"\n----------------";
cout<<"\n\nGender :"<<a;
cout<<"\nAge :"<<b;
cout<<"\nPercentage :"<<c;
if( (a=='f' || a=='F' && b>=18 && b<=25) || (c>=95) )
{
cout<<"\n\nCongratulations...";
cout<<"\nYou Are Selected For The Job";
}
else
cout<<"\n\nYou Are Not Selected For The Job";
cout<<"\n\nDo You Want To Continue :(Y or y For Yes)  :";
cin>>d;
cout<<"\n";
}
while( (d=='y') || (d=='Y') );
cout<<"Thank You For Co-Operating Us...";
getch();
}