// Combined Forms Of Functions

square1()
{
int a;
int b;
clrscr();
printf("\nExample Of Fuction Without Argument");
printf("\nEnter Any Number :");
scanf("%d",&a);
b=a*a;
printf("Square Of The Number :%d",b);
getch();
}
square2(int a)
{
int b;
b=a*a;
printf("Square Of The Number :%d",b);
getch();
}
square3(int a)
{
int b;
b=a*a;
return(b);
}
main()
{
int a;
int b;
square1();
printf("\nExample Of A Function With Argument And No Return Value");
printf("\nEnter Any Number :");
scanf("%d",&a);
square2(a);
printf("\nExample Of A Function With Argument And Return Value");
printf("\nEnter Any Number :");
scanf("%d",&a);
printf("xSquare Of The Number Is :%d",square3(a) );
getch();
}



