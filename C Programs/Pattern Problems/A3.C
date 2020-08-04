main()
{
int n,i,j;
clrscr();
printf("Enter How Many Lines You Want In This Figure :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i);
}
printf("\n");
}
getch();
}