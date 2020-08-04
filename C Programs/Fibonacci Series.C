main()
{
int n;
int first=0;
int second=1;
int next;
int c;
clrscr();
printf("Enter Number Of Terms :");
scanf("%d",&n);
printf("\nFirst %d Terms Of Fibonacci Series Are :",n);
for(c=0;c<n;c++)
{
if(c<=1)
next=c;
else
{
next=first+second;
first=second;
second=next;
}
printf("%d",next);
}
getch();
}