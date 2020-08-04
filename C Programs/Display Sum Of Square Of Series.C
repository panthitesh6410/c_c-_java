//Print Sum Of Square Of A Series
main()
{
int i;
int n;
int sum;
clrscr();
sum=0;
printf("Enter The Value Of 'n' :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i*i;
}
printf("Required Sum :%d",sum);
getch();
}

