#include<fstream.h>
#include<conio.h>
main()
{
clrscr();
ifstream fin1,fin2;
fin1.open("stu");
fin2.open("mark");
char line[30];
cout<<"Content Of Student And Marks File \n\n";
fin1.getline(line,30);
cout<<line<<"\n";
fin2.getline(line,30);
cout<<line<<"\n\n";
fin1.getline(line,30);
cout<<line<<"\n";
fin2.getline(line,30);
cout<<line<<"\n\n";
fin1.getline(line,30);
cout<<line<<"\n";
fin2.getline(line,30);
cout<<line<<"\n";
fin1.close();
fin2.close();
getch();
}