main()
{
int a;
int b;
clrscr();
printf("Enter Your Percentage :");
scanf("%d",&a);
b=a/10;
switch(b)
{
case 9:
case 8:
printf("Pass");
getch();
break;
default:
printf("Fail");
}
getch();
}