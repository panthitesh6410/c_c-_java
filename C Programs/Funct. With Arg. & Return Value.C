// Function With Argument And Return Value

add(int a,int b)
{
int c;
c=a+b;
return(c);
}
main()
{
int a;
int b;
clrscr();
printf("Enter First Number :");
scanf("%d",&a);
printf("\nEnter Second Number :");
scanf("%d",&b);
printf("\nSum :%d",add(a,b));
getch();
}