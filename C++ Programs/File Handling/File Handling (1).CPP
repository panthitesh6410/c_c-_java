#include<fstream.h>
#include<conio.h>
main()
{
clrscr();
ofstream fout("Student");//Connects Student File To Output Stream
char name[30];
char ch;
int marks=0;
for(int i=0;i<3;i++)
{
cout<<"\nEnter "<<i+1<<" Student Name :";
cin.get(name,30);//30 Alphabets Can Be Stored
cout<<"Enter Marks :";
cin>>marks;
cin.get(ch);//Clears Extra Space In The Memory//Clears The Buffer
fout<<name<<"\n"<<marks<<"\n";
}
fout.close();
ifstream fin("Student");//Connects Student File To Input Stream
fin.seekg(0);//Moves Cursor To First Line
cout<<"\n";
for(i=0;i<3;i++)
{
fin.get(name,30);//Read From File
fin.get(ch);
fin>>marks;
fin.get(ch);
cout<<"Student Name :"<<name;
cout<<"\tMarks :"<<marks<<"\n";
}
fin.close();//Close The File Which Is Formed
getch();
}