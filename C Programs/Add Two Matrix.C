main()
{
int r;
int c;
int A[2][2];
int B[2][2];
int C[2][2];
clrscr();
printf("\nEnter Elements Of First Matrix :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
scanf("%d",&A[r][c]);
}
printf("\n\nEnter Elements Of Second Matrix :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
scanf("%d",&B[r][c]);
}
printf("\n\nDisplay First Matrix :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
printf(" %d",A[r][c]);
}
printf("\n\nDisplay Second Matrix :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
printf(" %d",B[r][c]);
}
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
C[r][c]=A[r][c]+B[r][c];
}
printf("\n\nDisplay sum Of Matrix :");
for(r=0;r<=1;r++)
for(c=0;c<=1;c++)
{
printf("\n\n %d",C[r][c]);
}
getch();
}