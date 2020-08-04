//Use Of rename() & remove()
#include<stdio.h>
main()
{
FILE*fp;
clrscr();
fp=fopen("%d:/file1.txt","w");
if(fp==NULL)
{
printf("\nFile To Create, File Name :%s","d:/file1.txt");
}
else
{
printf("\nFile Created,File Name :%s","d:/file1.txt");
}
fclose(fp);
//Rename file1.txt To file2.txt
rename("%d:file1.txt","d:file2.txt");
//Open file1.txt In Read Mode
fp=fopen("%d:/file1.txt","r");
if(fp==NULL)
{
printf("\nFailed To Open,File Name :%s","d:/file1.txt");
}
else
{
printf("\nFile Opened,File Name :%s","d:/file1.txt");
fclose(fp);
}
//Open file2.txt In read Mode
fp=fopen("d:/file2.txt","r");
if(fp==NULL)
{
printf("\nFile Opened,File Name :%s","d:/file2.txt");
fclose(fp);
}
//Remove file2.txt
remove("d:/file2.txt");
getch();
}
