//Use Of Getw() & Putw()
#include<stdio.h>
#include<stdlib.h>
main()
{
FILE*fp;
int num;
int i;
clrscr();
fp=fopen("file.dat","wb");//File Has To Be Opened In Binary Mode If We Are Using getw() & putw() functions
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit The Program
}
for(i=0;i<10;i++)
{
printf("Enter Number [%d] :",i+1);
scanf("%d",&num);
putw(num,fp);//Write Number Into The File
}
fclose(fp);
//Open File To Read
fp=fopen("file.dat","rb");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit The Program
}
printf("\nEntered Numbers Are :\n");
for(i=0;i<10;i++)
{
num=getw(fp);
printf("  %d",num);
}
fclose(fp);
getch();
}