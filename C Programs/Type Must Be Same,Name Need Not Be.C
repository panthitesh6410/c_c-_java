// Type Must Be Same But Name Need Not Be
sub(int a,int b)
{
int c;
c=a-b;
return(c);
}
main()
{
int ff;
int hh;
clrscr();
printf("\nEnter First Number :");
scanf("%d",&ff);
printf("\nEnter Second Number :");
scanf("%d",&hh);
printf("\nDifference :%d",sub(ff,hh));
getch();
}
