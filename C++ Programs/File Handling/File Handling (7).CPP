#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
class inv
{
char name[15];
int code;
int cost;
public:
void getval();
void putval();
};
void inv::getval()
{
cout<<"Enter Name :";
cin>>name;
cout<<"Enter Code :";
cin>>code;
cout<<"Enter Cost :";
cin>>cost;
}
void inv::putval()
{
cout<<setiosflags(ios::left)<<setw(15)<<name;
cout<<setiosflags(ios::right)<<setw(10)<<code;
cout<<setprecision(2)<<setw(10)<<cost;
cout<<endl;
}
void main()
{
clrscr();
inv book[3];
fstream file;//Used For Both Input And Output Stream
file.open("stock.dat",ios::in|ios::out);//Opening File In Both Input And Output Stream
cout<<"Enter Details For Three Books\n";
for(int i=0;i<3;i++)
{
book[i].getval();
file.write((char*)&book[i],sizeof(book[i]));
}
file.seekg(0);//Brings Pointer To The Starting
cout<<"\n*****Output*****\n";
for(i=0;i<3;i++)
{
file.read((char*)&book[i],sizeof(book[i]));
book[i].putval();
}
file.close();
getch();
}