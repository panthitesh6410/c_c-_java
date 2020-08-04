//Public Function Of The Same Class Can Acess Its Private Data
#include<iostream.h>
#include<conio.h>
const int s=2;
class emp
{
int id[s];
float sal[s];
public:
void getval();
void dispval();
};
void emp::getval()
{
for(int i=0;i<s;i++)
{
cout<<"\nEnter id For "<<i<<":";
cin>>id[i];
cout<<"\nEnter sal For "<<i<<":";
cin>>sal[i];
}
}
void emp::dispval()
{
for(int i=0;i<s;i++)
{
cout<<"\n"<<id[i]<<"\t";
cout<<sal[i];
}
}
void main()
{
clrscr();
emp
e;
e.getval();
e.dispval();
getch();
}