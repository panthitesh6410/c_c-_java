main()
{
int num,i,j,k,l;
clrscr();
printf("Enter How Many Lines Structure You Want :");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=1;j<=num-i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
for(l=1;l<i;l++)
{
printf("*");
}
printf("\n");
}
getch();
}