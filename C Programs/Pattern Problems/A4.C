main()
{
int n,i,j;
clrscr();
printf("Enter How Many Lines You Want In This Figure :");
scanf("%d",&n);
//Loop To Create The Upper Triangle
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
//Loop To Create The Lower Triangle
for(i=n+1;i>0;i--)
{
for(j=0;j<i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}