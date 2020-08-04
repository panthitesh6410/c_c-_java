main()
{
long int num,i;
int dig,sum=0;
clrscr();
printf("Enter A Number :");
scanf("%ld",&num);
for(i=num;i>0;i=i/10)
{
dig=i%10;
sum=sum+dig;
}
printf("\nThe Sum Of The Digits Of %ld Is :%d",num,sum);
getch();
}