#include<stdio.h>
#include<conio.h>
main()
{
int marks[4],tot=0,per,i;
clrscr();
for(i=0;i<4;i++)
{
printf("\nEnter Marks[%d subject]:",i+1);
scanf("%d",&marks[i]);
tot=tot+marks[i];
}
per=tot/4;
if(marks[0]>=40 && marks[1]>=40 && marks[2]>=40 && marks[3]>=40)
{
if(per>=70)
{
printf("\nDistinction");
}
else if(per>=60)
{
printf("\nFirst Class");
}
else if(per>=50)
{
printf("\nSecond Class");
}
else
{
printf("\Pass");
}
printf("\n----------\n");
for(i=0;i<4;i++)
{
printf("\nSubject %d :%d",i+1,marks[i]);
}
printf("\n--------\n");
printf("\nTotal :%d",tot);
printf("\nPercentage :%.2f",(float)per);
printf("\n---------\n");
}
else
{
gotoxy(35,12);
textcolor(RED+BLINK);
cprintf("Fail");
}
getch();
}