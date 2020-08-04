//Use Of fprintf() & fscanf()
#include<stdio.h>
#include<stdlib.h>//For Exit(1) Function
#include<string.h>
main()
{
FILE *fp;
char name[30];
char temp[30];
int age;
float perc;
int result;
clrscr();
fp=fopen("file.txt","wb");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit From Program
}
/*padding 30 bytes with space,you have to put 30 bytes for name*/
memset(name,' ',30);
printf("Enter Name :");
gets(temp);
memcpy(name,temp,strlen(temp));
printf("Enter Age :");
scanf("%d",&age);
printf("Enter Percentage :");
scanf("%f",&perc);
if(result)
printf("\nData Inserted Successfully");
fclose(fp);
//Open File In Read Mode
fp=fopen("file.txt","rb");
if(fp==NULL)
{
printf("\nError In Opening File");
exit(1);//To Exit The Program
}
//Reading Data From The File
result=fscanf(fp,"%s,%d,%f",&name,&age,&perc);
if(result)
printf("\nData From File :\nName :%s \nAge :%d \nPercentage :%f",name,age,perc);
else
printf("\nData Reading Failed");
fclose(fp);
getch();
}