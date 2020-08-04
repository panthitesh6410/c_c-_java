main()
{
long int num;
long int i;
int dig;
clrscr();
printf("Enter A Number :");
scanf("%ld",&num);
printf("\nThe Reverse Of Number %ld Is :",num);
for(i=num;i>0;i=i/10)
{
dig=i%10;
printf("%d",dig);
}
getch();
}