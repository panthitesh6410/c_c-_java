#include<iostream.h>
#include<conio.h>
main()
{
int A[2][2];
int B[2][2];
int C[2][2];
int r;
int c;
clrscr();
cout<<"Matrix Addition :";
cout<<"\n----------------";
cout<<"\n\nEnter The Elements Of First Matrix :\n";
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
cin>>A[r][c];
}
cout<<"\n\nEnter The Elements Of Second Matrix :\n";
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
cin>>B[r][c];
}
cout<<"\n\nDisplay The Elements Of First Matrix :";
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
cout<<"\n";
cout<<A[r][c];
}
cout<<"\n\nDisplay The Elements Of Second Matrix :";
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
cout<<"\n";
cout<<A[r][c];
}
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
C[r][c]=A[r][c]+B[r][c];
}
cout<<"\n\nAddition Of The Matrices :\n";
for(r=0;r<=1;r++)
{
for(c=0;c<=1;c++)
cout<<"\t"<<C[r][c];
cout<<"\n";
}
getch();
}
