main()
{
int n,i,j;
clrscr();
printf("Enter How Many Lines You Want In This Figure :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}