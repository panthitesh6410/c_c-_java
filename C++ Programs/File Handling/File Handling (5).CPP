#include<fstream.h>
#include<conio.h>
main()
{
clrscr();
char ch;
ifstream fin;
fin.open("stu",ios::in|ios::binary);
if(!fin)
{
cout<<"Can Not Open File! \n\n";
}
cout<<"contents Of The File Stu....\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
getch();
}