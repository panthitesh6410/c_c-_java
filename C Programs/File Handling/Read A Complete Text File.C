//Example To Write And Read A Complete Text File
#include<stdio.h>
#include<stdlib.h>//for exit(1) function
main()
{
FILE*fp;
char ch;
clrscr();
fp=fopen("file1.txt","w");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);
}
printf("\nFile Created Successfully");
printf("\nEnter Text Here (press # to close) :\n");
while( (ch=getchar())!='#')
{
fputc(ch,fp);
}
fclose(fp);//To Close File
printf("\nFile Saved And Closed");
/*Open File In Read Mode*/
fp=fopen("file1.txt","r");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit From Program
}
printf("\nFile Opened.\nFile's Contents :\n");
/*Reading From File*/
while( (ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
printf("\n\nFile Closed");
getch();
}