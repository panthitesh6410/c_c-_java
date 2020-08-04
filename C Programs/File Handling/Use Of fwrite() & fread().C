//Use Of fwrite() & fread()
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
char name[30];
int age;
float perc;
}student;
main()
{
FILE *fp;
student std;//*std-student structure's variable
int result;
clrscr();
fp=fopen("file.txt","wb");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit The Program
}
//Input Student Detail
printf("Enter Name :");gets(std.name);
printf("Enter Age :");scanf("%d",&std.age);
printf("Enter Percentage :");scanf("%f",&std.perc);
//Writting In The File
result=fwrite((char*)&std,sizeof(std),1,fp);
if(result)
printf("\nData Inserted Sucessfully");
fclose(fp);
//Re-Open File In Read Mode
fp=fopen("file.txt","rb");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);
}
//Reading Data From File
result=fread((char*)&std,sizeof(std),1,fp);
if(result)
printf("\nData From File:\nName :%s \nAge :%d \nPercentage :%f",std.name,std.age,std.perc);
else
printf("\nData Readin Failed");
fclose(fp);
getch();
}