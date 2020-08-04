#include<conio.h>
#include<iostream.h>
class item
{
static int count;
int num;
public:
void getval(int a)
{
num=a;
count++;
}
void getcount()
{
cout<<"\nCount :";
cout<<count<<"\n";
}
};
int item::count;//We Want To Use Count Throughout The Program
void main()
{
item x,y,z;//Need Not Mention Class Before Item
clrscr();
x.getcount();
y.getcount();
z.getcount();

x.getval(10);
y.getval(20);
z.getval(30);

cout<<"\n\t******After Reading Data******\n\n";

x.getcount();
y.getcount();
z.getcount();
getch();
}