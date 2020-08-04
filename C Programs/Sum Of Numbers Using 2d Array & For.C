main()
{
int r;
int c;
int A[2][2];
int Sum;
Sum=0;
clrscr();
printf("\nType Four Numbers :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
scanf("%d",&A[r][c]);
}
printf("\nDisplay Four Numbers :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
printf(" %d",A[r][c]);
Sum=Sum+A[r][c];
}
printf("\nSum=%d",Sum);
getch();
}