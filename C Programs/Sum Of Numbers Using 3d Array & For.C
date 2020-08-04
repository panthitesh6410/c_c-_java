#include <stdio.h>
main()
{
int r;
int c;
int t;
int A[2][2][2];
int Sum;
Sum=0;
clrscr();
printf("\nEnter Eight Numbers :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
for(t=0;t<=1;t++)
{
scanf("%d",&A[r][c][t]);
fflush(stdin);
}
printf("\nDisplay Eight Numbers :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
for(t=0;t<=1;t++)
{
printf(" %d",A[r][c][t]);
Sum=Sum+A[r][c][t];
}
printf("\n\nSum :%d",Sum);
getch();
}