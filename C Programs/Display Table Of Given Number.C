#include<stdio.h>
main()
{
int a;
int i;
int t;
clrscr();
printf("Enter Table Value :");
scanf("%d",&a);
fflush(stdin);
printf("\nTable Of %d:",a);
i=1;
while(i<=10)
{
t=a*i;
printf("\n\n%d",t);
i=i+1;
}
getch();
}