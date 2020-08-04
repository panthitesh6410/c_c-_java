//Use Of fputs() & fgets()
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
FILE*fp;
char text[50];
clrscr();
fp=fopen("file.txt","w");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit The Program
}
strcpy(text,"This Is Line 1");
fputs(text,fp);
fputc('\n',fp);//Writting New Line After The String
strcpy(text,"This Is Line 2");
fputs(text,fp);
fputc('\n',fp);//Writting New Line After The String
fclose(fp);
fp=fopen("file.txt","r");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit The Program
}
fgets(text,20,fp);//20 Is The Maximum Character To Read
printf("%s\n",text);
fgets(text,20,fp);//20 Is The Maximum Character To Read
printf("%s\n",text);
fclose(fp);
getch();
}