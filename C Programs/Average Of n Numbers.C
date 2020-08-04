main()
{
int n;
int i;
int a;
int sum;
clrscr();
sum=0;
printf("Enter The No. Of Integers You Want To Add :");
scanf("%d",&n);
printf("\nEnter %d Integers :\n",n);
for(i=1;i<=n;i++)
{
scanf("%d",&a);
sum=sum+a;
}
printf("\nAverage Of Entered Integers :%d",(sum/n));
getch();
}