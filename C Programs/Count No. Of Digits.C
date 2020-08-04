main()
{
int a;
int b;
clrscr();
b=0;
printf("Enter Any Number :");
scanf("%d",&a);
while(a>0)
{
a=a/10;
b=b+1;
}
printf("Number Of Digits Of The Given Number :%d",b);
getch();
}