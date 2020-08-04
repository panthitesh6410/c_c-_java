//Example To Read And Write Multiple Objects
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
student std;
int result,n,i;
clrscr();
fp=fopen("file.txt","wb");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);
}
printf("\nEnter Total Number Of Students :");
scanf("%d",&n);
//Input Student Detail
for(i=0;i<n;i++)
{
printf("\nEnter Details Of Student [%d] :\n",i);
printf("Enter Name :");
fflush(stdin);
gets(std.name);
printf("Enter Age :");
scanf("%d",&std.age);
printf("Enter Percentage :");
scanf("%f",&std.perc);
//Writting In The File
result=fwrite((char*)&std,sizeof(std),1,fp);
if(result==0)break;
}
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
printf("\n\nEntered Records Are :\n");
while((result=fread((char*)&std,sizeof(std),1,fp)))
{
if(result)
printf("\nName :%s \nAge :%d \nPercentage :%f",std.name,std.age,std.perc);
}
fclose(fp);
getch();
}