//153=cube of(1+3+5)
main()
{
int num;
int i;
int dig,cube,sum=0;
clrscr();
printf("Enter A Number :");
scanf("%d",&num);
for(i=num;i>0;i=i/10)
{
dig=i%10;
cube=dig*dig*dig;
sum=sum+cube;
}
if(sum==num)
{
printf("%d Is An Armstrong Number",num);
}
else
{
printf("%d Is Not An Armstrong Number",num);
}
getch();
}