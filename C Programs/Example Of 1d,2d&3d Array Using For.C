main()
{
int r;
int c;
int t;
int A[2]={10,20};
int B[2][2]={10,20,30,40};
int C[2][2][2]={10,20,30,40,50,60,70,80};
clrscr();
printf("Example Of 1d Array :");
for(r=0;r<=1;r++)
{
printf(" %d",A[r]);
}
getch();
printf("\nExample Of 2d Array :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
printf(" %d",B[r][c]);
}
getch();
printf("\nExample Of 3d Array :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
for(t=0;t<=1;t++)
{
printf(" %d",C[r][c][t]);
}
getch();
}