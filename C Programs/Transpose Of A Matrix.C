main()
{
int m;
int n;
int r;
int c;
int matrix[10][10];
int transpose[10][10];
clrscr();
printf("\nEnter The No. Of Rows Of A Matrix :");
scanf("%d",&r);
printf("\nEnter The No. Of Columns Of A Matrix :");
scanf("%d",&c);
printf("\nEnter The Elements Of A Matrix :");
for(m=0;m<r;m++)
for(n=0;n<c;n++)
{
scanf("%d",&matrix[m][n]);
}
for(m=0;m<r;m++)
for(n=0;n<c;n++)
{
transpose[n][m]=matrix[m][n];
}
printf("Transpose Of The Matrix :");
for(m=0;m<r;m++)
for(n=0;n<c;n++)
{
printf("%d",transpose[n][m]);
}
getch();
}
