// Function Without Argument
add()
{
int a;
int b;
int c;
printf("\n\nEnter First Number :");
scanf("%d",&a);
printf("\nEnter Second Number :");
scanf("%d",&b);
c=a+b;
printf("\nSum :%d",c);
getch();
}
sub()
{
int a;
int b;
int c;
printf("\n\nEnter First Number :");
scanf("%d",a);
printf("\nEnter Second Number :");
scanf("%d",b);
c=a-b;
printf("\nDifference :%d",c);
getch();
}
main()
{
clrscr();
add();
sub();
printf("\n\nPrakhar Mor");
getch();
add();
sub();
printf("\n\nRanjhi Guest House");
getch();
add();
sub();
printf("\n\nElectronics And Communication Engineering");
getch();
add();
sub();
printf("\n\nJabalpur Engineering College");
}