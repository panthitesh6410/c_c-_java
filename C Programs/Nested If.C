main()
{
int date;
clrscr();
printf("Enter The Date :");
scanf("%d",&date);
if(date>=1)
{
if(date<=31)
{
printf("\nThe Entered Date Is Valid");
if(date==24)
{
printf("\nYes!Today Is Special");
}
}
}
getch();
}