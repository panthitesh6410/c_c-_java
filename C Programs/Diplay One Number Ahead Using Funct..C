prakhar1(int a)
{
a=a+1;
printf("\nResultant Is :%d",a);
getch();
}
prakhar2(int b)
{
b=b+1;
printf("\nResultant Is :%d",b);
getch();
}
main()
{
int a;
int b;
clrscr();
printf("\nEnter First Number :");
scanf("%d",&a);
prakhar1(a);
printf("\n\nEnter Second Number :");
scanf("%d",&b);
prakhar2(b);
}

