#include<fstream.h>
#include<conio.h>
#include<string.h>
struct customer
{
char name[50];
float bal;
};
main()
{
clrscr();
customer sav;
strcpy(sav.name,"Yatendra Kumar");
sav.bal=2310.75;
ofstream fout;
fout.open("Saving",ios::out|ios::binary);
if(!fout)
{
cout<<"File Cannot Be Opened\n";
}
fout.write((char*)&sav,sizeof(customer));
fout.close();
ifstream fin;
fin.open("Saving",ios::in | ios::binary);
fin.read((char*)&sav,sizeof(customer));
cout<<sav.name;
cout<<" Has Deposited Rs."<<sav.bal<<"\n";
fin.close();
getch();
}