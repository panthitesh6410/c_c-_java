//Use Of fgetc() & fputc()
#include<stdio.h>
#include<stdlib.h>//For Exit(1) Function
main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("file1.txt","w");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit The Program
}
printf("File Created Successfully");
fputc('A',fp);//write 'A'
fputc('B',fp);//write 'B'
fputc('C',fp);//write 'C'
fclose(fp);//To Close File
printf("\nFile Saved And Closed");
/*Open File In Read Mode*/
fp=fopen("file1.txt","r");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit The Program
}
printf("\nFile Opened.\nFile's Contents :");
/*Reading From File*/
ch=fgetc(fp);          printf("%c",ch);
ch=fgetc(fp);          printf("\t%c",ch);
ch=fgetc(fp);          printf("\t%c",ch);
fclose(fp);
printf("\nFile Closed");
getch();
}