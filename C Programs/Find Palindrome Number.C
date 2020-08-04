main()
{
int num,i;
int dig,j=0;
clrscr();
printf("Enter A Number :");
scanf("%d",&num);
for(i=num;i>0;i=i/10)
{
dig=i%10;
j=j*10+dig;
}
if(j==num)
{
printf("\n%d Is A Palindrome",num);
}
else
{
printf("\n%d Is Not A Palindrome",num);
}
getch();
}