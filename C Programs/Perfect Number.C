main()
{
int n,i=1,sum=0;
clrscr();
printf("Enter A Number :");
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
sum=sum+i;
i++;
}
if(sum==n)
printf("%d Is A Perfect Number",i);
else
printf("%d Is Not A Perfect Number",i);
getch();
}