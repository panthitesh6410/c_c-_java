//Use Of fopen() & fclose()
#include<stdio.h>
#include<stdlib.h>// for exit (1) function
main()
{
FILE *fp;
clrscr();
fp=("Prakhar.txt","w");
if(fp=NULL)
{
printf("Error In Opening File");
}
printf("\nFile Created Successfully");
fclose(fp);
getch();
}
