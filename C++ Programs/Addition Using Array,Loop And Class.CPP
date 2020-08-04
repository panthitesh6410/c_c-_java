#include<iostream.h>
#include<conio.h>
class data
{
public:

int A[6];
}
main()
{
int i;
int k=1;
clrscr();
class data obj;
obj.A[5]=0;
for(i=0;i<=4;i++)
{
cout<<"\nEnter "<<"("<<k<<")"<<" Number :";
cin>>obj.A[i];
obj.A[5]=obj.A[5]+obj.A[i];
k++;
}
cout<<"\nRequired Sum :"<<obj.A[5];
getch();
}