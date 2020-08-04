// Function With Argument And No Return Value
add(int a,int b)
{
int c;
c=a+b;
printf("Sum :%d",c);
getch();
}
main()
{
int a;
int b;
clrscr();
printf("Enter First Number :");
scanf("%d",&a);
printf("Enter Second Number :");
scanf("%d",&b);
add(a,b);
}