#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class data
{
public:
char name[20];
int age;
char gender;
getval();
putval();
};
data ::getval()
{
cout<<"Enter Your Name :";
cin>>name;
cout<<"\nEnter Your Age :";
cin>>age;
cout<<"\nEnter Your Gender :";
cin>>gender;
}
data ::putval()
{
cout<<"\nName :"<<name;
cout<<"\nAge :"<<age;
cout<<"\nGender :"<<gender;
}
main()
{
class data obj;
clrscr();
fstream file;
file.open("Int.txt",ios::in|ios::out);
obj.getval();
file.write((char*)&obj,sizeof(obj));
file.read((char*)&obj,sizeof(obj));
obj.putval();
file.close();
getch();
}
