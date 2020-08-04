main()
{
long int num,i;
long int fac=1;
clrscr();
printf("Enter A Number :");
scanf("%ld",&num);
for(i=num;i>0;i--)
{
fac=fac*i;
}
printf("The Factorial Value For %ld Is %ld",num,fac);
getch();
}