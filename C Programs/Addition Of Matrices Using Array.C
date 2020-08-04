main()
{
int row;
int col;
int r;
int c;
int A[100][100];
int B[100][100];
int C[100][100];
clrscr();
printf("\nEnter The Value Of 'r' :");
scanf("%d",&r);
printf("\nEnter The Value Of 'c' :");
scanf("%d",&c);
printf("\nEnter The Elements Of First Matrix :\n");
for(row=0;row<r;row++)
for(col=0;col<c;col++)
{
scanf("%d",&A[row][col]);
}
printf("\nEnter The Elements Of Second Matrix :\n");
for(row=0;row<r;row++)
for(col=0;col<c;col++)
{
scanf("%d",&B[row][col]);
}
printf("\nDisplay The Elements Of First Matrix :");
for(row=0;row<r;row++)
for(col=0;col<c;col++)
{
printf(" %d",A[row][col]);
}
printf("\n\nDisplay The Elements Of Second Matrix :");
for(row=0;row<r;row++)
for(col=0;col<c;col++)
{
printf(" %d",B[row][col]);
}
for(row=0;row<r;row++)
for(col=0;col<c;col++)
{
C[row][col]=A[row][col]+B[row][col];
}
printf("\n\nSum Of Entered Matrix :\n");
for(row=0;row<r;row++)
{
for(col=0;col<c;col++)
printf("%d\t",C[row][col]);
printf("\n");
}
getch();
}