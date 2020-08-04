main()
{
int n;
int a;
int i;
int sum;
sum=0;
clrscr();
printf("Enter The Number Of Integers You Want To Add :");
scanf("%d",&n);
printf("\nEnter %d Numbers :",n);
for(i=1;i<=n;i++)
{
scanf("%d",&a);
sum=sum+a;
}
printf("\nRequired Sum :%d",sum);
getch();
}

