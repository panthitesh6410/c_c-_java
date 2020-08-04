#include<fstream.h>
#include<conio.h>
main()
{
clrscr();
ofstream fout;
fout.open("stu");
fout<<"\tMansi Goyal\n"<<"\tShiva\n"<<"\tRavi Kumar\n";
fout.close();
fout.open("mark");
fout<<"\t79.45\n"<<"\t64.56\n"<<"\t80.67";
fout.close();
char line[30];
ifstream fin;
fin.open("stu");
cout<<"Content Of stu are given below\n";
fin.getline(line,30);
cout<<line<<"\n";
fin.getline(line,30);
cout<<line<<"\n";
fin.getline(line,30);
cout<<line<<"\n";
fin.close();
fin.open("mark");
cout<<"\nThe Contents Of Mark File\n";
fin.getline(line,30);
cout<<line<<"\n";
fin.getline(line,30);
cout<<line<<"\n";
fin.getline(line,30);
cout<<line<<"\n";
fin.close();
getch();
}